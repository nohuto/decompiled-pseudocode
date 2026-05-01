/*
 * XREFs of ??1CRunnableTask@@MEAA@XZ @ 0x1802DE92C
 * Callers:
 *     ??_G?$CSimpleRunnableTask@V_lambda_1b237cfa226cb7a358646b393456f6b8_@@@TaskScheduler@shell@@UEAAPEAXI@Z @ 0x1802DEB60 (--_G-$CSimpleRunnableTask@V_lambda_1b237cfa226cb7a358646b393456f6b8_@@@TaskScheduler@shell@@UEAA.c)
 *     ??_GCRunnableTask@@MEAAPEAXI@Z @ 0x1802DEC60 (--_GCRunnableTask@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRunnableTask::~CRunnableTask(CRunnableTask *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CRunnableTask::`vftable'{for `IRunnableTask'};
  *((_QWORD *)this + 1) = &CRunnableTask::`vftable'{for `IServiceProvider'};
  *((_QWORD *)this + 2) = &CRunnableTask::`vftable'{for `IQueryContinue'};
  *((_QWORD *)this + 3) = &CRunnableTask::`vftable'{for `IObjectWithCancelEvent'};
  *((_QWORD *)this + 4) = &CRunnableTask::`vftable'{for `ITestRunnableTask'};
  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    SetEvent(v2);
    CloseHandle(*((HANDLE *)this + 7));
  }
}
