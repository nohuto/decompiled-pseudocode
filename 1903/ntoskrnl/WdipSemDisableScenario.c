/*
 * XREFs of WdipSemDisableScenario @ 0x1407164A4
 * Callers:
 *     WdipStartEndScenario @ 0x140716438 (WdipStartEndScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     WdipSemMarkInstanceForDeletion @ 0x1407165F4 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemGetLoggerIds @ 0x1407166C0 (WdipSemGetLoggerIds.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1407167D8 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x14071685C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemDisableContextProviders @ 0x140717370 (WdipSemDisableContextProviders.c)
 *     WdipSemValidateEndEvent @ 0x140717A5C (WdipSemValidateEndEvent.c)
 *     WdipSemActivateInstance @ 0x140744A5C (WdipSemActivateInstance.c)
 *     WdipSemShutdown @ 0x1408EE310 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x1408EECA8 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemDisableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  char v5; // r14
  int LoggerIds; // ebx
  __int64 v10; // rax
  struct _KTHREAD *v12; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  if ( !a1 || !a3 )
  {
    LoggerIds = -1073741811;
    goto LABEL_15;
  }
  if ( !WdipSemEnabled )
    goto LABEL_14;
  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds < 0 )
  {
    v5 = 1;
    goto LABEL_8;
  }
  v10 = WdipSemMarkInstanceForDeletion(a3);
  v4 = v10;
  if ( !v10 )
  {
LABEL_14:
    LoggerIds = -1073741823;
    goto LABEL_15;
  }
  LoggerIds = WdipSemValidateEndEvent(a1, a2, *(_QWORD *)(v10 + 32));
  if ( LoggerIds < 0 )
    goto LABEL_15;
  WdipSemDisableContextProviders(v4, 0LL);
LABEL_8:
  if ( LoggerIds >= 0 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END) )
      WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_END, v4);
    WdipSemDeleteTransitionalInstance(v4);
    goto LABEL_12;
  }
LABEL_15:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_END_FAILED, a1, a2, a3, LoggerIds);
  if ( v4 )
    WdipSemActivateInstance(v4);
LABEL_12:
  ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    if ( WdipSemEnabled )
      WdipSemShutdown();
    ExReleasePushLockEx((ULONG_PTR)&WdipSemPushLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)LoggerIds;
}
