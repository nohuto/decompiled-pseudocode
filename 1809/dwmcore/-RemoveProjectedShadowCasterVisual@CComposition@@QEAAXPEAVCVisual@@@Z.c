/*
 * XREFs of ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18014BFB4
 * Callers:
 *     ?RemoveVisual@CProjectedShadowCaster@@AEAAXXZ @ 0x1801ADF5C (-RemoveVisual@CProjectedShadowCaster@@AEAAXXZ.c)
 * Callees:
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 */

void __fastcall CComposition::RemoveProjectedShadowCasterVisual(CComposition *this, struct CVisual *a2)
{
  struct CVisual **v2; // r8
  struct CVisual **i; // rcx

  v2 = (struct CVisual **)*((_QWORD *)this + 133);
  for ( i = (struct CVisual **)*((_QWORD *)this + 132); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
    *((_QWORD *)this + 133) -= 8LL;
  }
}
