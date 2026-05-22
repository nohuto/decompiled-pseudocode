/*
 * XREFs of ??1DevicePropertyHelper@DevicePropertyHelpers@@QEAA@XZ @ 0x180060550
 * Callers:
 *     _RawInputProvidersTracing::TelemetryDdiDevice_Added__::_1_::dtor$6 @ 0x18013107B (_RawInputProvidersTracing--TelemetryDdiDevice_Added__--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall DevicePropertyHelpers::DevicePropertyHelper::~DevicePropertyHelper(
        DevicePropertyHelpers::DevicePropertyHelper *this)
{
  std::wstring::~wstring((__int64)this + 8);
}
