/*
 * XREFs of sub_1800D23A8 @ 0x1800D23A8
 * Callers:
 *     sub_180095680 @ 0x180095680 (sub_180095680.c)
 *     sub_180097AE0 @ 0x180097AE0 (sub_180097AE0.c)
 *     sub_1800CF620 @ 0x1800CF620 (sub_1800CF620.c)
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_2 @ 0x180130970 (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_180130970.c)
 * Callees:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     sub_180026664 @ 0x180026664 (sub_180026664.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800D23A8(__int64 a1))()
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
  sub_180026530((__int64 ***)(a1 + 120), &v6, **(__int64 ***)(a1 + 120), *(__int64 **)(a1 + 120));
  j_j__o_free(*(_QWORD *)(a1 + 120));
  v3 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 112);
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_180026664((__int64 ***)(a1 + 80), &v7, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_18006403C(a1);
}
