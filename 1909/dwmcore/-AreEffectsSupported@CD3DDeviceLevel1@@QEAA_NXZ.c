/*
 * XREFs of ?AreEffectsSupported@CD3DDeviceLevel1@@QEAA_NXZ @ 0x180027BD0
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x1800276C0 (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DDeviceLevel1::AreEffectsSupported(CD3DDeviceLevel1 *this)
{
  bool result; // al

  result = 0;
  if ( *((int *)this + 185) >= 37632 )
    return *((_BYTE *)this + 628) == 0;
  return result;
}
