/*
 * XREFs of Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801C146C
 * Callers:
 *     Concurrency::create_task__lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801C4068 (Concurrency--create_task__lambda_921a5a526b2b3e27a0030faf56813293___.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x18016A314 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??$_Assign_range@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterator_tag@1@@Z @ 0x1801C3C28 (--$_Assign_range@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterato.c)
 *     Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_ @ 0x1801C460C (Concurrency--task_long_--_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concu.c)
 *     ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x1801C4794 (--0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z.c)
 *     ??1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4E5C (--1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?_CreateImpl@?$task@J@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@Z @ 0x1801CCC74 (-_CreateImpl@-$task@J@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@.c)
 *     ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x1801CD65C (-_Release@_RefCounter@details@Concurrency@@QEAAJXZ.c)
 *     ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z @ 0x1801CDA70 (-_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningM.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293___(
        _QWORD *a1,
        CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered *a2,
        __int64 a3)
{
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  void **v9; // rdx
  char v10; // bl
  void *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  void *v17; // [rsp+30h] [rbp-51h]
  __int128 v18; // [rsp+38h] [rbp-49h] BYREF
  __int64 v19; // [rsp+48h] [rbp-39h]
  void *v20; // [rsp+50h] [rbp-31h] BYREF
  __int128 v21; // [rsp+58h] [rbp-29h] BYREF
  __int64 v22; // [rsp+68h] [rbp-19h]
  __int64 v23; // [rsp+70h] [rbp-11h]
  _QWORD *v24; // [rsp+78h] [rbp-9h]
  _BYTE v25[8]; // [rsp+80h] [rbp-1h] BYREF
  _BYTE v26[24]; // [rsp+88h] [rbp+7h] BYREF
  CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered *v27; // [rsp+A0h] [rbp+1Fh]
  void *retaddr; // [rsp+E0h] [rbp+5Fh]

  v23 = -2LL;
  v24 = a1;
  v27 = a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v6 = *(volatile signed __int32 **)(a3 + 24);
  if ( v6 )
    _InterlockedIncrement(v6 + 2);
  v18 = 0LL;
  v7 = *(_QWORD *)(a3 + 8);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(a3 + 8);
  }
  *(_QWORD *)&v18 = *(_QWORD *)a3;
  *((_QWORD *)&v18 + 1) = v7;
  v19 = *(_QWORD *)(a3 + 16);
  v8 = (__int64)v6;
  if ( !v6 )
    v8 = 2LL;
  Concurrency::task<long>::_CreateImpl(a1, v8, &v18);
  if ( v6 )
    Concurrency::details::_RefCounter::_Release((Concurrency::details::_RefCounter *)v6);
  if ( *(_BYTE *)(a3 + 48) )
  {
    v9 = (void **)Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
                    (Concurrency::details::_TaskCreationCallstack *)v25,
                    (const struct Concurrency::details::_TaskCreationCallstack *)(a3 + 56));
    v10 = 1;
    v11 = *v9;
  }
  else
  {
    v11 = retaddr;
    v21 = 0LL;
    v22 = 0LL;
    v20 = retaddr;
    v9 = &v20;
    v10 = 2;
  }
  v12 = *a1;
  *(_QWORD *)(v12 + 320) = v11;
  v13 = v9 + 1;
  if ( (_QWORD *)(v12 + 328) != v13 )
    std::vector<void *>::_Assign_range<void * *>(v12 + 328, *v13, v13[1]);
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    std::vector<void *>::_Tidy((__int64)&v21);
  }
  if ( (v10 & 1) != 0 )
    std::vector<void *>::_Tidy((__int64)v26);
  *(_BYTE *)(*a1 + 12LL) = 0;
  *(_BYTE *)(*a1 + 13LL) = 0;
  Concurrency::details::_TaskEventLogger::_LogScheduleTask((Concurrency::details::_TaskEventLogger *)(*a1 + 352LL), 0);
  v14 = *a1;
  v17 = operator new(0x150uLL);
  v15 = Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_(
          v17,
          a1,
          a2);
  Concurrency::details::_Task_impl_base::_ScheduleTask(v14, v15, 0LL);
  CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::~CortanaUndocking_FirstBootTriggered(a2);
  return a1;
}
