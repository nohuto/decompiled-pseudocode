/*
 * XREFs of ?QueryNextMessageToProducer@FlipManagerObject@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C005E968
 * Callers:
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1C005FAD0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C005FBC0 (NtFlipObjectReadNextMessageToProducer.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0012334 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x1C0061B20 (-QueryNextMessageToProducer@CFlipManager@@QEAAJ_NPEAPEAVCFlipConsumerMessage@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::QueryNextMessageToProducer(
        FlipManagerObject *this,
        bool a2,
        struct CFlipConsumerMessage **a3)
{
  int NextMessageToProducer; // ebx

  NextMessageToProducer = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( NextMessageToProducer >= 0 )
  {
    NextMessageToProducer = CFlipManager::QueryNextMessageToProducer((FlipManagerObject *)((char *)this + 32), a2, a3);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)NextMessageToProducer;
}
