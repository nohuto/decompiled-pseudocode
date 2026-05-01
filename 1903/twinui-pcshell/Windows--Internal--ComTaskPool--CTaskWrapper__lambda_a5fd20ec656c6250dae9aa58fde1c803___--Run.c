/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a5fd20ec656c6250dae9aa58fde1c803___::Run @ 0x180148C00
 * Callers:
 *     <none>
 * Callees:
 *     ??_GChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAXI@Z @ 0x180141DCC (--_GChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAPEAX.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x180146D30 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a5fd20ec656c6250dae9aa58fde1c803___::Run(
        __int64 a1)
{
  void *v2; // rcx

  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Notify(*(_QWORD *)(a1 + 16));
  v2 = *(void **)(a1 + 16);
  if ( v2 )
    Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::`scalar deleting destructor'(v2);
}
