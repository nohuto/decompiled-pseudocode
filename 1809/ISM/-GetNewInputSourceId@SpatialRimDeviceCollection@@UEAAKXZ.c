/*
 * XREFs of ?GetNewInputSourceId@SpatialRimDeviceCollection@@UEAAKXZ @ 0x180062EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialRimDeviceCollection::GetNewInputSourceId(SpatialRimDeviceCollection *this)
{
  _InterlockedExchange(
    &MPCInputInfoHelper::m_nextSpectrumId,
    (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
  return (unsigned int)MPCInputInfoHelper::m_nextSpectrumId;
}
