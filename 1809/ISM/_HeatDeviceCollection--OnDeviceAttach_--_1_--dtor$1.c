/*
 * XREFs of _HeatDeviceCollection::OnDeviceAttach_::_1_::dtor$1 @ 0x180131621
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HeatDeviceCollection::OnDeviceAttach_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>((void **)(a2 + 48));
}
