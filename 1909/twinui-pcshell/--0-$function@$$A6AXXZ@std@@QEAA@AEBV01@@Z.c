/*
 * XREFs of ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1801E36A0
 * Callers:
 *     ?_CallInContext@_ContextCallback@details@Concurrency@@QEBAXV?$function@$$A6AXXZ@std@@@Z @ 0x1801EB880 (-_CallInContext@_ContextCallback@details@Concurrency@@QEBAXV-$function@$$A6AXXZ@std@@@Z.c)
 *     Concurrency::details::_ScheduleFuncWithAutoInline @ 0x1801ECAC4 (Concurrency--details--_ScheduleFuncWithAutoInline.c)
 *     Concurrency::details::_ScheduleFuncWithAutoInline_0 @ 0x18030E21C (Concurrency--details--_ScheduleFuncWithAutoInline_0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (void)>::function<void (void)>(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
