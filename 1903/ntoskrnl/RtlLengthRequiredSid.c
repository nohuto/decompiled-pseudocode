/*
 * XREFs of RtlLengthRequiredSid @ 0x14061ACF0
 * Callers:
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     WdipAccessCheck @ 0x14032B918 (WdipAccessCheck.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140336BD8 (EtwpApplyPayloadFilterInternal.c)
 *     SepVariableInitialization @ 0x1409FEA90 (SepVariableInitialization.c)
 *     PopNetInitialize @ 0x140A061C0 (PopNetInitialize.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140A0AC88 (CmpInitializeTrustedInstallerSid.c)
 *     IopCreateUmdfDirectory @ 0x140A1CCAC (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x140A1FDD4 (PopCreateTimebrokerServiceSid.c)
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
