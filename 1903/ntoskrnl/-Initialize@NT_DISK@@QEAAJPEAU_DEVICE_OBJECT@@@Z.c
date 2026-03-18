/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1406EEA18
 * Callers:
 *     IoVerifyPartitionTable @ 0x1406EE970 (IoVerifyPartitionTable.c)
 *     IoCreateDisk @ 0x140850820 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x1408508D0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1408509D0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140850BB0 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140850C60 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140850D40 (IoSetPartitionInformationEx.c)
 *     IoWritePartitionTable @ 0x140850E00 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140850F70 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x14016A480 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14016A57C (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
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
