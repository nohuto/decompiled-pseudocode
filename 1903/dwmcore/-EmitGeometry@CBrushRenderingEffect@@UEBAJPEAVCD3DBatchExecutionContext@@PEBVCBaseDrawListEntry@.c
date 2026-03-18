/*
 * XREFs of ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1800BC3C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrushRenderingEffect::EmitGeometry(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  return CRenderingEffect::EmitGeometryImpl(a2, a3, (*(_DWORD *)(*((_QWORD *)this + 2) + 88LL) & 4) != 0);
}
