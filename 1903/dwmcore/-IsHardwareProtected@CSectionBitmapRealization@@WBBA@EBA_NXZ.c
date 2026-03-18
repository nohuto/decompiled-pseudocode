/*
 * XREFs of ?IsHardwareProtected@CSectionBitmapRealization@@WBBA@EBA_NXZ @ 0x1800ED8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSectionBitmapRealization::IsHardwareProtected(__int64 a1)
{
  return CImageSource::IsMonitorSpecificContent((CImageSource *)(a1 - 272));
}
