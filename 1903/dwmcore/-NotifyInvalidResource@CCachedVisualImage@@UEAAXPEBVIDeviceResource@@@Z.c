/*
 * XREFs of ?NotifyInvalidResource@CCachedVisualImage@@UEAAXPEBVIDeviceResource@@@Z @ 0x180021570
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ @ 0x18002B7D8 (-RemoveAllTargets@CCachedVisualImage@@AEAA_NXZ.c)
 */

void __fastcall CCachedVisualImage::NotifyInvalidResource(CCachedVisualImage *this, const struct IDeviceResource *a2)
{
  CCachedVisualImage::RemoveAllTargets((CCachedVisualImage *)((char *)this - 128));
  CDeviceResource::NotifyInvalid((CCachedVisualImage *)((char *)this - 56), a2);
}
