/*
 * XREFs of ?Update@CColorTransformResourceProxy@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800B6634
 * Callers:
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180083F10 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x18008E6A0 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorTransformResourceProxy::Update(
        CColorTransformResourceProxy *this,
        const struct MilColorTransform *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MilColorTransform *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL)
                                                                                     + 336LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
