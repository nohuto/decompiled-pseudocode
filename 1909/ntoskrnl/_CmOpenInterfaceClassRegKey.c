/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x140627CC0
 * Callers:
 *     IopGetDeviceInterfaces @ 0x140627858 (IopGetDeviceInterfaces.c)
 *     _PnpDispatchInterfaceClass @ 0x140627D10 (_PnpDispatchInterfaceClass.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140629A48 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     PiCMOpenClassKey @ 0x1406CCE80 (PiCMOpenClassKey.c)
 *     _CmCreateInterfaceClassWorker @ 0x14072D114 (_CmCreateInterfaceClassWorker.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14093AB14 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14093DB58 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1405C02BC (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInterfaceClassRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 0x40u, 0, a5, a6, a7, a8);
}
