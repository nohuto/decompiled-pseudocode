/*
 * XREFs of ??1TraceSessionConfig@@QEAA@XZ @ 0x180061D4C
 * Callers:
 *     _GetHolographicInputSession_::_1_::dtor$3 @ 0x1801310E7 (_GetHolographicInputSession_--_1_--dtor$3.c)
 *     _SpatialRimDeviceCollection::OnFinalRelease_::_1_::dtor$0 @ 0x180131229 (_SpatialRimDeviceCollection--OnFinalRelease_--_1_--dtor$0.c)
 *     _SpatialRimDeviceCollection::OnDeviceAttach_::_1_::dtor$0 @ 0x18013123B (_SpatialRimDeviceCollection--OnDeviceAttach_--_1_--dtor$0.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??1?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAA@XZ @ 0x180063598 (--1-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessionProviderConfig@@@std@@@std@@Q.c)
 */

void __fastcall TraceSessionConfig::~TraceSessionConfig(TraceSessionConfig *this)
{
  std::vector<TraceSessionProviderConfig>::~vector<TraceSessionProviderConfig>((char *)this + 104);
  std::wstring::~wstring((__int64)this + 48);
  std::wstring::~wstring((__int64)this);
}
