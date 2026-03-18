/*
 * XREFs of ObGetObjectSecurity @ 0x1406EF300
 * Callers:
 *     <none>
 * Callees:
 *     ObpGetObjectSecurity @ 0x1405C7680 (ObpGetObjectSecurity.c)
 */

NTSTATUS __stdcall ObGetObjectSecurity(
        PVOID Object,
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        PBOOLEAN MemoryAllocated)
{
  return ObpGetObjectSecurity((__int64)Object, SecurityDescriptor, MemoryAllocated, 0);
}
