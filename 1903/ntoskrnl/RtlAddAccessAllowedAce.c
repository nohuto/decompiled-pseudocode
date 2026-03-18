/*
 * XREFs of RtlAddAccessAllowedAce @ 0x140680120
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400B39D0 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1401335B8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepInitProcessAuditSd @ 0x14018AED0 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x14030C230 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14032B918 (WdipAccessCheck.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140964954 (ViInitializeLocalSystemDescriptor.c)
 *     SepInitSystemDacls @ 0x140A00740 (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x140A01540 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A01AF8 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A01D8C (SeMakeAnonymousLogonToken.c)
 *     WmipInitializeSecurity @ 0x140A188FC (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A1C0DC (PspInitializeSystemPartitionPhase0.c)
 *     IopCreateUmdfDirectory @ 0x140A1CCAC (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x140A1DD44 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140A1E820 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140A3A4B4 (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1405DC9F0 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 0);
}
