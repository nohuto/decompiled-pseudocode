/*
 * XREFs of ??$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z @ 0x180075A14
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004D570 (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x18006578C (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SAFE_DELETE<TransformParentData>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    operator delete(v2, 0x10uLL);
    *a1 = 0LL;
  }
}
