/*
 * XREFs of __report_rangecheckfailure @ 0x1C0162AF0
 * Callers:
 *     SetAppCompatFlags @ 0x1C008EDB0 (SetAppCompatFlags.c)
 *     RemoveHmodDependency @ 0x1C00B2D28 (RemoveHmodDependency.c)
 *     NtUserRemoteConnect @ 0x1C00E0E70 (NtUserRemoteConnect.c)
 *     xxxDoSysExpunge @ 0x1C0126BAC (xxxDoSysExpunge.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D9A04 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C0293010 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C02931E0 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0298C60 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02A8920 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
