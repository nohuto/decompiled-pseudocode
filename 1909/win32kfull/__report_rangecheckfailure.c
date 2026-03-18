/*
 * XREFs of __report_rangecheckfailure @ 0x1C0163AC0
 * Callers:
 *     SetAppCompatFlags @ 0x1C00183E0 (SetAppCompatFlags.c)
 *     RemoveHmodDependency @ 0x1C0053B88 (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C01022DC (xxxDoSysExpunge.c)
 *     NtUserRemoteConnect @ 0x1C0116370 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D9884 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C0292A60 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0292C30 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02986B0 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02A8470 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
