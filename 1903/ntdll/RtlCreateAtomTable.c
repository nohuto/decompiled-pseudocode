/*
 * XREFs of RtlCreateAtomTable @ 0x18005BB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return sub_18005AF40(NumberOfBuckets, (__int64)AtomTableHandle, AtomTableHandle);
}
