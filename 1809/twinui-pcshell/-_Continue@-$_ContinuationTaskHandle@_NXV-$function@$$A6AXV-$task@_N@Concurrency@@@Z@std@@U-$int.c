/*
 * XREFs of ?_Continue@?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEBAXU?$integral_constant@_N$00@std@@U_TypeSelectorNoAsync@details@3@@Z @ 0x1802956AC
 * Callers:
 *     ?invoke@?$_PPLTaskHandle@EU?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@U_ContinuationTaskHandleBase@details@3@@details@Concurrency@@UEBAXXZ @ 0x180297890 (-invoke@-$_PPLTaskHandle@EU-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$_LogWorkItemAndInvokeUserLambda@V?$function@$$A6AEV?$task@_N@Concurrency@@@Z@std@@V?$task@_N@Concurrency@@@?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEBAE$$QEAV?$function@$$A6AEV?$task@_N@Concurrency@@@Z@std@@$$QEAV12@@Z @ 0x180292794 (--$_LogWorkItemAndInvokeUserLambda@V-$function@$$A6AEV-$task@_N@Concurrency@@@Z@std@@V-$task@_N@.c)
 *     ??0?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@QEAA@AEBV01@@Z @ 0x1802931C0 (--0-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_FinalizeAndRunContinuations@?$_Task_impl@E@details@Concurrency@@QEAAXE@Z @ 0x1802963C8 (-_FinalizeAndRunContinuations@-$_Task_impl@E@details@Concurrency@@QEAAXE@Z.c)
 *     ?_Perform@?$_Continuation_func_transformer@V?$task@_N@Concurrency@@X@Concurrency@@SA?AV?$function@$$A6AEV?$task@_N@Concurrency@@@Z@std@@V?$function@$$A6AXV?$task@_N@Concurrency@@@Z@4@@Z @ 0x180296680 (-_Perform@-$_Continuation_func_transformer@V-$task@_N@Concurrency@@X@Concurrency@@SA-AV-$functio.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>::_Continue(
        _QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  Concurrency::details::_Task_impl_base *v5; // rbx
  _BYTE *v6; // rdx
  __int64 v7; // [rsp+20h] [rbp-B8h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-B0h]
  __int64 v9; // [rsp+30h] [rbp-A8h]
  _BYTE v10[64]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v11[56]; // [rsp+80h] [rbp-58h] BYREF
  _BYTE *v12; // [rsp+B8h] [rbp-20h]

  v9 = -2LL;
  v2 = (volatile signed __int32 *)a1[8];
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 2);
    v2 = (volatile signed __int32 *)a1[8];
  }
  v7 = a1[7];
  v8 = (std::_Ref_count_base *)v2;
  v3 = std::function<void (Concurrency::task<bool>)>::function<void (Concurrency::task<bool>)>(
         (__int64)v10,
         (__int64)(a1 + 9));
  v4 = Concurrency::_Continuation_func_transformer<Concurrency::task<bool>,void>::_Perform(v11, v3);
  v5 = (Concurrency::details::_Task_impl_base *)a1[5];
  Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>::_LogWorkItemAndInvokeUserLambda<std::function<unsigned char (Concurrency::task<bool>)>,Concurrency::task<bool>>(
    (__int64)a1,
    v4,
    &v7);
  Concurrency::details::_Task_impl<unsigned char>::_FinalizeAndRunContinuations(v5);
  if ( v12 )
  {
    v6 = v11;
    LOBYTE(v6) = v12 != v11;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v12 + 32LL))(v12, v6);
  }
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
}
