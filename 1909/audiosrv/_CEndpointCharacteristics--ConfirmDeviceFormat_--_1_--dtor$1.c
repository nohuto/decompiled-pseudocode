/*
 * XREFs of _CEndpointCharacteristics::ConfirmDeviceFormat_::_1_::dtor$1 @ 0x180072F03
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::ConfirmDeviceFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<KSDATAFORMAT_WAVEFORMATEX>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX>(a2 + 80);
}
