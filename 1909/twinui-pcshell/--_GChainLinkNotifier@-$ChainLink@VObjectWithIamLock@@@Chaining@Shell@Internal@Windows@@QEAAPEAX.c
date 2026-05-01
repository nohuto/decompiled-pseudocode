/*
 * XREFs of ??_GChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAXI@Z @ 0x1801613DC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a5fd20ec656c6250dae9aa58fde1c803___::Run @ 0x180167E70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a5fd20ec656c6250dae9aa58fde1c803___--Run.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x18016A650 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008A0A0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180160D50 (--1ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ.c)
 */

void *__fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::`scalar deleting destructor'(
        void *a1)
{
  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::~ChainLinkNotifier((__int64)a1);
  operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
