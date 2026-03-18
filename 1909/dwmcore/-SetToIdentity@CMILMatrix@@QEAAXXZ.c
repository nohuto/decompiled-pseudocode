/*
 * XREFs of ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008E14C
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::SetToIdentity(CMILMatrix *this)
{
  *(_OWORD *)this = _xmm;
  *((_WORD *)this + 32) = 32085;
  *((_OWORD *)this + 1) = _xmm;
  *((_OWORD *)this + 2) = _xmm;
  *((_OWORD *)this + 3) = _xmm;
}
