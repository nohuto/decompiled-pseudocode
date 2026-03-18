/*
 * XREFs of ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x1800C4ABC
 * Callers:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x18001E9D0 (--1CTransformGroup@@MEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800C4A70 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x180213BB8 (--1CTransform3DGroup@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SAFE_DELETE<CMILMatrix>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    operator delete(v2, 0x44uLL);
    *a1 = 0LL;
  }
}
