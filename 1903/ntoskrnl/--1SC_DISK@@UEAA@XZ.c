/*
 * XREFs of ??1SC_DISK@@UEAA@XZ @ 0x140170694
 * Callers:
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x14034B330 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     IoVerifyPartitionTable @ 0x1406EE970 (IoVerifyPartitionTable.c)
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x140850720 (--_ENT_DISK@@UEAAPEAXI@Z.c)
 *     IoCreateDisk @ 0x140850820 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x1408508D0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1408509D0 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140850BB0 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140850C60 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x140850D40 (IoSetPartitionInformationEx.c)
 *     IoWritePartitionTable @ 0x140850E00 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x140850F70 (IoWritePartitionTableEx.c)
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x14017077C (--1SC_DEVICE@@UEAA@XZ.c)
 *     RtlpSysVolFree @ 0x1406E4210 (RtlpSysVolFree.c)
 */

void __fastcall SC_DISK::~SC_DISK(SC_DISK *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  *(_QWORD *)this = &SC_DISK::`vftable';
  v2 = *((_QWORD *)this + 43);
  if ( v2 )
    RtlpSysVolFree(v2);
  v3 = *((_QWORD *)this + 42);
  if ( v3 )
    RtlpSysVolFree(v3);
  v4 = *((_QWORD *)this + 41);
  if ( v4 )
    RtlpSysVolFree(v4);
  v5 = *((_QWORD *)this + 40);
  if ( v5 )
    RtlpSysVolFree(v5);
  v6 = *((_QWORD *)this + 39);
  if ( v6 )
    RtlpSysVolFree(v6);
  v7 = *((_QWORD *)this + 38);
  if ( v7 )
    RtlpSysVolFree(v7);
  v8 = *((_QWORD *)this + 37);
  if ( v8 )
    RtlpSysVolFree(v8);
  v9 = *((_QWORD *)this + 36);
  if ( v9 )
    RtlpSysVolFree(v9);
  v10 = *((_QWORD *)this + 35);
  if ( v10 )
    RtlpSysVolFree(v10);
  v11 = *((_QWORD *)this + 34);
  if ( v11 )
    RtlpSysVolFree(v11);
  v12 = *((_QWORD *)this + 32);
  if ( v12 )
    RtlpSysVolFree(v12);
  SC_DEVICE::~SC_DEVICE(this);
}
