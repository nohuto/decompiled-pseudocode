/*
 * XREFs of ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180035AB0
 * Callers:
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180032FDC (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x180033248 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x180033368 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180033F60 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18003466C (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x180034920 (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180035308 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 ATL::AtlHresultFromLastError(void)
{
  signed int LastError; // ecx
  __int64 result; // rax

  LastError = GetLastError();
  result = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    return (unsigned int)LastError;
  return result;
}
