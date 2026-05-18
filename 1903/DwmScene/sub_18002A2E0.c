/*
 * XREFs of sub_18002A2E0 @ 0x18002A2E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180029B04 @ 0x180029B04 (sub_180029B04.c)
 *     sub_18006A474 @ 0x18006A474 (sub_18006A474.c)
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002A2E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v14; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v15; // [rsp+30h] [rbp-18h]

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v8 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  v14 = 0LL;
  v15 = 0LL;
  sub_180029B04(a1, &v14);
  if ( v14 )
  {
    v9 = (_QWORD *)sub_18006CCE8(v14);
    sub_18006A474(*v9, 0LL);
  }
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      v10 = v15;
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  v11 = Query_perf_frequency();
  v12 = Query_perf_counter();
  return sub_18006885C(
           a1,
           v8,
           1000000000 * (v12 / v11) + 1000000000 * (v12 % v11) / v11,
           1000000000 * (v12 / v11) + 1000000000 * (v12 % v11) / v11 - v8,
           a5);
}
