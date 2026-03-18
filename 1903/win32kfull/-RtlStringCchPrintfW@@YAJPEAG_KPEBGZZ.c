/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DF460
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00B834C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     ?CreateDesktopNotificationEvent@@YAJPEAX@Z @ 0x1C00DC0A8 (-CreateDesktopNotificationEvent@@YAJPEAX@Z.c)
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C00DC460 (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00DCC20 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     xxxResolveDesktop @ 0x1C00DD9A0 (xxxResolveDesktop.c)
 *     NtUserCreateWindowStation @ 0x1C00DF4E0 (NtUserCreateWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     ?SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z @ 0x1C01D98A0 (-SetFilterKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagFILTERKEYS@@@Z.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D9A04 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z @ 0x1C01D9C48 (-SetMouseKeys@@YAHPEAU_UNICODE_STRING@@PEAUtagMOUSEKEYS@@@Z.c)
 *     ?SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z @ 0x1C01D9D48 (-SetSoundSentry@@YAHPEAU_UNICODE_STRING@@PEAUtagSOUNDSENTRYW@@@Z.c)
 *     UpdateWinIniInt @ 0x1C01DA754 (UpdateWinIniInt.c)
 *     ?ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z @ 0x1C01DB4DC (-ReadTabletButtonConfig@@YAJIQEBGPEAUtagTABLET_BUTTON_DESK_CONFIG@@@Z.c)
 *     ?ReadTabletButtonIndex@@YAJIPEAK@Z @ 0x1C01DB754 (-ReadTabletButtonIndex@@YAJIPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCchPrintfW(wchar_t *Dest, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Dest = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = _vsnwprintf(Dest, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Dest[v5] = 0;
      return (unsigned int)-2147483643;
    }
    else if ( v6 == v5 )
    {
      Dest[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
