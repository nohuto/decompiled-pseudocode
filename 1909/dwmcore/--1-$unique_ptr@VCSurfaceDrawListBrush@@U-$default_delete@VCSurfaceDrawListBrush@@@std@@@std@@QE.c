/*
 * XREFs of ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800BB274
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EE5A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EF1A0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 * Callees:
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BB2A0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(CSurfaceDrawListBrush **a1)
{
  CSurfaceDrawListBrush *v1; // rcx
  void *result; // rax

  v1 = *a1;
  if ( v1 )
    return CSurfaceDrawListBrush::`vector deleting destructor'(v1, 1u);
  return result;
}
