/*
 * XREFs of ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0072648
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072608 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01C2E20 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01CD42C (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01CF6C8 (xxxActiveWindowTracking.c)
 */

__int64 __fastcall xxxMouseActivate(struct tagTHREADINFO *a1, struct tagWND *a2, const struct tagQMSG *a3, int a4)
{
  __int64 v5; // rbx
  __int64 v7; // r13
  int v8; // r12d
  int v9; // r15d
  int active; // edi
  struct tagWND *v11; // rsi
  int v12; // r9d
  _BYTE *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rcx
  int v20; // ebx
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // ecx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  __int64 v28; // [rsp+60h] [rbp-58h] BYREF
  struct tagWND *v29; // [rsp+68h] [rbp-50h]
  unsigned int v30; // [rsp+C0h] [rbp+8h]
  __int64 v31; // [rsp+D0h] [rbp+18h]

  v5 = *(_QWORD *)((char *)a3 + 52);
  v7 = *((unsigned int *)a3 + 6);
  v31 = *((_QWORD *)a3 + 4);
  v8 = -__CFSHR__(*((_DWORD *)a3 + 25), 22);
  v9 = -__CFSHR__(*((_DWORD *)a3 + 25), 25);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 54) + 104LL) )
    return 0LL;
  active = 0;
  if ( !__CFSHR__(*((_DWORD *)a3 + 25), 22) && (unsigned int)IsIndependentInputWindow(a2) )
  {
    if ( (unsigned int)(v7 - 513) <= 0xA )
    {
      v24 = 1097;
      if ( _bittest(&v24, v7 - 513) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a2);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
          PostEventMessageEx(*(struct tagTHREADINFO **)(TopLevelWindow + 16), 0, 0LL, *(_QWORD *)TopLevelWindow, 0LL);
        }
      }
    }
    return 0LL;
  }
  v11 = a2;
  v28 = *((_QWORD *)a1 + 52);
  *((_QWORD *)a1 + 52) = &v28;
  LOBYTE(v12) = 1;
  v29 = a2;
  if ( a2 )
    _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
  v13 = (_BYTE *)*((_QWORD *)a2 + 5);
  v14 = (v13[21] & 2) == 0 || (v13[24] & 4) == 0;
  v30 = v14;
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( (v13[31] & 0xC0) == 0x40 )
    {
      do
      {
        v11 = (struct tagWND *)*((_QWORD *)v11 + 10);
        if ( (_DWORD)v14 )
        {
          ThreadUnlock1(v13, v14);
          v28 = *((_QWORD *)a1 + 52);
          *((_QWORD *)a1 + 52) = &v28;
          v29 = v11;
          if ( v11 )
            _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
          v21 = *((_QWORD *)v11 + 5);
          v22 = *(_DWORD *)(v21 + 104);
          v23 = *(_DWORD *)(v21 + 108);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(
            (__int64 *)v11,
            0x210u,
            v31 | v7,
            (unsigned __int16)(v5 - v22) | ((unsigned __int64)(unsigned __int16)(WORD2(v5) - v23) << 16),
            0,
            0,
            0LL,
            1,
            0);
          v14 = v30;
        }
        LOBYTE(v13) = *(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 0xC0;
      }
      while ( (_BYTE)v13 == 64 );
      active = 0;
      LOBYTE(v12) = 1;
    }
    if ( !(_DWORD)v14 )
    {
      ThreadUnlock1(v13, v14);
      LOBYTE(v12) = 1;
      v28 = *((_QWORD *)a1 + 52);
      *((_QWORD *)a1 + 52) = &v28;
      v29 = v11;
      _InterlockedAdd((volatile signed __int32 *)v11 + 2, 1u);
    }
  }
  v15 = *((_QWORD *)a1 + 54);
  v16 = 0LL;
  if ( v9 )
    v17 = *(_QWORD *)(v15 + 120) == (_QWORD)v11;
  else
    v17 = *(_QWORD *)(v15 + 120) == (_QWORD)a2;
  LOBYTE(v16) = !v17;
  if ( !v8 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 && (_DWORD)v7 == 512 )
  {
    active = xxxActiveWindowTracking(a2, 512LL);
    goto LABEL_23;
  }
  if ( !(_DWORD)v16 && (*(_DWORD *)(v15 + 388) & 0x8000) == 0 || v11 == (struct tagWND *)GetDesktopWindow((__int64)v11) )
  {
    v20 = a4;
    goto LABEL_28;
  }
  if ( (_DWORD)v7 == 513 || (_DWORD)v7 == 516 || (_DWORD)v7 == 519 || (_DWORD)v7 == 523 )
  {
    if ( v8 )
    {
      v20 = a4;
      active = (v9 != 0) + 3;
    }
    else
    {
      if ( v9 )
      {
        v20 = a4;
        active = 2;
LABEL_45:
        v18 = *((_QWORD *)a1 + 54);
        if ( (v11 != *(struct tagWND **)(v18 + 120) || (*(_DWORD *)(v18 + 388) & 0x8000) != 0)
          && !(unsigned __int8)xxxActivateWindowWithOptions(v11, 3LL, 49LL, *(_DWORD *)(v18 + 148) != 0)
          || (*(_BYTE *)(*((_QWORD *)v11 + 5) + 31LL) & 8) != 0
          || active == 2 )
        {
          active = 1;
          goto LABEL_23;
        }
        LOBYTE(v12) = 1;
LABEL_28:
        active = 0;
        v18 = (unsigned int)gpdwCPUserPreferencesMask;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & (unsigned __int8)v12) != 0 )
        {
          if ( CheckOnTop(a1, v11, v7) )
          {
            v16 = 1LL;
            if ( v20 == 1 )
            {
              v18 = *(unsigned int *)(*((_QWORD *)v11 + 2) + 488LL);
              if ( (v18 & 8) != 0 )
                active = (*(_BYTE *)(*((_QWORD *)v11 + 5) + 24LL) & 8) == 0;
            }
          }
        }
        goto LABEL_23;
      }
      v20 = a4;
      active = xxxSendMessage((ULONG_PTR)a2);
      v12 = 1;
    }
    if ( active < 0 )
      goto LABEL_23;
    if ( active > 2 )
    {
      if ( active == 3 )
      {
        active = 0;
      }
      else if ( active == 4 )
      {
        active = v12;
      }
      goto LABEL_23;
    }
    goto LABEL_45;
  }
LABEL_23:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 54) + 104LL) )
    xxxSendMessage((ULONG_PTR)a2);
  ThreadUnlock1(v18, v16);
  return (unsigned int)active;
}
