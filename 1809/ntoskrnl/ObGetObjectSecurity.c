/*
 * XREFs of ObGetObjectSecurity @ 0x140700F50
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6D70 (SepSetProcessTrustLabelAceForToken.c)
 * Callees:
 *     ObpGetObjectSecurity @ 0x1405C9580 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity((__int64)Object, SecurityDescriptor, MemoryAllocated, 0);
}
