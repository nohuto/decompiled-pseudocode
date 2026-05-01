/*
 * XREFs of ?schedule@_DefaultPPLTaskScheduler@details@Concurrency@@UEAAXP6AXPEAX@Z0@Z @ 0x1801CDE90
 * Callers:
 *     ?_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z @ 0x1801CD7B0 (-_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z.c)
 *     ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z @ 0x1801CDA70 (-_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningM.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     _o___std_exception_copy_0 @ 0x180087C1E (_o___std_exception_copy_0.c)
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 *     ??_G_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@QEAAPEAXI@Z @ 0x1801C5DAC (--_G_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@QEAAPEAXI@Z.c)
 */

void __fastcall Concurrency::details::_DefaultPPLTaskScheduler::schedule(
        Concurrency::details::_DefaultPPLTaskScheduler *this,
        void (*a2)(void *),
        void *a3)
{
  Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *v5; // rsi
  struct Concurrency::details::_Threadpool_chore *v6; // rdx
  struct Concurrency::details::_Threadpool_chore *v7; // rdx
  const char *v8; // [rsp+20h] [rbp-38h] BYREF
  char v9; // [rsp+28h] [rbp-30h]
  _QWORD pExceptionObject[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *)operator new(0x28uLL);
  *(_QWORD *)v5 = 0LL;
  *((_QWORD *)v5 + 1) = Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::_Callback;
  *((_QWORD *)v5 + 2) = v5;
  *((_QWORD *)v5 + 3) = a2;
  *((_QWORD *)v5 + 4) = a3;
  if ( Concurrency::details::_Schedule_chore(v5, v6) )
  {
    Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::`scalar deleting destructor'(v5, v7);
    v9 = 1;
    pExceptionObject[0] = &std::exception::`vftable';
    pExceptionObject[1] = 0LL;
    pExceptionObject[2] = 0LL;
    v8 = "Fail to schedule the chore!";
    o___std_exception_copy_0((__int64)&v8);
    pExceptionObject[0] = &std::runtime_error::`vftable';
    throw (std::runtime_error *)pExceptionObject;
  }
}
