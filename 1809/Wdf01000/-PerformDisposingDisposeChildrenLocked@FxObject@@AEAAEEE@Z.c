/*
 * XREFs of ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C005D74C
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008490 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C005D41C (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 *     ?PerformEarlyDispose@FxObject@@AEAAEXZ @ 0x1C005D7CC (-PerformEarlyDispose@FxObject@@AEAAEXZ.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C005D878 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 * Callees:
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008B80 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005C2E4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005D588 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 */

unsigned __int8 __fastcall FxObject::PerformDisposingDisposeChildrenLocked(
        FxObject *this,
        KIRQL OldIrql,
        unsigned __int8 CanDefer)
{
  FxObject::SetObjectStateLocked(this, 4u);
  if ( !FxObject::DisposeChildrenWorker(this, FxObjectStateDeferedDisposing, OldIrql, CanDefer) )
    return 0;
  if ( (this->m_ObjectFlags & 0x104) == 0x104 )
    FxObject::DeletedAndDisposedWorkerLocked(this, OldIrql, 0);
  else
    FxObject::SetObjectStateLocked(this, 2u);
  return 1;
}
