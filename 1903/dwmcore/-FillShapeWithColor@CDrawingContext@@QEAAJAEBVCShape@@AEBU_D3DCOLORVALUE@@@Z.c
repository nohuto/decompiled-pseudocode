/*
 * XREFs of ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016F87C
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180253C38 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithColor(
        CDrawingContext *this,
        const struct CShape *a2,
        const struct _D3DCOLORVALUE *a3)
{
  struct ID2D1Brush *v6; // rbx

  v6 = *(struct ID2D1Brush **)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48))
                             + 352);
  (*(void (__fastcall **)(struct ID2D1Brush *, const struct _D3DCOLORVALUE *))(*(_QWORD *)v6 + 64LL))(v6, a3);
  return CDrawingContext::FillShapeWithBrush(this, a2, v6);
}
