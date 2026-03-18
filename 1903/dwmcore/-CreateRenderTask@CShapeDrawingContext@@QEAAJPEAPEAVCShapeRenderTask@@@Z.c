/*
 * XREFs of ?CreateRenderTask@CShapeDrawingContext@@QEAAJPEAPEAVCShapeRenderTask@@@Z @ 0x180253388
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801FAC24 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@$$V@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@QEAAPEAVCShapeRenderTask@@QEAV2@@Z @ 0x180252DAC (--$_Emplace_reallocate@$$V@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@st.c)
 */

__int64 __fastcall CShapeDrawingContext::CreateRenderTask(CShapeDrawingContext *this, struct CShapeRenderTask **a2)
{
  __int64 *v4; // rcx
  _DWORD *v5; // rdx

  v4 = (__int64 *)((char *)this + 504);
  v5 = (_DWORD *)v4[1];
  if ( (_DWORD *)v4[2] == v5 )
  {
    std::vector<CShapeRenderTask>::_Emplace_reallocate<>(v4, (__int64)v5);
  }
  else
  {
    *v5 = 0;
    v4[1] += 56LL;
  }
  *a2 = (struct CShapeRenderTask *)(*((_QWORD *)this + 64) - 56LL);
  return 0LL;
}
