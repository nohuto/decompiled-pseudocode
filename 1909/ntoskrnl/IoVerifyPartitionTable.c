/*
 * XREFs of IoVerifyPartitionTable @ 0x1406F04C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SC_DISK@@QEAA@XZ @ 0x140170C38 (--0SC_DISK@@QEAA@XZ.c)
 *     ??1SC_DISK@@UEAA@XZ @ 0x140170D84 (--1SC_DISK@@UEAA@XZ.c)
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x140171958 (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1406F0568 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 */

NTSTATUS __stdcall IoVerifyPartitionTable(PDEVICE_OBJECT DeviceObject, BOOLEAN FixErrors)
{
  struct _DEVICE_OBJECT *v3; // r8
  NTSTATUS v4; // ebx
  _QWORD v6[46]; // [rsp+20h] [rbp-188h] BYREF

  SC_DISK::SC_DISK((SC_DISK *)v6);
  v6[44] = 0LL;
  v6[0] = &NT_DISK::`vftable';
  v4 = NT_DISK::Initialize((NT_DISK *)v6, v3);
  if ( v4 >= 0 )
    v4 = SC_DISK::VerifyPartitionTable((SC_DISK *)v6, FixErrors);
  v6[0] = &NT_DISK::`vftable';
  SC_DISK::~SC_DISK((SC_DISK *)v6);
  return v4;
}
