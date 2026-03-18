/*
 * XREFs of ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C005D588
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0008490 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008760 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C005D41C (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C005D4E0 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C005D6C0 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C005D74C (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 * Callees:
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C0008C30 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005C2E4 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

void __fastcall FxObject::DeletedAndDisposedWorkerLocked(FxObject *this, KIRQL OldIrql, unsigned __int8 Unlock)
{
  FxObject::SetObjectStateLocked(this, 0xAu);
  if ( Unlock )
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, OldIrql);
  FxObject::DestroyChildren(this);
  this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
}
