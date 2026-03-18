/*
 * XREFs of ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C00609E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011B94 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0061914 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C00619C8 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 */

__int64 __fastcall CFlipManager::Close(CFlipManager *this, struct _EPROCESS *a2, void *a3, __int64 a4)
{
  if ( a4 == 1 && (a2 == *((struct _EPROCESS **)this + 6) || a2 == *((struct _EPROCESS **)this + 5)) )
  {
    CPushLock::AcquireLockExclusive((CFlipManager *)((char *)this + 8));
    if ( a2 == *((struct _EPROCESS **)this + 6) )
      CFlipManager::ProcessConsumerDisconnect(this);
    if ( a2 == *((struct _EPROCESS **)this + 5) )
      CFlipManager::ProcessProducerDisconnect(this);
    CPushLock::ReleaseLock((CFlipManager *)((char *)this + 8));
  }
  return 0LL;
}
