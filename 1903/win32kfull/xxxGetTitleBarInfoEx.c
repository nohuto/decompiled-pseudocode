/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C008616C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C0086288 (DwmSyncGetTitleBarInfo.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00A8EB0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C024423C (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  void *v9; // rsi
  NTSTATUS TitleBarInfo; // esi
  __int64 CurrentThreadDpiAwarenessContext; // r15
  char *v12; // rsi
  __int64 v13; // rbp
  int v14; // eax
  ULONG v16; // eax
  _DWORD *v17; // rsi
  int v18; // ebx
  int v19; // edi
  int v20; // [rsp+70h] [rbp+18h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v20 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    goto LABEL_12;
  v9 = (void *)ReferenceDwmApiPort(v6, v5, v7);
  if ( gdwInAtomicOperation )
  {
    v8 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v8);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v9);
  EnterCrit(0LL, 1LL);
  if ( TitleBarInfo < 0 )
  {
    v16 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v16);
    v14 = 1;
  }
  else
  {
    v2 = 1;
    v21 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext();
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v21);
    v12 = (char *)a2 + 44;
    v13 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v12, v12, (unsigned int)CurrentThreadDpiAwarenessContext, &v21);
      v12 += 16;
      --v13;
    }
    while ( v13 );
    v14 = v20;
  }
  if ( !v14 )
  {
LABEL_12:
    memset((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v17 = (_DWORD *)((char *)a2 + 28);
    v18 = 2;
    v19 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v17 & 0x8000) == 0 )
        xxxCalcCaptionButton((_DWORD)a1, v18, (unsigned int)&v20, v19, (__int64)&v21, 1);
      ++v18;
      v19 += 16;
      ++v17;
    }
    while ( v18 <= 5 );
    return 1;
  }
  return v2;
}
