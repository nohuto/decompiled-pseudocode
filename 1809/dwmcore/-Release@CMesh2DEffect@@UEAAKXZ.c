/*
 * XREFs of ?Release@CMesh2DEffect@@UEAAKXZ @ 0x1801E6EB0
 * Callers:
 *     ?Release@CMesh2DEffect@@W7EAAKXZ @ 0x1800F0B70 (-Release@CMesh2DEffect@@W7EAAKXZ.c)
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x1800F0B80 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMesh2DEffect::Release(CMesh2DEffect *this)
{
  return CMILRefCountBase::Release((CMesh2DEffect *)((char *)this + 16));
}
