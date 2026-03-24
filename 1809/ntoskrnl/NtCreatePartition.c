/*
 * XREFs of NtCreatePartition @ 0x14088D100
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x140090CC0 (PsDereferencePartition.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     PsReferencePartitionByHandle @ 0x1406083B4 (PsReferencePartitionByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     PspAllocatePartition @ 0x14075CA48 (PspAllocatePartition.c)
 */

__int64 __fastcall NtCreatePartition(ULONG_PTR a1, HANDLE *a2, unsigned int a3, int a4)
{
  char PreviousMode; // di
  __int64 v9; // rcx
  int v10; // ebx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int64 *v14; // [rsp+60h] [rbp-18h] BYREF

  Handle = 0LL;
  v13 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    if ( !a1 || (v10 = PsReferencePartitionByHandle(a1, 2, PreviousMode, 0x70437350u, &v13), v10 >= 0) )
    {
      v10 = PspAllocatePartition(a4, a3, PreviousMode, v13, 0, &v14, (__int64 *)&Handle);
      if ( v10 >= 0 )
      {
        PsDereferencePartition((__int64)v14);
        *a2 = Handle;
      }
    }
  }
  else
  {
    v10 = -1073741727;
  }
  if ( v13 )
    PsDereferencePartition(v13);
  return (unsigned int)v10;
}
