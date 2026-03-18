/*
 * XREFs of ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001472C
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007FB0 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C001468C (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C005D7B8 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1C005D980 (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C005DA2C (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 * Callees:
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C00086A0 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00147A4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005D87C (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 */

unsigned __int8 __fastcall FxObject::PerformDisposingDisposeChildrenLocked(
        FxObject *this,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  FxObject::SetObjectStateLocked(this, FxObjectStateDisposingDisposeChildren);
  if ( !FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, OldIrql, CanDefer) )
    return 0;
  if ( (this->m_ObjectFlags & 0x104) == 0x104 )
    FxObject::DeletedAndDisposedWorkerLocked(this, OldIrql, 0);
  else
    FxObject::SetObjectStateLocked(this, FxObjectStateDisposed);
  return 1;
}
