/*
 * XREFs of sub_18007625C @ 0x18007625C
 * Callers:
 *     sub_18006B048 @ 0x18006B048 (sub_18006B048.c)
 * Callees:
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 *     ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x180064454 (-SetScheduler@-$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEA.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_18007625C(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int32 v6; // eax
  volatile signed __int32 *v7; // rbx
  bool v8; // zf

  Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(a2, a1);
  LOBYTE(v6) = sub_180064320(a2, 1);
  if ( (_BYTE)v6 )
  {
    LOBYTE(v6) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, a3);
    if ( !*(_DWORD *)(a1 + 552) )
      LOBYTE(v6) = sub_180064574(a2, 8, 1);
  }
  v7 = *(volatile signed __int32 **)(a3 + 8);
  if ( v7 )
  {
    v6 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    v8 = v6 == 1;
    LOBYTE(v6) = v6 - 1;
    if ( v8 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      v6 = _InterlockedDecrement(v7 + 3);
      if ( !v6 )
        LOBYTE(v6) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return v6;
}
