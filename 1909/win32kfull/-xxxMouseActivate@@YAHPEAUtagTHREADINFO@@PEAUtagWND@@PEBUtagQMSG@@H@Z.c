/*
 * XREFs of ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C000B38C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000B76C (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D5F78 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01E1818 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     xxxActiveWindowTracking @ 0x1C01E41B4 (xxxActiveWindowTracking.c)
 */

__int64 __fastcall xxxMouseActivate(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        const struct tagQMSG *a3,
        unsigned int a4)
{
  unsigned int v6; // r13d
  int v7; // ecx
  int v8; // r12d
  int active; // edi
  struct tagWND *v10; // rsi
  _BYTE *v11; // rcx
  BOOL v12; // edx
  __int64 v13; // rdx
  int v14; // r8d
  struct tagWND *v15; // rax
  bool v16; // zf
  __int64 v17; // rdx
  int v18; // r9d
  unsigned int v19; // ebx
  __int64 v21; // r8
  int v22; // eax
  int v23; // ecx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 TopLevelWindow; // rax
  __int64 v26; // [rsp+68h] [rbp-18h] BYREF
  struct tagWND *v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+78h] [rbp-8h]
  BOOL v29; // [rsp+C0h] [rbp+40h]
  int v30; // [rsp+D0h] [rbp+50h]

  v6 = *((_DWORD *)a3 + 6);
  v7 = -__CFSHR__(*((_DWORD *)a3 + 25), 22);
  v30 = v7;
  v8 = -__CFSHR__(*((_DWORD *)a3 + 25), 25);
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 53) + 112LL) )
    return 0LL;
  active = 0;
  if ( !v7 && (unsigned int)IsIndependentInputWindow(a2) )
  {
    if ( v6 - 513 <= 0xA )
    {
      v23 = 1097;
      if ( _bittest(&v23, v6 - 513) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a2);
        if ( CompositionInputWindowUIOwner )
        {
          TopLevelWindow = GetTopLevelWindow(CompositionInputWindowUIOwner);
          PostEventMessageEx(*(struct tagTHREADINFO **)(TopLevelWindow + 16), 0, 0LL, *(_QWORD *)TopLevelWindow, 0LL);
        }
      }
    }
    return 0LL;
  }
  v10 = a2;
  v26 = *((_QWORD *)a1 + 51);
  *((_QWORD *)a1 + 51) = &v26;
  v27 = a2;
  if ( a2 )
    HMLockObject(a2);
  v11 = (_BYTE *)*((_QWORD *)a2 + 5);
  v12 = 1;
  if ( (v11[21] & 2) != 0 )
    v12 = (v11[24] & 4) == 0;
  v29 = v12;
  if ( v6 == 513 || v6 == 516 || v6 == 519 || v6 == 523 )
  {
    if ( (v11[31] & 0xC0) == 0x40 )
    {
      do
      {
        v10 = (struct tagWND *)*((_QWORD *)v10 + 13);
        if ( v12 )
        {
          ThreadUnlock1();
          v26 = *((_QWORD *)a1 + 51);
          *((_QWORD *)a1 + 51) = &v26;
          v27 = v10;
          if ( v10 )
            HMLockObject(v10);
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout((ULONG_PTR)v10, 0, 0, 0LL, 1, 0);
          v12 = v29;
        }
      }
      while ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 0xC0) == 0x40 );
      active = 0;
    }
    if ( !v12 )
    {
      ThreadUnlock1();
      v26 = *((_QWORD *)a1 + 51);
      *((_QWORD *)a1 + 51) = &v26;
      v27 = v10;
      HMLockObject(v10);
    }
  }
  v13 = *((_QWORD *)a1 + 53);
  v14 = 0;
  v15 = *(struct tagWND **)(v13 + 128);
  if ( v8 )
    v16 = v15 == v10;
  else
    v16 = v15 == a2;
  if ( !v30 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 && v6 == 512 )
  {
    LOWORD(v19) = a4;
    active = xxxActiveWindowTracking(a2, 512LL, a4);
    goto LABEL_23;
  }
  LOBYTE(v14) = !v16;
  if ( !v14 && (*(_DWORD *)(v13 + 396) & 0x8000) == 0 || v10 == (struct tagWND *)GetDesktopWindow(v10) )
  {
    v19 = a4;
    goto LABEL_28;
  }
  if ( v6 == 513 || v6 == 516 || v6 == 519 || v6 == 523 )
  {
    if ( v18 )
    {
      v19 = a4;
      active = (v8 != 0) + 3;
    }
    else
    {
      if ( v8 )
      {
        v19 = a4;
        active = 2;
LABEL_47:
        if ( (v10 != *(struct tagWND **)(v17 + 128) || (*(_DWORD *)(v17 + 396) & 0x8000) != 0)
          && !(unsigned __int8)xxxActivateWindowWithOptions(v10, 3LL, 49LL, *(_DWORD *)(v17 + 156) != 0)
          || (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 8) != 0
          || active == 2 )
        {
          goto LABEL_67;
        }
LABEL_28:
        active = 0;
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0
          && CheckOnTop(a1, v10, v6)
          && v19 == 1
          && (*(_DWORD *)(*((_QWORD *)v10 + 2) + 480LL) & 8) != 0 )
        {
          active = (*(_BYTE *)(*((_QWORD *)v10 + 5) + 24LL) & 8) == 0;
        }
        goto LABEL_23;
      }
      if ( v10 )
        v21 = *(_QWORD *)v10;
      else
        v21 = 0LL;
      v19 = a4;
      v22 = xxxSendMessage(a2, 33LL, v21, (unsigned __int16)a4 | ((unsigned __int16)v6 << 16));
      v17 = *((_QWORD *)a1 + 53);
      active = v22;
    }
    if ( active < 0 )
      goto LABEL_23;
    if ( active > 2 )
    {
      if ( active == 3 )
      {
        active = 0;
        goto LABEL_23;
      }
      if ( active != 4 )
        goto LABEL_23;
LABEL_67:
      active = 1;
      goto LABEL_23;
    }
    goto LABEL_47;
  }
  LOWORD(v19) = a4;
LABEL_23:
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 53) + 112LL) )
    xxxSendMessage(a2, 32LL, *(_QWORD *)a2, (unsigned __int16)v19 | ((unsigned __int16)v6 << 16));
  ThreadUnlock1();
  return (unsigned int)active;
}
