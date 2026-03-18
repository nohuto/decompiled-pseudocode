/*
 * XREFs of ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0060014
 * Callers:
 *     ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0060178 (-FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4Flip.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0012334 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0060C9C (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerDwmApplyUpdates(
        FlipManagerObject *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct _LIST_ENTRY *a4,
        enum FlipPresentProcessResult *a5)
{
  int v9; // ebx

  v9 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v9 >= 0 )
  {
    v9 = CFlipManager::ConsumerDwmApplyUpdates((FlipManagerObject *)((char *)this + 32), a2, a3, a4, a5);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v9;
}
