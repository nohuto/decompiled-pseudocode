/*
 * XREFs of RtlAddAccessAllowedAce @ 0x14069D1C0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1401340A8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepInitProcessAuditSd @ 0x14018B860 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x14030BCE0 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14032B368 (WdipAccessCheck.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140964954 (ViInitializeLocalSystemDescriptor.c)
 *     SepInitSystemDacls @ 0x140A00C5C (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x140A01A5C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140A02014 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140A022A8 (SeMakeAnonymousLogonToken.c)
 *     WmipInitializeSecurity @ 0x140A18DBC (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A1C2B8 (PspInitializeSystemPartitionPhase0.c)
 *     IopCreateUmdfDirectory @ 0x140A1CE88 (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x140A1DF20 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x140A1EA00 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x140A3A284 (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 0);
}
