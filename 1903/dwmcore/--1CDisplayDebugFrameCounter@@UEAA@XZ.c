/*
 * XREFs of ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x180192C20
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801792F8 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??_ECDebugFrameCounter@@UEAAPEAXI@Z @ 0x180179650 (--_ECDebugFrameCounter@@UEAAPEAXI@Z.c)
 *     ??_GCDisplayDebugFrameCounter@@UEAAPEAXI@Z @ 0x1801796B0 (--_GCDisplayDebugFrameCounter@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter(CDisplayDebugFrameCounter *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CDisplayDebugFrameCounter::`vftable';
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
}
