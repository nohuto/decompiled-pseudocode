/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1406555A0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400DCB10 (RtlCheckTokenMembershipEx.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140132CF8 (SepAppendAceToTokenDefaultDacl.c)
 *     SepInitProcessAuditSd @ 0x14017D0CC (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x1402ED9B0 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14030DC54 (WdipAccessCheck.c)
 *     ViInitializeLocalSystemDescriptor @ 0x14092647C (ViInitializeLocalSystemDescriptor.c)
 *     SepInitSystemDacls @ 0x1409AD07C (SepInitSystemDacls.c)
 *     SeMakeSystemToken @ 0x1409ADE18 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1409AE3B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1409AE624 (SeMakeAnonymousLogonToken.c)
 *     WmipInitializeSecurity @ 0x1409D4198 (WmipInitializeSecurity.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1409D94B0 (PspInitializeSystemPartitionPhase0.c)
 *     IopCreateUmdfDirectory @ 0x1409D9F10 (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x1409DA2F8 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x1409DBCC0 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1409F4F30 (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406315A0 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 0);
}
