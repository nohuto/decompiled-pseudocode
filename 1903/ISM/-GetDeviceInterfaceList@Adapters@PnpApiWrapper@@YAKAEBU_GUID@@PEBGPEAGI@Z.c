/*
 * XREFs of ?GetDeviceInterfaceList@Adapters@PnpApiWrapper@@YAKAEBU_GUID@@PEBGPEAGI@Z @ 0x18002B200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CONFIGRET __fastcall PnpApiWrapper::Adapters::GetDeviceInterfaceList(
        GUID *this,
        WCHAR *a2,
        WCHAR *a3,
        unsigned __int16 *a4)
{
  return CM_Get_Device_Interface_ListW(this, a2, a3, (ULONG)a4, 0);
}
