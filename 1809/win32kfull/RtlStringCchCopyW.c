/*
 * XREFs of RtlStringCchCopyW @ 0x1C006B110
 * Callers:
 *     _UnregisterClass @ 0x1C0022334 (_UnregisterClass.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0023744 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     NtUserFindExistingCursorIcon @ 0x1C006AEE0 (NtUserFindExistingCursorIcon.c)
 *     _FindWindowEx @ 0x1C0070458 (_FindWindowEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     _GetClassInfoEx @ 0x1C00AED40 (_GetClassInfoEx.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C011CC14 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0124850 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C0125710 (NtUserGetDManipHookInitFunction.c)
 *     _RegisterDManipHook @ 0x1C0125A60 (_RegisterDManipHook.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C012C780 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C012CB00 (NtUserShutdownBlockReasonQuery.c)
 *     xxxSetDeskWallpaper @ 0x1C012E4C4 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C012E80C (LoadWallpaperFilenameFromRegistry.c)
 *     _RegisterUserApiHook @ 0x1C0130888 (_RegisterUserApiHook.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C6654 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     _GetWOWClass @ 0x1C01D50BC (_GetWOWClass.c)
 *     UserGetHipDeviceInfo @ 0x1C01DA560 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01DADC0 (_SetDisplayMapping.c)
 *     xxxSendShutdownData @ 0x1C0208490 (xxxSendShutdownData.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C0228048 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
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
