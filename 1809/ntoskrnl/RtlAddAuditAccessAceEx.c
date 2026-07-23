/*
 * XREFs of RtlAddAuditAccessAceEx @ 0x140893BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAuditAccessAceEx(
        PACL Acl,
        ULONG Revision,
        ULONG Flags,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN Success,
        BOOLEAN Failure)
{
  ULONG v7; // eax
  int v8; // r8d

  v7 = Flags | 0x40;
  if ( !Success )
    v7 = Flags;
  v8 = v7 | 0x80;
  if ( !Failure )
    v8 = v7;
  return RtlpAddKnownAce(Acl, Revision, v8, AccessMask, (unsigned __int8 *)Sid, 2u);
}
