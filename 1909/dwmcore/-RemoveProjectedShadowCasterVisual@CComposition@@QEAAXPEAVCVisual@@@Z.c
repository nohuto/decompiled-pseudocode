/*
 * XREFs of ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18017660C
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x18000406C (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800F0217 (memmove_0.c)
 */

void __fastcall CComposition::RemoveProjectedShadowCasterVisual(CComposition *this, struct CVisual *a2)
{
  struct CVisual **v2; // r8
  struct CVisual **i; // rcx

  v2 = (struct CVisual **)*((_QWORD *)this + 135);
  for ( i = (struct CVisual **)*((_QWORD *)this + 134); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
    *((_QWORD *)this + 135) -= 8LL;
  }
}
