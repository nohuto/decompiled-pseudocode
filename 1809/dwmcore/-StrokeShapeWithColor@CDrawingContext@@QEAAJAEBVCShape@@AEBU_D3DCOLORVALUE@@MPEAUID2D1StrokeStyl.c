/*
 * XREFs of ?StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyle1@@@Z @ 0x180167350
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180223A28 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::StrokeShapeWithColor(
        CDrawingContext *this,
        const struct CShape *a2,
        const struct _D3DCOLORVALUE *a3,
        float a4,
        struct ID2D1StrokeStyle1 *a5)
{
  struct ID2D1Brush *v8; // rbx

  v8 = *(struct ID2D1Brush **)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48))
                             + 352);
  (*(void (__fastcall **)(struct ID2D1Brush *, const struct _D3DCOLORVALUE *))(*(_QWORD *)v8 + 64LL))(v8, a3);
  return CDrawingContext::StrokeShapeWithBrush(this, a2, v8, a4, a5);
}
