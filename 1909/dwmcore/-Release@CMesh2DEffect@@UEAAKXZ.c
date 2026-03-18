/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x18021F070
 * Callers:
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x1800F1340 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x1800F1350 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CDirtyRegion::Release((CMesh2DEffect *)((char *)this + 16));
}
