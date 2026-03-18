/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1406F0568
 * Callers:
 *     IoVerifyPartitionTable @ 0x1406F04C0 (IoVerifyPartitionTable.c)
 *     IoCreateDisk @ 0x14084FF20 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x14084FFD0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1408500D0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x1408502B0 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140850360 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140850440 (IoSetPartitionInformationEx.c)
 *     IoWritePartitionTable @ 0x140850500 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140850670 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x14016AB70 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14016AC6C (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 */

__int64 __fastcall NT_DISK::Initialize(NT_DISK *this, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax

  *((_QWORD *)this + 44) = a2;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
    return SC_DISK::InitializePartitionCache(this);
  return result;
}
