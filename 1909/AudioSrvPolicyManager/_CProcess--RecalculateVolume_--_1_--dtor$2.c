/*
 * XREFs of _CProcess::RecalculateVolume_::_1_::dtor$2 @ 0x180036941
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::RecalculateVolume_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioProcessNotification>::~CComPtr<IAudioProcessNotification>((__int64 *)(a2 + 144));
}
