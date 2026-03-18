/*
 * XREFs of ??1SC_DEVICE@@UEAA@XZ @ 0x14017077C
 * Callers:
 *     ??1SC_DISK@@UEAA@XZ @ 0x140170694 (--1SC_DISK@@UEAA@XZ.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x14034CCF0 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 * Callees:
 *     RtlpSysVolFree @ 0x1406E4210 (RtlpSysVolFree.c)
 */

void __fastcall SC_DEVICE::~SC_DEVICE(SC_DEVICE *this)
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

  *(_QWORD *)this = &SC_DEVICE::`vftable';
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
    RtlpSysVolFree(v2);
  v3 = *((_QWORD *)this + 22);
  if ( v3 )
    RtlpSysVolFree(v3);
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
    RtlpSysVolFree(v4);
  v5 = *((_QWORD *)this + 20);
  if ( v5 )
    RtlpSysVolFree(v5);
  v6 = *((_QWORD *)this + 19);
  if ( v6 )
    RtlpSysVolFree(v6);
  v7 = *((_QWORD *)this + 10);
  if ( v7 )
    RtlpSysVolFree(v7);
  v8 = *((_QWORD *)this + 8);
  if ( v8 )
    RtlpSysVolFree(v8);
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
    RtlpSysVolFree(v9);
  v10 = *((_QWORD *)this + 4);
  if ( v10 )
    RtlpSysVolFree(v10);
}
