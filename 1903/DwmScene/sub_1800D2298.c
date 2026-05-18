/*
 * XREFs of sub_1800D2298 @ 0x1800D2298
 * Callers:
 *     sub_180095570 @ 0x180095570 (sub_180095570.c)
 *     sub_1800979D0 @ 0x1800979D0 (sub_1800979D0.c)
 *     sub_1800CF510 @ 0x1800CF510 (sub_1800CF510.c)
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_2 @ 0x180130860 (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_180130860.c)
 * Callees:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_180026554 @ 0x180026554 (sub_180026554.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800D2298(__int64 a1))()
{
  volatile signed __int32 *v2; // rbx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  volatile signed __int32 *v4; // rcx
  __int64 *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v7; // [rsp+28h] [rbp-10h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::ArrayBuffer::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 144);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  sub_180026420((__int64 ***)(a1 + 120), &v6, **(__int64 ***)(a1 + 120), *(__int64 **)(a1 + 120));
  j_j__o_free(*(_QWORD *)(a1 + 120));
  v3 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 112);
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_180026554((__int64 ***)(a1 + 80), &v7, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_180063F2C(a1);
}
