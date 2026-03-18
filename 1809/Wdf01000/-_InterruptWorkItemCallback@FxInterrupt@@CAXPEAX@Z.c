/*
 * XREFs of ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C008C810
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C008CEDC (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 */

void __fastcall FxInterrupt::_InterruptWorkItemCallback(FxInterrupt *DeferredContext)
{
  FxInterrupt::WorkItemHandler(DeferredContext);
}
