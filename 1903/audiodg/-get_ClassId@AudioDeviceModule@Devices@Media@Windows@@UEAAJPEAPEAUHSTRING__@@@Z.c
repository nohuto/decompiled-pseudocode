/*
 * XREFs of ?get_ClassId@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x14004C590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Media::Devices::AudioDeviceModule::get_ClassId(HSTRING *this, HSTRING *a2)
{
  if ( a2 )
    return WindowsDuplicateString(this[10], a2);
  else
    return -2147467261;
}
