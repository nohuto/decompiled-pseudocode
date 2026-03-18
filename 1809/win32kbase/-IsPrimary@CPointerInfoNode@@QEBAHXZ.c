/*
 * XREFs of ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C013F4E8
 * Callers:
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01384F8 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C013F518 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsPrimary(CPointerInfoNode *this)
{
  int IsValid; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  IsValid = CPointerInfoNode::IsValid(this);
  v3 = 0;
  if ( IsValid )
    return (*(_DWORD *)(v2 + 244) & 0x2000) != 0;
  return v3;
}
