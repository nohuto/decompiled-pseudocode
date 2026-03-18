/*
 * XREFs of xxxGetTitleBarInfoEx @ 0x1C0056FA4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0039270 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DwmSyncGetTitleBarInfo @ 0x1C005709C (DwmSyncGetTitleBarInfo.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C0202828 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxGetTitleBarInfoEx(struct tagWND *a1, struct tagTITLEBARINFO *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  void *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS TitleBarInfo; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 CurrentThreadDpiAwarenessContext; // r15
  char *v16; // rsi
  __int64 v17; // rbp
  int v18; // eax
  ULONG v20; // eax
  __int64 v21; // rdx
  _DWORD *v22; // rsi
  int v23; // ebx
  int v24; // edi
  int v25; // [rsp+70h] [rbp+18h] BYREF
  __int64 v26; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v25 = 0;
  if ( !(unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
    goto LABEL_12;
  v9 = (void *)ReferenceDwmApiPort(v6, v5, v7);
  if ( gdwInAtomicOperation )
  {
    v8 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v8, gdwInAtomicOperation, v10, v11);
  TitleBarInfo = DwmSyncGetTitleBarInfo(v9);
  EnterCrit(0LL, 1LL);
  if ( TitleBarInfo < 0 )
  {
    v20 = RtlNtStatusToDosError(TitleBarInfo);
    UserSetLastError(v20, v21);
    v18 = 1;
  }
  else
  {
    v2 = 1;
    v26 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext(v14, v13);
    PhysicalToLogicalDPIRect((char *)a2 + 4, (char *)a2 + 4, CurrentThreadDpiAwarenessContext, &v26);
    v16 = (char *)a2 + 44;
    v17 = 6LL;
    do
    {
      PhysicalToLogicalDPIRect(v16, v16, (unsigned int)CurrentThreadDpiAwarenessContext, &v26);
      v16 += 16;
      --v17;
    }
    while ( v17 );
    v18 = v25;
  }
  if ( !v18 )
  {
LABEL_12:
    memset((char *)a2 + 20, 0, 0x78uLL);
    xxxCommonGetTitleBarInfo(a1, a2);
    v22 = (_DWORD *)((char *)a2 + 28);
    v23 = 2;
    v24 = (_DWORD)a2 + 76;
    do
    {
      if ( (*v22 & 0x8000) == 0 )
        xxxCalcCaptionButton((_DWORD)a1, v23, (unsigned int)&v25, v24, (__int64)&v26, 1);
      ++v23;
      v24 += 16;
      ++v22;
    }
    while ( v23 <= 5 );
    return 1;
  }
  return v2;
}
