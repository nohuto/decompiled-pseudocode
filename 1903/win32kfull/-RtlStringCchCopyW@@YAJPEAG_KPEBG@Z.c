/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0
 * Callers:
 *     _GetClassInfoEx @ 0x1C001ECF4 (_GetClassInfoEx.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002F08C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     _UnregisterClass @ 0x1C00314FC (_UnregisterClass.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0031660 (NtUserFindExistingCursorIcon.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C010EA90 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C012ED70 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C01304F0 (NtUserGetDManipHookInitFunction.c)
 *     _RegisterDManipHook @ 0x1C0130970 (_RegisterDManipHook.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C0138520 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C013A660 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C013A9CC (LoadWallpaperFilenameFromRegistry.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C013ABA0 (NtUserShutdownBlockReasonQuery.c)
 *     _RegisterUserApiHook @ 0x1C013C448 (_RegisterUserApiHook.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D9A04 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     _GetWOWClass @ 0x1C01EA8D0 (_GetWOWClass.c)
 *     UserGetHipDeviceInfo @ 0x1C01EFCE0 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01F0450 (_SetDisplayMapping.c)
 *     xxxSendShutdownData @ 0x1C021FE54 (xxxSendShutdownData.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C02404F8 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0298E5C (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02AEE24 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyW(char *a1, __int64 a2, char *a3)
{
  signed int v3; // r9d
  __int64 v4; // r10
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - a1;
      do
      {
        if ( !(v4 + a2) )
          break;
        v6 = *(_WORD *)&a1[v5];
        if ( !v6 )
          break;
        *(_WORD *)a1 = v6;
        a1 += 2;
        --a2;
      }
      while ( a2 );
    }
    v7 = (unsigned __int16 *)(a1 - 2);
    if ( a2 )
      v7 = (unsigned __int16 *)a1;
    v3 = a2 == 0 ? 0x80000005 : 0;
    *v7 = 0;
  }
  return (unsigned int)v3;
}
