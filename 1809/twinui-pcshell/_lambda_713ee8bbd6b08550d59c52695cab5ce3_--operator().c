/*
 * XREFs of _lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator() @ 0x180293EB0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_713ee8bbd6b08550d59c52695cab5ce3__void_::_Do_call @ 0x1802962A0 (std--_Func_impl_no_alloc__lambda_713ee8bbd6b08550d59c52695cab5ce3__void_--_Do_call.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18017B930 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1801D460C (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z @ 0x180296EEC (-_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningM.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()(_QWORD *a1)
{
  bool v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdx
  std::_Ref_count_base *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  Concurrency::details::_Task_impl_base *v9; // [rsp+20h] [rbp-C8h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-C0h]
  _BYTE v11[16]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v12[9]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+88h] [rbp-60h]
  _BYTE v14[72]; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+F8h] [rbp+10h] BYREF

  v12[8] = -2LL;
  (*(void (__fastcall **)(_QWORD, Concurrency::details::_Task_impl_base **))(*(_QWORD *)*a1 + 16LL))(*a1, &v9);
  v15 = 0LL;
  Concurrency::details::_ContextCallback::_Capture((Concurrency::details::_ContextCallback *)&v15);
  v2 = v15 == *(_QWORD *)(*a1 + 16LL);
  Concurrency::details::_ContextCallback::_Reset((Concurrency::details::_ContextCallback *)&v15);
  v3 = *a1;
  if ( v2 )
  {
    Concurrency::details::_Task_impl_base::_ScheduleTask(v9, *a1, 0xFFFFFFFFLL);
  }
  else
  {
    v13 = *a1;
    v4 = v3;
    v5 = v10;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
      v4 = *a1;
      v5 = v10;
      v3 = v13;
    }
    try
    {
      v12[0] = off_180506458;
      v12[1] = v3;
      v12[2] = v9;
      v12[3] = v5;
      v12[7] = v12;
      v6 = v4 + 16;
      v7 = std::function<void (void)>::function<void (void)>((__int64)v14, (__int64)v12);
      Concurrency::details::_ContextCallback::_CallInContext(v6, v7, 0LL);
      std::_Func_class<void,>::_Tidy((__int64)v12, v8);
    }
    catch ( ... )
    {
      __ExceptionPtrCreate(v11);
      __ExceptionPtrCurrentException(v11);
      Concurrency::details::_Task_impl_base::_CancelWithException(v9, (const struct std::exception_ptr *)v11);
      __ExceptionPtrDestroy(v11);
    }
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
}
