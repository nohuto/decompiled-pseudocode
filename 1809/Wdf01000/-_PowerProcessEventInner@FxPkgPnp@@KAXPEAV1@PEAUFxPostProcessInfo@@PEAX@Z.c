/*
 * XREFs of ?_PowerProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0010DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C00116B0 (-PowerProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxPkgPnp::_PowerProcessEventInner(FxPkgPnp *This, FxPostProcessInfo *Info, void *WorkerContext)
{
  KeEnterCriticalRegion();
  if ( KeWaitForSingleObject(&This->m_PowerMachine.m_StateMachineLock, Executive, 0, 0, 0LL) == 258 )
    KeLeaveCriticalRegion();
  else
    This->m_PowerMachine.m_StateMachineLock.m_OwningThread = KeGetCurrentThread();
  FxPkgPnp::PowerProcessEventInner(This, Info);
  This->m_PowerMachine.m_StateMachineLock.m_OwningThread = 0LL;
  KeSetEvent(&This->m_PowerMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
