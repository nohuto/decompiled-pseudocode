/*
 * XREFs of NtOpenPartition @ 0x1407881F0
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405FDF90 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 */

NTSTATUS __cdecl NtOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS result; // eax
  HANDLE Handle[4]; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PartitionHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)PartitionHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName((__int64)ObjectAttributes, PsPartitionType, PreviousMode, 0LL, DesiredAccess, 0LL, Handle);
  if ( result >= 0 )
    *PartitionHandle = Handle[0];
  return result;
}
