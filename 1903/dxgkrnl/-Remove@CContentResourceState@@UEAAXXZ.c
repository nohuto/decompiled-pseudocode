/*
 * XREFs of ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C0063280
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CFlipResourceState@@UEAAXXZ @ 0x1C00632C0 (-Remove@CFlipResourceState@@UEAAXXZ.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C00640EC (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0064148 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

void __fastcall CContentResourceState::Remove(CContentResourceState *this)
{
  CContentResourceState::SetBoundBuffer(this, 0LL);
  CContentResourceState::SetBoundPropertySet(this, 0LL);
  *((_BYTE *)this + 56) &= ~1u;
  CFlipResourceState::Remove(this);
}
