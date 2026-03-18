/*
 * XREFs of ?ConsumerPostMessage@FlipManagerObject@@QEAAJPEAVCFlipConsumerMessage@@@Z @ 0x1C005764C
 * Callers:
 *     NtFlipObjectConsumerPostMessage @ 0x1C0058160 (NtFlipObjectConsumerPostMessage.c)
 *     ?FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z @ 0x1C005937C (-FlipManagerDwmPostConsumerMessage@@YAJPEAUFlipManagerObject@@IPEAUFlipPropertyItem@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000CC08 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@@Z @ 0x1C0059DE4 (-ConsumerPostMessage@CFlipManager@@QEAAXPEAVCFlipConsumerMessage@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerPostMessage(FlipManagerObject *this, struct CFlipConsumerMessage *a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    CFlipManager::ConsumerPostMessage((FlipManagerObject *)((char *)this + 32), a2);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
