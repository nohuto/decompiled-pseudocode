/*
 * XREFs of ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C005E814
 * Callers:
 *     NtFlipObjectDisconnectEndpoint @ 0x1C005F5C0 (NtFlipObjectDisconnectEndpoint.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0012334 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0061954 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0061A08 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::DisconnectEndpoint(FlipManagerObject *this, char a2)
{
  int v4; // ebx
  CFlipManager *v5; // rcx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    v5 = (FlipManagerObject *)((char *)this + 32);
    if ( a2 )
    {
      CFlipManager::ProcessProducerDisconnect(v5);
    }
    else if ( *((_QWORD *)this + 10) != 1LL )
    {
      CFlipManager::ProcessConsumerDisconnect(v5);
    }
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
