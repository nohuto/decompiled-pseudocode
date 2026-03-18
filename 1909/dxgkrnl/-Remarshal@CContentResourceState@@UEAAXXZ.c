/*
 * XREFs of ?Remarshal@CContentResourceState@@UEAAXXZ @ 0x1C0063270
 * Callers:
 *     <none>
 * Callees:
 *     ?Remarshal@CFlipResourceState@@UEAAXXZ @ 0x1C0063290 (-Remarshal@CFlipResourceState@@UEAAXXZ.c)
 */

void __fastcall CContentResourceState::Remarshal(CContentResourceState *this)
{
  *((_BYTE *)this + 56) |= 1u;
  CFlipResourceState::Remarshal(this);
}
