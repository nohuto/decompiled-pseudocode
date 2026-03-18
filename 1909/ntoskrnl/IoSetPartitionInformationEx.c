/*
 * XREFs of IoSetPartitionInformationEx @ 0x140850440
 * Callers:
 *     <none>
 * Callees:
 *     ??0SC_DISK@@QEAA@XZ @ 0x140170C38 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x140170D84 (--1SC_DISK@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ?SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x14034AF78 (-SetPartition@SC_DISK@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1406F0568 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoSetPartitionInformationEx(
        PDEVICE_OBJECT DeviceObject,
        ULONG PartitionNumber,
        struct _SET_PARTITION_INFORMATION_EX *PartitionInfo)
{
  struct _DEVICE_OBJECT *v5; // r9
  NTSTATUS v6; // ebx
  _QWORD v8[46]; // [rsp+20h] [rbp-188h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v8);
  v8[44] = 0LL;
  v8[0] = &NT_DISK::`vftable';
  v6 = NT_DISK::Initialize((NT_DISK *)v8, v5);
  if ( v6 >= 0 )
    v6 = SC_DISK::SetPartition((SC_DISK *)v8, PartitionNumber, PartitionInfo);
  v8[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v8);
  return v6;
}
