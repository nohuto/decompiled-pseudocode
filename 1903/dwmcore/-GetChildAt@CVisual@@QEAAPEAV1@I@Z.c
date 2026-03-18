/*
 * XREFs of ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x1801C3054
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CVisual::GetChildAt(CVisual *this, unsigned int a2)
{
  __int64 *v2; // rcx
  unsigned __int64 v3; // rax

  v2 = (__int64 *)((char *)this + 72);
  if ( (*v2 & 2) != 0 )
    v3 = *(_QWORD *)(*v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v3 = *v2 & 1;
  if ( v3 > a2 )
    return (struct CVisual *)CPtrArrayBase::operator[](v2, a2);
  else
    return 0LL;
}
