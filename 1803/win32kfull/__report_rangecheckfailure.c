/*
 * XREFs of __report_rangecheckfailure @ 0x1C01396A0
 * Callers:
 *     NtUserRemoteConnect @ 0x1C0050320 (NtUserRemoteConnect.c)
 *     SetAppCompatFlags @ 0x1C00C1A00 (SetAppCompatFlags.c)
 *     xxxDoSysExpunge @ 0x1C00D7298 (xxxDoSysExpunge.c)
 *     RemoveHmodDependency @ 0x1C00D8460 (RemoveHmodDependency.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01A4354 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     bConvertMBCS @ 0x1C0218DA8 (bConvertMBCS.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C0268DE0 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C0268F90 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0270720 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C027FC50 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
