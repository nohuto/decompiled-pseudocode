/*
 * XREFs of RtlAddAuditAccessAce @ 0x1408D048C
 * Callers:
 *     SepInitProcessAuditSd @ 0x14018B860 (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1405DD190 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAuditAccessAce(
        PACL Acl,
        ULONG Revision,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN Success,
        BOOLEAN Failure)
{
  return RtlpAddKnownAce(Acl, 2u, 192, AccessMask, (unsigned __int8 *)SeWorldSid, 2u);
}
