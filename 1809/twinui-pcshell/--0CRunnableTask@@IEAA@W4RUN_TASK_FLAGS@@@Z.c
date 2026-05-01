/*
 * XREFs of ??0CRunnableTask@@IEAA@W4RUN_TASK_FLAGS@@@Z @ 0x1802DE638
 * Callers:
 *     shell::TaskScheduler::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___::CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___ @ 0x1802DE428 (shell--TaskScheduler--CSimpleRunnableTask__lambda_1b237cfa226cb7a358646b393456f6b8___--CSimpleRu.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180083698 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

__int64 __fastcall CRunnableTask::CRunnableTask(__int64 a1)
{
  __int64 result; // rax

  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 8));
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 16));
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 24));
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 32));
  *(_QWORD *)a1 = &CRunnableTask::`vftable'{for `IRunnableTask'};
  *(_QWORD *)(a1 + 8) = &CRunnableTask::`vftable'{for `IServiceProvider'};
  *(_QWORD *)(a1 + 16) = &CRunnableTask::`vftable'{for `IQueryContinue'};
  *(_QWORD *)(a1 + 24) = &CRunnableTask::`vftable'{for `IObjectWithCancelEvent'};
  *(_QWORD *)(a1 + 32) = &CRunnableTask::`vftable'{for `ITestRunnableTask'};
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  result = a1;
  *(_QWORD *)(a1 + 40) = 1LL;
  return result;
}
