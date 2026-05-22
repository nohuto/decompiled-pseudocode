/*
 * XREFs of ??1?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@QEAA@XZ @ 0x1800A4838
 * Callers:
 *     _Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping_::_1_::dtor$1 @ 0x180135979 (_Windows--Internal--Holographic--HolographicDeviceSnapshot--AddTelemetryGuidMapping_ea_180135979.c)
 *     __lambda_a56f457f58ac66e3e3dc9abfa35bf876_::operator()_::_1_::dtor$0 @ 0x180135E2B (__lambda_a56f457f58ac66e3e3dc9abfa35bf876_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::pair<SPATIAL_NODE_ID const,std::wstring>::~pair<SPATIAL_NODE_ID const,std::wstring>(__int64 a1)
{
  return std::wstring::~wstring(a1 + 16);
}
