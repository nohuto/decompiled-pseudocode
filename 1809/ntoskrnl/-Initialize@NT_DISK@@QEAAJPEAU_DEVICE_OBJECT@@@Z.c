/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140704EF8
 * Callers:
 *     IoVerifyPartitionTable @ 0x140704E50 (IoVerifyPartitionTable.c)
 *     IoCreateDisk @ 0x140816D10 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x140816DC0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140816EC0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x1408170A0 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140817150 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140817240 (IoSetPartitionInformationEx.c)
 *     IoWritePartitionTable @ 0x140817300 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140817470 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x140168790 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14016888C (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 */

__int64 __fastcall NT_DISK::Initialize(NT_DISK *this, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax

  *((_QWORD *)this + 43) = a2;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
    return SC_DISK::InitializePartitionCache(this);
  return result;
}
