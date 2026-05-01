/*
 * XREFs of ??_GChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAXI@Z @ 0x180119F6C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___::Run @ 0x18011F7E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e5f0854e2d49c9821f8031fdfacb73ef___--Run.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x180121CD4 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180119884 (--1ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 */

void *__fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::`scalar deleting destructor'(
        void *a1)
{
  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::~ChainLinkNotifier((__int64)a1);
  operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
