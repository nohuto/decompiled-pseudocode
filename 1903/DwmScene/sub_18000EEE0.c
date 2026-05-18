/*
 * XREFs of sub_18000EEE0 @ 0x18000EEE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180029B04 @ 0x180029B04 (sub_180029B04.c)
 *     sub_18006885C @ 0x18006885C (sub_18006885C.c)
 *     sub_18006A474 @ 0x18006A474 (sub_18006A474.c)
 *     sub_18006CCE8 @ 0x18006CCE8 (sub_18006CCE8.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x1801273FE (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127404 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000EEE0(__int64 a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  volatile signed __int32 *v11; // [rsp+30h] [rbp-18h]

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v4 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  v10 = 0LL;
  v11 = 0LL;
  sub_180029B04(a1, &v10);
  if ( v10 )
  {
    v5 = (_QWORD *)sub_18006CCE8(v10);
    sub_18006A474(*v5, 0LL);
  }
  v6 = v11;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = Query_perf_frequency();
  v8 = Query_perf_counter();
  return sub_18006885C(
           a1,
           v4,
           1000000000 * (v8 / v7) + 1000000000 * (v8 % v7) / v7,
           1000000000 * (v8 / v7) + 1000000000 * (v8 % v7) / v7 - v4,
           -2LL);
}
