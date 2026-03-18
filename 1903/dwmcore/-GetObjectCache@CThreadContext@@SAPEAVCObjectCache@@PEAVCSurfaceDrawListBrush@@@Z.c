/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x1800510E0
 * Callers:
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180011A00 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180051E20 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180051ED4 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180051114 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CSurfaceDrawListBrush *a1)
{
  int Current; // eax
  __int64 v2; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  Current = CThreadContext::GetCurrent(&v5);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr, v2);
  return (struct CThreadContext *)((char *)v5 + 168);
}
