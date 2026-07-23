/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140706198
 * Callers:
 *     IoVerifyPartitionTable @ 0x1407060F0 (IoVerifyPartitionTable.c)
 *     IoCreateDisk @ 0x140817F10 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x140817FC0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1408180C0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x1408182A0 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140818350 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140818440 (IoSetPartitionInformationEx.c)
 *     IoWritePartitionTable @ 0x140818500 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140818670 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x140168890 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14016898C (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
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
