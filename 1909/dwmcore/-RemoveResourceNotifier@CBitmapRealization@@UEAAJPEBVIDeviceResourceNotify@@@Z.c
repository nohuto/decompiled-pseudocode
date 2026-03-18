/*
 * XREFs of ?RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180020600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CBitmapRealization::RemoveResourceNotifier(
        CBitmapRealization *this,
        const struct IDeviceResourceNotify *a2)
{
  return CDeviceResource::RemoveResourceNotifier(this, a2);
}
