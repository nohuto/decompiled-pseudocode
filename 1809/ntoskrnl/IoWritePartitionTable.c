/*
 * XREFs of IoWritePartitionTable @ 0x140818500
 * Callers:
 *     <none>
 * Callees:
 *     ??0SC_DISK@@QEAA@XZ @ 0x140168584 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x1401686C0 (--1SC_DISK@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140329EE0 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140706198 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoWritePartitionTable(
        PDEVICE_OBJECT DeviceObject,
        ULONG SectorSize,
        ULONG SectorsPerTrack,
        ULONG NumberOfHeads,
        struct _DRIVE_LAYOUT_INFORMATION *PartitionBuffer)
{
  DWORD PartitionCount; // eax
  struct SC_DISK_LAYOUT *PoolWithTag; // rax
  struct SC_DISK_LAYOUT *v8; // rbx
  NTSTATUS v9; // edi
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD v14[44]; // [rsp+20h] [rbp-178h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v14);
  PartitionCount = PartitionBuffer->PartitionCount;
  v14[43] = 0LL;
  v14[0] = &NT_DISK::`vftable';
  PoolWithTag = (struct SC_DISK_LAYOUT *)ExAllocatePoolWithTag(NonPagedPoolNx, 144 * PartitionCount + 48, 0x54506F49u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)PoolWithTag = 0;
    v10 = 0LL;
    *((_DWORD *)PoolWithTag + 1) = PartitionBuffer->PartitionCount;
    for ( *((_DWORD *)PoolWithTag + 2) = PartitionBuffer->Signature;
          (unsigned int)v10 < PartitionBuffer->PartitionCount;
          *((_DWORD *)PoolWithTag + 2 * v11 + 21) = PartitionBuffer->PartitionEntry[v12].HiddenSectors )
    {
      v11 = 18 * v10;
      v12 = (unsigned int)v10;
      v10 = (unsigned int)(v10 + 1);
      *((_DWORD *)PoolWithTag + 2 * v11 + 12) = 0;
      *((_QWORD *)PoolWithTag + v11 + 7) = PartitionBuffer->PartitionEntry[v12].StartingOffset.QuadPart;
      *((_QWORD *)PoolWithTag + v11 + 8) = PartitionBuffer->PartitionEntry[v12].PartitionLength.QuadPart;
      *((_DWORD *)PoolWithTag + 2 * v11 + 18) = PartitionBuffer->PartitionEntry[v12].PartitionNumber;
      *((_BYTE *)PoolWithTag + 8 * v11 + 76) = PartitionBuffer->PartitionEntry[v12].RewritePartition;
      *((_BYTE *)PoolWithTag + 8 * v11 + 80) = PartitionBuffer->PartitionEntry[v12].PartitionType;
      *((_BYTE *)PoolWithTag + 8 * v11 + 81) = PartitionBuffer->PartitionEntry[v12].BootIndicator;
      *((_BYTE *)PoolWithTag + 8 * v11 + 82) = PartitionBuffer->PartitionEntry[v12].RecognizedPartition;
    }
    v9 = NT_DISK::Initialize((NT_DISK *)v14, DeviceObject);
    if ( v9 >= 0 )
      v9 = SC_DISK::WritePartitionTable((SC_DISK *)v14, v8);
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    v9 = -1073741670;
  }
  v14[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v14);
  return v9;
}
