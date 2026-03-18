/*
 * XREFs of RtlStringCchCopyW @ 0x1C0015490
 * Callers:
 *     _SetCursorIconData @ 0x1C0014A20 (_SetCursorIconData.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0015280 (NtUserFindExistingCursorIcon.c)
 *     _GetClassInfoEx @ 0x1C0018304 (_GetClassInfoEx.c)
 *     _FindWindowEx @ 0x1C0029C30 (_FindWindowEx.c)
 *     _UnregisterClass @ 0x1C0030D3C (_UnregisterClass.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00BD6A4 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     _RegisterUserApiHook @ 0x1C00D6CA4 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C00D6F44 (_RegisterDManipHook.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0104AE0 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C0105E50 (NtUserGetDManipHookInitFunction.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C010B870 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C010BFD0 (NtUserShutdownBlockReasonQuery.c)
 *     xxxSetDeskWallpaper @ 0x1C010CF94 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C010D2E0 (LoadWallpaperFilenameFromRegistry.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01A4354 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     _GetWOWClass @ 0x1C01B2990 (_GetWOWClass.c)
 *     UserGetHipDeviceInfo @ 0x1C01B7C00 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01B81C8 (_SetDisplayMapping.c)
 *     xxxSendShutdownData @ 0x1C01E264C (xxxSendShutdownData.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C01FF7D4 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  wchar_t v6; // ax
  NTSTRSAFE_PWSTR v7; // rax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    if ( cchDest )
    {
      v4 = 2147483646 - cchDest;
      v5 = (char *)pszSrc - (char *)pszDest;
      do
      {
        if ( !(v4 + cchDest) )
          break;
        v6 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v5);
        if ( !v6 )
          break;
        *pszDest++ = v6;
        --cchDest;
      }
      while ( cchDest );
    }
    v7 = pszDest - 1;
    if ( cchDest )
      v7 = pszDest;
    v3 = cchDest == 0 ? 0x80000005 : 0;
    *v7 = 0;
  }
  return v3;
}
