/*
 * XREFs of ??0SC_DISK@@QEAA@XZ @ 0x140168584
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
 *     <none>
 */

SC_DISK *__fastcall SC_DISK::SC_DISK(SC_DISK *this)
{
  SC_DISK *result; // rax

  *(_QWORD *)this = &SC_DEVICE::`vftable';
  *(GUID *)((char *)this + 8) = NullGuid;
  *((_QWORD *)this + 19) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0uLL;
  *((_QWORD *)this + 20) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0uLL;
  *((_QWORD *)this + 21) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0uLL;
  *(_QWORD *)this = &SC_DISK::`vftable';
  result = this;
  *(_OWORD *)((char *)this + 72) = 0uLL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_OWORD *)this + 13) = 0uLL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 2;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  return result;
}
