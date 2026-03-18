/*
 * XREFs of PsReferencePartitionByHandle @ 0x1406083B4
 * Callers:
 *     MiInitializeCreateSectionPacket @ 0x1405DDDB0 (MiInitializeCreateSectionPacket.c)
 *     NtAllocateVirtualMemory @ 0x1405ECE60 (NtAllocateVirtualMemory.c)
 *     NtManagePartition @ 0x140608170 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x140675D10 (MiAllocateVirtualMemoryCommon.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081CFA0 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x14088A3A0 (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14088D120 (NtCreatePartition.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionSafe @ 0x140090CE8 (PsReferencePartitionSafe.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsReferencePartitionByHandle(ULONG_PTR a1, int a2, char a3, ULONG Tag, _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  PVOID UserDirectoryTableBase; // r8
  void *v10; // r8
  void *v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( a1 == -1LL )
  {
    UserDirectoryTableBase = (PVOID)KeGetCurrentThread()->ApcState.Process[2].UserDirectoryTableBase;
  }
  else if ( a1 == -2LL )
  {
    UserDirectoryTableBase = PspSystemPartition;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(a1, a2, PsPartitionType, a3, Tag, &v11, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    UserDirectoryTableBase = v11;
  }
  if ( PsReferencePartitionSafe((__int64)UserDirectoryTableBase) )
    *a5 = v10;
  else
    v5 = -1073740640;
  if ( a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v10, Tag);
  return v5;
}
