/*
 * XREFs of ?RemoveFromModalChain@ModalLink@@UEAAJXZ @ 0x1801C5BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveFromChainIfPreviousMatches@?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x1801BFB58 (-RemoveFromChainIfPreviousMatches@-$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windo.c)
 */

__int64 __fastcall ModalLink::RemoveFromModalChain(ModalLink *this)
{
  char *v1; // rdi
  RTL_SRWLOCK *v2; // rbx

  v1 = (char *)this - 72;
  v2 = (RTL_SRWLOCK *)((char *)this + *(int *)(*((_QWORD *)this - 7) + 4LL) - 56);
  AcquireSRWLockExclusive(v2);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>::RemoveFromChainIfPreviousMatches((__int64)v1, 0LL);
  return 0LL;
}
