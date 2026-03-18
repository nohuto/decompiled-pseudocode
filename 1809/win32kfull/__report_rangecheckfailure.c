/*
 * XREFs of __report_rangecheckfailure @ 0x1C015AFA0
 * Callers:
 *     SetAppCompatFlags @ 0x1C000CEA0 (SetAppCompatFlags.c)
 *     RemoveHmodDependency @ 0x1C00B5CCC (RemoveHmodDependency.c)
 *     xxxDoSysExpunge @ 0x1C00B7EE4 (xxxDoSysExpunge.c)
 *     NtUserRemoteConnect @ 0x1C0130B30 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01C6654 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C027CD00 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C027CED0 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0283768 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C0292D50 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
