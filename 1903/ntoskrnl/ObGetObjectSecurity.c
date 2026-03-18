/*
 * XREFs of ObGetObjectSecurity @ 0x1406EDDE0
 * Callers:
 *     <none>
 * Callees:
 *     ObpGetObjectSecurity @ 0x1405C7180 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity((__int64)Object, SecurityDescriptor, MemoryAllocated, 0);
}
