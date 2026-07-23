/*
 * XREFs of NtCreatePartition @ 0x1408CB690
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x1400A0388 (PsDereferencePartition.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     PsReferencePartitionByHandle @ 0x14066CC84 (PsReferencePartitionByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PspAllocatePartition @ 0x1407830A0 (PspAllocatePartition.c)
 */

NTSTATUS __cdecl NtCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  int v5; // r14d
  char PreviousMode; // di
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int64 *v15; // [rsp+60h] [rbp-18h] BYREF

  v5 = (int)ObjectAttributes;
  Handle = 0LL;
  v14 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PartitionHandle < 0x7FFFFFFF0000LL )
      v10 = (__int64)PartitionHandle;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    if ( !ParentPartitionHandle
      || (v11 = PsReferencePartitionByHandle((ULONG_PTR)ParentPartitionHandle, 2, PreviousMode, 0x70437350u, &v14),
          v11 >= 0) )
    {
      v11 = PspAllocatePartition(v5, DesiredAccess, PreviousMode, v14, 0, &v15, (__int64)&Handle);
      if ( v11 >= 0 )
      {
        PsDereferencePartition((__int64)v15);
        *PartitionHandle = Handle;
      }
    }
  }
  else
  {
    v11 = -1073741727;
  }
  if ( v14 )
    PsDereferencePartition(v14);
  return v11;
}
