/*
 * XREFs of ?AreEffectsSupported@CD3DDeviceLevel1@@QEAA_NXZ @ 0x18007EE20
 * Callers:
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ @ 0x18007FC2C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJXZ.c)
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
