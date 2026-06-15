/*
 * XREFs of ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18002DB74
 * Callers:
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180032FDC (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800338EC (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18003466C (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180034920 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180035308 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __noreturn ATL::AtlThrowLastWin32(void)
{
  signed int LastError; // eax
  unsigned int v1; // ecx

  LastError = GetLastError();
  v1 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v1 = LastError;
  ATL::AtlThrowImpl(v1);
}
