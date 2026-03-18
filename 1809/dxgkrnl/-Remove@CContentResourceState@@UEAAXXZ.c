/*
 * XREFs of ?Remove@CContentResourceState@@UEAAXXZ @ 0x1C005C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CFlipResourceState@@UEAAXXZ @ 0x1C005C130 (-Remove@CFlipResourceState@@UEAAXXZ.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C005CEBC (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C005CF18 (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

void __fastcall CContentResourceState::Remove(CContentResourceState *this)
{
  CContentResourceState::SetBoundBuffer(this, 0LL);
  CContentResourceState::SetBoundPropertySet(this, 0LL);
  *((_BYTE *)this + 56) &= ~1u;
  CFlipResourceState::Remove(this);
}
