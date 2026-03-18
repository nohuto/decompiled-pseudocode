/*
 * XREFs of ?_PowerThreadEnqueue@FxPkgPnp@@CAXPEAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C0086F20
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C0095538 (-QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z.c)
 */

void __fastcall FxPkgPnp::_PowerThreadEnqueue(FxSystemThread **Context, _WORK_QUEUE_ITEM *WorkItem)
{
  FxSystemThread::QueueWorkItem(Context[155], WorkItem);
}
