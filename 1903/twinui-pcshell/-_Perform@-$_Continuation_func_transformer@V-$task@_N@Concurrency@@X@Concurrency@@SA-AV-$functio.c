/*
 * XREFs of ?_Perform@?$_Continuation_func_transformer@V?$task@_N@Concurrency@@X@Concurrency@@SA?AV?$function@$$A6AEV?$task@_N@Concurrency@@@Z@std@@V?$function@$$A6AXV?$task@_N@Concurrency@@@Z@4@@Z @ 0x1802EEAA8
 * Callers:
 *     ?_Continue@?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEBAXU?$integral_constant@_N$00@std@@U_TypeSelectorNoAsync@details@3@@Z @ 0x1802EDF2C (-_Continue@-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$int.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool_____lambda_f29621112cb61d54fa7d920aa1c0b80f___ @ 0x1802EBC00 (std--_Global_new_std--_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_cha.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1802EC624 (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Concurrency::_Continuation_func_transformer<Concurrency::task<bool>,void>::_Perform(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE v7[56]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE *v8; // [rsp+60h] [rbp-18h]

  std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
    (__int64)v7,
    a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 56) = std::_Global_new_std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool_____lambda_f29621112cb61d54fa7d920aa1c0b80f___();
  if ( v8 )
  {
    LOBYTE(v4) = v8 != v7;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v8 + 32LL))(v8, v4);
  }
  v5 = *(_QWORD *)(a2 + 56);
  if ( v5 )
  {
    LOBYTE(v4) = v5 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, v4);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return a1;
}
