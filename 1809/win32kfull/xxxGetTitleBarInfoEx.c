/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C00B9EE0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0020584 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C00BA0EC (DwmSyncGetTitleBarInfo.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C022B200 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS TitleBarInfo; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // r15d
  char *v15; // rsi
  __int64 v16; // rbp
  int v17; // eax
  ULONG v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rsi
  int v24; // ebx
  int v25; // edi
  int v26; // [rsp+70h] [rbp+18h] BYREF
  __int64 v27; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v26 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    goto LABEL_12;
  v8 = (void *)ReferenceDwmApiPort(v6, v5);
  if ( gdwInAtomicOperation )
  {
    v7 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation, v9, v10);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v8);
  EnterCrit(0LL, 1LL);
  if ( TitleBarInfo < 0 )
  {
    v19 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v19, v20, v21, v22);
    v17 = 1;
  }
  else
  {
    v2 = 1;
    v27 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v13, v12);
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v27);
    v15 = (char *)a2 + 44;
    v16 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v15, v15, CurrentThreadDpiAwarenessContext, &v27);
      v15 += 16;
      --v16;
    }
    while ( v16 );
    v17 = v26;
  }
  if ( !v17 )
  {
LABEL_12:
    memset((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v23 = (_DWORD *)((char *)a2 + 28);
    v24 = 2;
    v25 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v23 & 0x8000) == 0 )
        xxxCalcCaptionButton((_DWORD)a1, v24, (unsigned int)&v26, v25, (__int64)&v27, 1);
      ++v24;
      v25 += 16;
      ++v23;
    }
    while ( v24 <= 5 );
    return 1;
  }
  return v2;
}
