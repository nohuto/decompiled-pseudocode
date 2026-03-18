/*
 * XREFs of RtlLengthRequiredSid @ 0x14061C800
 * Callers:
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     WdipAccessCheck @ 0x14032B368 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140336638 (EtwpApplyPayloadFilterInternal.c)
 *     SepVariableInitialization @ 0x1409FEFAC (SepVariableInitialization.c)
 *     PopNetInitialize @ 0x140A066DC (PopNetInitialize.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A0B1B4 (CmpInitializeTrustedInstallerSid.c)
 *     IopCreateUmdfDirectory @ 0x140A1CE88 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A1FFB4 (PopCreateTimebrokerServiceSid.c)
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
