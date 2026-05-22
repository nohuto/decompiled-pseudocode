/*
 * XREFs of ?HasSentReports@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@UEBA_NXZ @ 0x1800BAE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::HasSentReports(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *this)
{
  return *((_BYTE *)this + 108) != 0;
}
