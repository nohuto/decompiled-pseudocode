/*
 * XREFs of RtlLengthRequiredSid @ 0x1405BE5C0
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     WdipAccessCheck @ 0x14030DF44 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140318368 (EtwpApplyPayloadFilterInternal.c)
 *     SepVariableInitialization @ 0x1409AC3EC (SepVariableInitialization.c)
 *     PopNetInitialize @ 0x1409B3AB4 (PopNetInitialize.c)
 *     IopCreateUmdfDirectory @ 0x1409DAF10 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x1409DDBB4 (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1409DE530 (CmpInitializeTrustedInstallerSid.c)
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
