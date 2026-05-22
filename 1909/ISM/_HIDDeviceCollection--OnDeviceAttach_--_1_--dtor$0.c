/*
 * XREFs of _HIDDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x1800A59DB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HIDDeviceCollection::OnDeviceAttach_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<LegacyDeviceInfo>::~unique_ptr<LegacyDeviceInfo>((void **)(a2 + 72));
}
