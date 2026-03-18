/*
 * XREFs of PsReferencePartitionByHandle @ 0x1406512D4
 * Callers:
 *     MiInitializeCreateSectionPacket @ 0x1405D7990 (MiInitializeCreateSectionPacket.c)
 *     NtManagePartition @ 0x140651090 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x14067CE50 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x14067D000 (NtAllocateVirtualMemory.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140856728 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x1408C7BB0 (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x1408CAF70 (NtCreatePartition.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionSafe @ 0x1400C5438 (PsReferencePartitionSafe.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsReferencePartitionByHandle(ULONG_PTR a1, int a2, char a3, ULONG Tag, _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  PVOID v9; // r8
  void *v10; // r8
  void *v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( a1 == -1LL )
  {
    v9 = *(PVOID *)&KeGetCurrentThread()->ApcState.Process[2].Spare2[15];
  }
  else if ( a1 == -2LL )
  {
    v9 = PspSystemPartition;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(a1, a2, PsPartitionType, a3, Tag, &v11, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v9 = v11;
  }
  if ( PsReferencePartitionSafe((__int64)v9) )
    *a5 = v10;
  else
    v5 = -1073740640;
  if ( a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v10, Tag);
  return v5;
}
