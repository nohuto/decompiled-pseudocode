/*
 * XREFs of ?NotifyOnChanged@CCompositionGlyphRun@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801CF780
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBrushTransform@CCompositionGlyphRun@@QEAAXXZ @ 0x1801CF9F0 (-UpdateBrushTransform@CCompositionGlyphRun@@QEAAXXZ.c)
 */

__int64 __fastcall CCompositionGlyphRun::NotifyOnChanged(CCompositionGlyphRun *a1, unsigned int a2, __int64 a3)
{
  CCompositionGlyphRun::UpdateBrushTransform(a1);
  return CResource::NotifyOnChanged((__int64)a1, a2, a3);
}
