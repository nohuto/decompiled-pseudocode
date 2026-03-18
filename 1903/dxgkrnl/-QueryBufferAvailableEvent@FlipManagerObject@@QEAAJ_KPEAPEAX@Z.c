/*
 * XREFs of ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C005E8B8
 * Callers:
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x1C005F850 (NtFlipObjectQueryBufferAvailableEvent.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0011B94 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z @ 0x1C0061A80 (-QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::QueryBufferAvailableEvent(
        FlipManagerObject *this,
        unsigned __int64 a2,
        void **a3)
{
  int BufferAvailableEvent; // ebx

  BufferAvailableEvent = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( BufferAvailableEvent >= 0 )
  {
    BufferAvailableEvent = CFlipManager::QueryBufferAvailableEvent((FlipManagerObject *)((char *)this + 32), a2, a3);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)BufferAvailableEvent;
}
