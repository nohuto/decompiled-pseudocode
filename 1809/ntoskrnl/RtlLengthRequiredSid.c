/*
 * XREFs of RtlLengthRequiredSid @ 0x1405BD5C0
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     WdipAccessCheck @ 0x14030DC54 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140318078 (EtwpApplyPayloadFilterInternal.c)
 *     SepVariableInitialization @ 0x1409AB3EC (SepVariableInitialization.c)
 *     PopNetInitialize @ 0x1409B2AB4 (PopNetInitialize.c)
 *     IopCreateUmdfDirectory @ 0x1409D9F10 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x1409DCBB4 (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1409DD530 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlLengthRequiredSid(ULONG SubAuthorityCount)
{
  if ( SubAuthorityCount > 0x3FFFFFF7 )
    return -1;
  else
    return 4 * SubAuthorityCount + 8;
}
