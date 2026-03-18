/*
 * XREFs of ?AcquireExclusive@CPushLockCriticalSection@@QEAAXXZ @ 0x1C005A4B8
 * Callers:
 *     ?DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ @ 0x1C001B160 (-DiscardAllCompositionFrames@CCompositionFrameCollection@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLockCriticalSection::AcquireExclusive(CPushLockCriticalSection *this)
{
  ExAcquirePushLockExclusiveEx(this, 0LL);
  *((_BYTE *)this + 8) = 1;
}
