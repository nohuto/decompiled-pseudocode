/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70
 * Callers:
 *     _RegisterUserApiHook @ 0x1C000F248 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C000F850 (_RegisterDManipHook.c)
 *     _GetClassInfoEx @ 0x1C001EB84 (_GetClassInfoEx.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002464C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     _UnregisterClass @ 0x1C0026ABC (_UnregisterClass.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0026C20 (NtUserFindExistingCursorIcon.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00E8E10 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     NtUserShutdownBlockReasonCreate @ 0x1C0109F70 (NtUserShutdownBlockReasonCreate.c)
 *     NtUserGetDManipHookInitFunction @ 0x1C010B040 (NtUserGetDManipHookInitFunction.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C0112520 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C0114660 (xxxSetDeskWallpaper.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x1C01149CC (LoadWallpaperFilenameFromRegistry.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C0114BA0 (NtUserShutdownBlockReasonQuery.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D9884 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     _GetWOWClass @ 0x1C01EA750 (_GetWOWClass.c)
 *     UserGetHipDeviceInfo @ 0x1C01EFB60 (UserGetHipDeviceInfo.c)
 *     _SetDisplayMapping @ 0x1C01F02D0 (_SetDisplayMapping.c)
 *     xxxSendShutdownData @ 0x1C021F914 (xxxSendShutdownData.c)
 *     ?LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z @ 0x1C023FED8 (-LogHanging@KeyboardInputTelemetry@@SAXPEAUtagTHREADINFO@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02988AC (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02AE974 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
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
