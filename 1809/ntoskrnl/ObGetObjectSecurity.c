/*
 * XREFs of ObGetObjectSecurity @ 0x1407021D0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6EF8 (SepSetProcessTrustLabelAceForToken.c)
 * Callees:
 *     ObpGetObjectSecurity @ 0x1405CA580 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity((__int64)Object, SecurityDescriptor, MemoryAllocated, 0);
}
