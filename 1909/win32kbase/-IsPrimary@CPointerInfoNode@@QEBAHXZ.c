/*
 * XREFs of ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C016BE10
 * Callers:
 *     ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C0164674 (-FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C016BE40 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsPrimary(CPointerInfoNode *this)
{
  int IsValid; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  IsValid = CPointerInfoNode::IsValid(this);
  v3 = 0;
  if ( IsValid )
    return (*(_DWORD *)(v2 + 188) & 0x2000) != 0;
  return v3;
}
