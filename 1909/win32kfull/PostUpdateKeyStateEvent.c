/*
 * XREFs of PostUpdateKeyStateEvent @ 0x1C01388DC
 * Callers:
 *     PostInputMessage @ 0x1C002A06C (PostInputMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00451E0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     NtUserGetKeyState @ 0x1C0137940 (NtUserGetKeyState.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     EditionPostUpdateKeyStateEvent @ 0x1C0138830 (EditionPostUpdateKeyStateEvent.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     ??0?$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ @ 0x1C0138A70 (--0-$CLockDomainSharedLeaf@VDLT_ASYNCKEYSTATE@@@@QEAA@XZ.c)
 *     ProcessUpdateKeyStateEvent @ 0x1C0138AA8 (ProcessUpdateKeyStateEvent.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall PostUpdateKeyStateEvent(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 *v5; // rsi
  unsigned int v6; // edi
  void *v7; // rsi
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rcx
  _OWORD *v11; // rbp
  int v12; // r9d
  _OWORD *v13; // rcx
  _DWORD *v14; // rdx
  _DWORD *v15; // rcx
  char v16; // [rsp+60h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 396);
  if ( (result & 1) != 0 )
  {
    result = gptiRit;
    v4 = *(_QWORD *)(a1 + 104);
    if ( v4 != gptiRit )
    {
      v5 = *(__int64 **)(a1 + 24);
      v6 = 0;
      if ( !v5 )
      {
        CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v16);
        v7 = (void *)(a1 + 204);
        ProcessUpdateKeyStateEvent(a1, *(_QWORD *)&gafAsyncKeyState[0], a1 + 204);
LABEL_5:
        result = (__int64)memset(v7, 0, 0x20uLL);
        *(_DWORD *)(a1 + 396) &= ~1u;
        return result;
      }
      if ( !v4 || (*(_BYTE *)(*(_QWORD *)(v4 + 440) + 6LL) & 1) == 0 )
      {
        v8 = *(_QWORD *)(a1 + 96);
        if ( !v8 || (*(_BYTE *)(*(_QWORD *)(v8 + 440) + 6LL) & 4) == 0 )
        {
          while ( 1 )
          {
            v9 = *((_DWORD *)v5 + 6);
            if ( (unsigned int)(v9 - 256) > 9 )
              break;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v12 = 20;
LABEL_22:
              WPP_RECORDER_SF_q(v9, a2, 15, v12, (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids, a1);
            }
LABEL_13:
            v5 = (__int64 *)*v5;
            if ( !v5 )
              goto LABEL_14;
          }
          if ( (unsigned int)(v9 - 513) > 0xC || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_13;
          v12 = 21;
          goto LABEL_22;
        }
      }
LABEL_14:
      v10 = *(_QWORD *)(a1 + 32);
      if ( *(_DWORD *)(v10 + 96) == 4 )
      {
        v7 = (void *)(a1 + 204);
        v13 = *(_OWORD **)(v10 + 32);
        v14 = v13 + 4;
        *v13 = gafAsyncKeyState[0];
        v13[1] = gafAsyncKeyState[1];
        v13[2] = gafAsyncKeyState[2];
        v13[3] = gafAsyncKeyState[3];
        v15 = (_DWORD *)(a1 + 204);
        do
        {
          ++v6;
          *v14++ |= *v15++;
        }
        while ( v6 < 8 );
        SetWakeBit(*(_QWORD *)(a1 + 104), 0x2040u);
        goto LABEL_5;
      }
      result = Win32AllocPool(96LL, 1936421717LL);
      v11 = (_OWORD *)result;
      if ( result )
      {
        CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>::CLockDomainSharedLeaf<DLT_ASYNCKEYSTATE>(&v16);
        v7 = (void *)(a1 + 204);
        *v11 = gafAsyncKeyState[0];
        v11[1] = gafAsyncKeyState[1];
        v11[2] = gafAsyncKeyState[2];
        v11[3] = gafAsyncKeyState[3];
        v11[4] = *(_OWORD *)(a1 + 204);
        v11[5] = *(_OWORD *)(a1 + 220);
        if ( !(unsigned int)PostEventMessageEx(
                              *(struct tagTHREADINFO **)(a1 + 104),
                              a1,
                              4u,
                              0LL,
                              0,
                              (__int64)v11,
                              0LL,
                              0LL) )
          return Win32FreePool(v11);
        goto LABEL_5;
      }
    }
  }
  return result;
}
