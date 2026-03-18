/*
 * XREFs of ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802131A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::NotifyInvalidResource(CGdiSpriteBitmap *this, const struct IDeviceResource *a2)
{
  CGdiSpriteBitmap::ReleaseBitmapRealization((CGdiSpriteBitmap *)((char *)this - 64));
}
