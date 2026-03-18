/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C00D103C
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0029C40 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00BA890 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxSetInformationThread @ 0x1C00BB740 (xxxSetInformationThread.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00CC948 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxBroadcastMessage @ 0x1C013479C (xxxBroadcastMessage.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01C7050 (EditionxxxBroadcastSPIChange.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0023060 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C00CC948 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     _PostTransformableMessageIL @ 0x1C00D01F4 (_PostTransformableMessageIL.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C00D0ECC (GetPrimaryMonitorRectForWindow.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C00D1744 (xxxSendMessageCallback.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0133194 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  struct _LARGE_STRING *v8; // rdi
  unsigned int v10; // ebx
  int v12; // ebp
  __int64 v13; // rcx
  struct tagBWL *v14; // rsi
  unsigned __int64 *v15; // r13
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r8
  __int16 v22; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r15
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v28; // xmm0
  __int64 v29; // rdx
  struct _LARGE_STRING *v30; // r9
  __int64 v32; // rax
  _WORD *v33; // rcx
  unsigned __int16 v34; // ax
  unsigned int v35; // ecx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // [rsp+50h] [rbp-88h]
  struct tagBWL *v39; // [rsp+58h] [rbp-80h]
  _BYTE v40[8]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v41; // [rsp+68h] [rbp-70h]
  __int128 v42; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v43[3]; // [rsp+80h] [rbp-58h] BYREF
  _QWORD v44[3]; // [rsp+98h] [rbp-40h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+E0h] [rbp+8h]

  v8 = (struct _LARGE_STRING *)a4;
  v10 = a2;
  if ( (unsigned int)(a2 - 1024) <= 0xBBFF )
  {
    v38 = 1LL;
    UserSetLastError(87LL, a2, a3, a4);
  }
  else
  {
    v38 = 0LL;
  }
  v12 = a7;
  if ( !a7 && (v10 == 26 || v10 == 21 || v10 == 29 || v10 == 295 || v10 == 794 || v10 - 804 <= 1) )
    v12 = 1;
  if ( a1 )
    goto LABEL_5;
  if ( v10 >= 0x1A )
  {
    if ( v10 <= 0x1B )
    {
      if ( v8 )
      {
        if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)v40, v8) )
          return 0LL;
        PushW32ThreadLock(v41, v44, (__int64)Win32FreePool);
        v8 = (struct _LARGE_STRING *)v40;
      }
      xxxSystemBroadcastMessage(v10, a3);
      if ( v8 )
        PopAndFreeAlwaysW32ThreadLock((__int64)v44, v36);
      return 1LL;
    }
    if ( v10 != 30 )
    {
      v35 = 42;
      if ( v10 != 42 )
      {
        if ( v10 - 712 > 1 )
          goto LABEL_49;
        v35 = v10;
      }
      xxxSystemBroadcastMessage(v35, a3);
      return 1LL;
    }
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
      return 0LL;
  }
LABEL_49:
  a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  if ( !a1 )
  {
    UserSetLastError(5LL, a2, a3, a4);
    return 0LL;
  }
LABEL_5:
  v39 = BuildHwndList(*(struct tagWND **)(a1 + 88), 2, 0LL);
  v14 = v39;
  if ( !v39 )
    return 0LL;
  v15 = (unsigned __int64 *)((char *)v39 + 32);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  v17 = *((_QWORD *)v39 + 4);
  v18 = CurrentProcessWin32Process;
  if ( v17 == 1 )
    goto LABEL_26;
  do
  {
    LOBYTE(v16) = 1;
    v19 = HMValidateHandleNoSecure(v17, v16);
    v20 = v19;
    if ( v19 )
    {
      v21 = *(_QWORD *)(v19 + 40);
      if ( (*(_WORD *)(v21 + 42) & 0x2FFF) != 0x29C )
      {
        v22 = **(_WORD **)(*(_QWORD *)(v19 + 112) + 8LL);
        v16 = gpsi;
        if ( *(_WORD *)(gpsi + 908LL) != v22
          && gaOleMainThreadWndClass != v22
          && (!v38 || (*(_BYTE *)(v21 + 21) & 2) == 0)
          && (v10 - 784 > 1
           || (*(_BYTE *)(v21 + 31) & 0x10) != 0
           || (*(_DWORD *)(*(_QWORD *)(v20 + 16) + 488LL) & 0x800) != 0)
          && (a8 != 1 || *(_DWORD *)(v21 + 236) == 1)
          && (a8 != 2 || *(_DWORD *)(v21 + 236) != 1 || (*(_BYTE *)(v21 + 234) & 0x20) != 0) )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi);
          v43[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v43;
          v24 = 1LL;
          v43[1] = v20;
          _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
          v25 = 0LL;
          if ( !a5 )
          {
            xxxSendTransformableMessageTimeout((__int64 *)v20, v10, a3, (__int64)v8, 0, 0, 0LL, v12, 1);
            goto LABEL_23;
          }
          if ( a5 != 1 )
          {
            if ( a5 == 2 )
            {
              if ( !*(_QWORD *)(v20 + 96) )
                PostTransformableMessageIL((struct tagWND *)v20, v10, a3, (__int64)v8, v12);
              goto LABEL_23;
            }
            if ( a5 == 3 )
            {
              xxxSendMessageCallback(
                (struct tagWND *)v20,
                v10,
                *(_QWORD *)a6,
                *((_QWORD *)a6 + 1),
                *((_DWORD *)a6 + 4),
                v12,
                1);
              goto LABEL_23;
            }
            if ( a5 != 4 )
            {
              if ( a5 == 5 )
              {
                v37 = *(_QWORD *)(v20 + 16);
                if ( *(_QWORD *)(v37 + 424) != v18 || (*(_DWORD *)(v37 + 488) & 8) != 0 )
                {
                  xxxSendNotifyMessage(v20, v10, a3, v8, v12);
                }
                else
                {
                  _InterlockedAdd(&glSendMessage, 1u);
                  xxxSendTransformableMessageTimeout((__int64 *)v20, v10, a3, (__int64)v8, 0, 0, 0LL, 1, 1);
                }
                goto LABEL_23;
              }
              if ( a5 != 6 )
                goto LABEL_23;
            }
            v32 = xxxSendTransformableMessageTimeout(
                    (__int64 *)v20,
                    v10,
                    a3,
                    (__int64)v8,
                    *(_DWORD *)a6,
                    *((_DWORD *)a6 + 1),
                    *((__int64 **)a6 + 1),
                    v12,
                    1);
            v25 = 0LL;
            if ( v32 || a5 != 6 )
            {
LABEL_23:
              ThreadUnlock1(v24, v25);
              goto LABEL_24;
            }
          }
          v26 = 0LL;
          if ( v10 < 0x1A )
            goto LABEL_27;
          if ( v10 <= 0x1B )
          {
            if ( v8 )
            {
              v33 = (_WORD *)*((_QWORD *)v8 + 1);
              if ( *v33 )
              {
                v34 = UserAddAtomEx(v33, 0LL, 2LL);
                v26 = v34;
                if ( !v34 )
                  goto LABEL_22;
              }
              else
              {
                v26 = -1LL;
              }
            }
            if ( !(unsigned int)PostEventMessageEx(*(struct tagTHREADINFO **)(v20 + 16), v10, a3, v26, 0LL)
              && (unsigned __int64)(v26 + 1) > 1 )
            {
              UserDeleteAtom((unsigned __int16)v26);
            }
            goto LABEL_22;
          }
          if ( v10 == 126 )
          {
            PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(&v42, (const struct tagWND *)v20);
            v28 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
            v29 = 126LL;
            v30 = (struct _LARGE_STRING *)((unsigned __int16)(v28.m128i_i16[0]
                                                            - PrimaryMonitorRectForWindow->m128i_i64[0]) | ((unsigned __int16)(v28.m128i_i16[2] - HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0])) << 16));
          }
          else
          {
LABEL_27:
            v30 = v8;
            v29 = v10;
          }
          xxxSendNotifyMessage(v20, v29, a3, v30, v12);
LABEL_22:
          v18 = CurrentProcessWin32Process;
          goto LABEL_23;
        }
      }
    }
LABEL_24:
    v17 = *++v15;
  }
  while ( *v15 != 1 );
  v14 = v39;
LABEL_26:
  FreeHwndList(v14);
  return 1LL;
}
