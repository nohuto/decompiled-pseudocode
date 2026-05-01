/*
 * XREFs of Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_Init @ 0x1801CD1D8
 * Callers:
 *     Concurrency::details::_PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_::invoke @ 0x1801CDBA0 (Concurrency--details--_PPLTaskHandle_long_Concurrency--task_long_--_InitialTaskHand_ea_1801CDBA0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801AAFE4 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long___lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801C3EFC (std--_Global_new_std--_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__ea_1801C3EFC.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801C4384 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801C4384.c)
 *     ??1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4E5C (--1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?_FinalizeAndRunContinuations@?$_Task_impl@J@details@Concurrency@@QEAAXJ@Z @ 0x1801CD0E0 (-_FinalizeAndRunContinuations@-$_Task_impl@J@details@Concurrency@@QEAAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_Init(
        __int64 a1)
{
  Concurrency::details::_Task_impl_base *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx
  Concurrency::details::_TaskEventLogger *v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  _BYTE v8[48]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE *v9; // [rsp+60h] [rbp-A8h]
  __int64 v10; // [rsp+68h] [rbp-A0h]
  _BYTE v11[56]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v12; // [rsp+A8h] [rbp-60h]
  _QWORD v13[41]; // [rsp+B0h] [rbp-58h] BYREF

  v10 = -2LL;
  v2 = *(Concurrency::details::_Task_impl_base **)(a1 + 8);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    a1 + 24);
  v13[0] = &CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::`vftable';
  v9 = std::_Global_new_std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long___lambda_921a5a526b2b3e27a0030faf56813293___((__int64)v13);
  CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::~CortanaUndocking_FirstBootTriggered((CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered *)v13);
  v12 = 0LL;
  if ( v9 )
  {
    if ( v9 == v8 )
    {
      v12 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v9 + 8LL))(v9, v11);
      std::_Func_class<void,>::_Tidy((__int64)v8, v4);
    }
    else
    {
      v12 = (__int64)v9;
      v9 = 0LL;
    }
  }
  std::_Func_class<void,>::_Tidy((__int64)v8, v3);
  v5 = (Concurrency::details::_TaskEventLogger *)(*(_QWORD *)(a1 + 8) + 352LL);
  Concurrency::details::_TaskEventLogger::_LogWorkItemStarted(v5);
  if ( !v12 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  Concurrency::details::_TaskEventLogger::_LogWorkItemCompleted(v5);
  std::_Func_class<void,>::_Tidy((__int64)v11, v7);
  Concurrency::details::_Task_impl<long>::_FinalizeAndRunContinuations(v2, v6);
}
