/*
 * XREFs of RtlAddAuditAccessAce @ 0x140892914
 * Callers:
 *     SepInitProcessAuditSd @ 0x14017D0EC (SepInitProcessAuditSd.c)
 *     ObInitSystem @ 0x1409B1964 (ObInitSystem.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406315A0 (RtlpAddKnownAce.c)
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
