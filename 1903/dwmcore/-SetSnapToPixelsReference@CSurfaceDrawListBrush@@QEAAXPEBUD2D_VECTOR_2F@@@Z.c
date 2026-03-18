/*
 * XREFs of ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801FC720
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x18000EC90 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180011A00 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSurfaceDrawListBrush::SetSnapToPixelsReference(
        CSurfaceDrawListBrush *this,
        const struct D2D_VECTOR_2F *a2)
{
  *((_BYTE *)this + 145) = a2 != 0LL;
  if ( a2 )
    *((struct D2D_VECTOR_2F *)this + 17) = *a2;
}
