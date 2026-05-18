/*
 * XREFs of sub_18008E07C @ 0x18008E07C
 * Callers:
 *     sub_18008E250 @ 0x18008E250 (sub_18008E250.c)
 *     sub_18008E280 @ 0x18008E280 (sub_18008E280.c)
 *     sub_1800986BC @ 0x1800986BC (sub_1800986BC.c)
 *     sub_18009C2C0 @ 0x18009C2C0 (sub_18009C2C0.c)
 *     sub_1800ABDC8 @ 0x1800ABDC8 (sub_1800ABDC8.c)
 *     sub_1800B7E94 @ 0x1800B7E94 (sub_1800B7E94.c)
 *     sub_180101B74 @ 0x180101B74 (sub_180101B74.c)
 *     sub_180103BEC @ 0x180103BEC (sub_180103BEC.c)
 *     sub_18012E9A2 @ 0x18012E9A2 (sub_18012E9A2.c)
 *     sub_18012F3E6 @ 0x18012F3E6 (sub_18012F3E6.c)
 *     sub_18012FD31 @ 0x18012FD31 (sub_18012FD31.c)
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_4 @ 0x180132EAB (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_180132EAB.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18008E07C(_QWORD *a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 result; // rax
  volatile signed __int32 *v11; // rcx

  *a1 = &Spectre::Engine::Component::`vftable';
  v2 = a1[10];
  if ( v2 )
  {
    a1[10] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (volatile signed __int32 *)a1[8];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[6];
  if ( v4 >= 0x10 )
  {
    v5 = v4 + 1;
    v6 = a1[3];
    if ( v5 >= 0x1000 )
    {
      v7 = v5 + 39;
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v6 - v8;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v7);
        return sub_18008E15C();
      }
      v6 = v8;
    }
    j_j__o_free(v6);
  }
  a1[5] = 0LL;
  a1[6] = 15LL;
  *((_BYTE *)a1 + 24) = 0;
  result = (__int64)&off_1801DD0D0;
  *a1 = &off_1801DD0D0;
  v11 = (volatile signed __int32 *)a1[2];
  if ( v11 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  return result;
}
