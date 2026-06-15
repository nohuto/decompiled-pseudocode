/*
 * XREFs of ?GetRuntimeClassName@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x140048B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::GetRuntimeClassName(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.Internal.AudioDeviceBroker", 0x30u, a2);
}
