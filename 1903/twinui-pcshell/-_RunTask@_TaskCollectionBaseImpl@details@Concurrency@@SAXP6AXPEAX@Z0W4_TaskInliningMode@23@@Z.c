/*
 * XREFs of ?_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z @ 0x1801CD7B0
 * Callers:
 *     Concurrency::details::_ScheduleFuncWithAutoInline @ 0x1801CD9F4 (Concurrency--details--_ScheduleFuncWithAutoInline.c)
 *     Concurrency::details::_ScheduleFuncWithAutoInline_0 @ 0x1802EED5C (Concurrency--details--_ScheduleFuncWithAutoInline_0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1801C4900 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ?_Bridge@_TaskProcThunk@details@Concurrency@@SAXPEAX@Z @ 0x1801CC740 (-_Bridge@_TaskProcThunk@details@Concurrency@@SAXPEAX@Z.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1801CDE64 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ?schedule@_DefaultPPLTaskScheduler@details@Concurrency@@UEAAXP6AXPEAX@Z0@Z @ 0x1801CDE90 (-schedule@_DefaultPPLTaskScheduler@details@Concurrency@@UEAAXP6AXPEAX@Z0@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Concurrency::details::_TaskCollectionBaseImpl::_RunTask(void **a1, void *a2, int a3)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  void (__fastcall ***v6)(_QWORD, void (__fastcall *)(void *), void *); // rcx
  std::exception_ptr *v7; // rcx
  _BYTE v8[16]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v9[4]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v10[24]; // [rsp+58h] [rbp-18h] BYREF
  void **v11; // [rsp+80h] [rbp+10h] BYREF
  char v12; // [rsp+90h] [rbp+20h] BYREF

  v11 = a1;
  if ( a3 == -1 )
  {
    Concurrency::details::_TaskProcThunk::_Bridge(a2);
  }
  else
  {
    v12 = 0;
    __ExceptionPtrCreate(v8);
    v9[0] = v8;
    v9[1] = &v12;
    if ( !std::_Execute_once(
            (struct std::once_flag *)&`Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_Flag,
            (int (*)(void *, void *, void **))std::_Callback_once<std::tuple<_lambda_0e64988457575224279dcb6d61e61bdd_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>,
            v9) )
    {
      if ( __ExceptionPtrToBool(v8) )
      {
        v7 = std::exception_ptr::exception_ptr((std::exception_ptr *)v10, (const struct std::exception_ptr *)v8);
        std::rethrow_exception(v7);
      }
      std::_XGetLastError();
      JUMPOUT(0x1801CD8CELL);
    }
    __ExceptionPtrDestroy(v8);
    v4 = `Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_S_scheduler_address;
    v5 = *(volatile signed __int32 **)(`Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_S_scheduler_address
                                     + 8);
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = *(volatile signed __int32 **)(v4 + 8);
    }
    v6 = *(void (__fastcall ****)(_QWORD, void (__fastcall *)(void *), void *))v4;
    v9[2] = v6;
    v9[3] = v5;
    if ( v6 )
    {
      (**v6)(v6, Concurrency::details::_TaskProcThunk::_Bridge, a2);
    }
    else
    {
      v11 = &Concurrency::details::_DefaultPPLTaskScheduler::`vftable';
      Concurrency::details::_DefaultPPLTaskScheduler::schedule(
        (Concurrency::details::_DefaultPPLTaskScheduler *)&v11,
        (void (*)(void *))Concurrency::details::_TaskProcThunk::_Bridge,
        a2);
    }
    if ( v5 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  }
}
