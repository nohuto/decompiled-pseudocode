/*
 * XREFs of ?ConsumerQueryBufferInfo@FlipManagerObject@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00576A8
 * Callers:
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x1C0058240 (NtFlipObjectConsumerQueryBufferInfo.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ConsumerQueryBufferInfo@CFlipManager@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C0059E5C (-ConsumerQueryBufferInfo@CFlipManager@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerQueryBufferInfo(
        FlipManagerObject *this,
        unsigned __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  int BufferInfo; // ebx

  BufferInfo = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( BufferInfo >= 0 )
  {
    BufferInfo = CFlipManager::ConsumerQueryBufferInfo((FlipManagerObject *)((char *)this + 32), a2, a3, a4);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)BufferInfo;
}
