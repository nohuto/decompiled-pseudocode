/*
 * XREFs of _lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator() @ 0x1801E4674
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_713ee8bbd6b08550d59c52695cab5ce3__void_::_Do_call @ 0x1801EC0C0 (std--_Func_impl_no_alloc__lambda_713ee8bbd6b08550d59c52695cab5ce3__void_--_Do_call.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_CallInContext@_ContextCallback@details@Concurrency@@QEBAXV?$function@$$A6AXXZ@std@@@Z @ 0x1801EB880 (-_CallInContext@_ContextCallback@details@Concurrency@@QEBAXV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_CaptureCurrent@_ContextCallback@details@Concurrency@@SA?AV123@XZ @ 0x1801EBC34 (-_CaptureCurrent@_ContextCallback@details@Concurrency@@SA-AV123@XZ.c)
 *     ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z @ 0x1801ECB40 (-_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningM.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rdx
  Concurrency::details::_Task_impl_base *v7; // rbx
  Concurrency::details::_Task_impl_base *v8; // [rsp+20h] [rbp-88h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-80h]
  _QWORD v10[3]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v11; // [rsp+48h] [rbp-60h]
  _QWORD v12[8]; // [rsp+60h] [rbp-48h] BYREF
  char v13; // [rsp+B0h] [rbp+8h] BYREF

  v10[2] = -2LL;
  (*(void (__fastcall **)(_QWORD, Concurrency::details::_Task_impl_base **))(*(_QWORD *)*a1 + 16LL))(*a1, &v8);
  v2 = *(_QWORD *)Concurrency::details::_ContextCallback::_CaptureCurrent(&v13);
  v3 = *(_QWORD *)(*a1 + 16LL);
  Concurrency::details::_ContextCallback::_Reset((Concurrency::details::_ContextCallback *)&v13);
  if ( v2 == v3 )
  {
    Concurrency::details::_Task_impl_base::_ScheduleTask(v8, *a1, 0xFFFFFFFFLL);
  }
  else
  {
    v4 = *a1;
    v5 = *a1 + 16LL;
    v11 = *a1;
    v6 = v9;
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
      v6 = v9;
      v4 = v11;
    }
    try
    {
      v12[0] = off_18044D288;
      v12[1] = v4;
      v12[2] = v8;
      v12[3] = v6;
      v12[7] = v12;
      Concurrency::details::_ContextCallback::_CallInContext(v5, v12);
    }
    catch ( ... )
    {
      v7 = v8;
      __ExceptionPtrCreate(v10);
      __ExceptionPtrCurrentException(v10);
      Concurrency::details::_Task_impl_base::_CancelWithException(v7, (const struct std::exception_ptr *)v10);
      __ExceptionPtrDestroy(v10);
    }
  }
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
