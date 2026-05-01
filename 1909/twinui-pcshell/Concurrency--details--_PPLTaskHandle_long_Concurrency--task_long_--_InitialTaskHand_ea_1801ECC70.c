/*
 * XREFs of Concurrency::details::_PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_::invoke @ 0x1801ECC70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x1801E3CD0 (--1-$lock_guard@Vmutex@std@@@std@@QEAA@XZ.c)
 *     Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_Init @ 0x1801EC268 (Concurrency--task_long_--_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56_ea_1801EC268.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Concurrency::details::_PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_::invoke(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  Concurrency::details::_Task_impl_base *v11; // rbx
  _BYTE v12[32]; // [rsp+38h] [rbp-20h] BYREF
  _Mtx_t v15; // [rsp+68h] [rbp+10h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 8);
  v15 = (_Mtx_t)(v2 + 32);
  v3 = _Mtx_lock((_Mtx_t)(v2 + 32));
  if ( v3 )
    std::_Throw_C_error(v3);
  if ( *(_DWORD *)(v2 + 8) == 2 )
  {
    std::lock_guard<std::mutex>::~lock_guard<std::mutex>(&v15);
    v4 = *(_QWORD *)(v1 + 8);
    v5 = v4 + 16;
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 8LL))(v4, v5, 0LL, 0LL, v4 + 16);
  }
  else
  {
    *(_DWORD *)(v2 + 8) = 1;
    v6 = _Mtx_unlock(v15);
    if ( v6 )
      std::_Throw_C_error(v6);
    try
    {
      Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_Init(v1);
    }
    catch ( Concurrency::task_canceled )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v8 = v7 + 16;
      LOBYTE(v8) = 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v7 + 8LL))(
        v7,
        v8,
        0LL,
        0LL,
        v7 + 16);
      v1 = a1;
    }
    catch ( Concurrency::details::_Interruption_exception )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = v9 + 16;
      LOBYTE(v10) = 1;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v9 + 8LL))(
        v9,
        v10,
        0LL,
        0LL,
        v9 + 16);
      v1 = a1;
    }
    catch ( ... )
    {
      v11 = *(Concurrency::details::_Task_impl_base **)(a1 + 8);
      __ExceptionPtrCreate(v12);
      __ExceptionPtrCurrentException(v12);
      Concurrency::details::_Task_impl_base::_CancelWithException(v11, (const struct std::exception_ptr *)v12);
      __ExceptionPtrDestroy(v12);
      v1 = a1;
    }
    Concurrency::details::_TaskEventLogger::_LogTaskExecutionCompleted((Concurrency::details::_TaskEventLogger *)(*(_QWORD *)(v1 + 8) + 352LL));
  }
}
