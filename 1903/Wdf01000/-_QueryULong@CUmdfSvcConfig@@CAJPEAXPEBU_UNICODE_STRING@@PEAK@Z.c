/*
 * XREFs of ?_QueryULong@CUmdfSvcConfig@@CAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0061E50
 * Callers:
 *     ?FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003AAFC (-FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     GetEnhancedVerifierOptions @ 0x1C0043204 (GetEnhancedVerifierOptions.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C0059C64 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxOverrideDefaultVerifierSettings @ 0x1C0059FE0 (FxOverrideDefaultVerifierSettings.c)
 *     FxRegistrySettingsInitialize @ 0x1C005A044 (FxRegistrySettingsInitialize.c)
 *     FxVerifierGetObjectDebugInfo @ 0x1C005A6D4 (FxVerifierGetObjectDebugInfo.c)
 *     FxVerifierQueryStateSeparationDetection @ 0x1C005A8D4 (FxVerifierQueryStateSeparationDetection.c)
 *     FxVerifierQueryTrackPower @ 0x1C005A978 (FxVerifierQueryTrackPower.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C005BA2C (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C007E648 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0088F7C (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z @ 0x1C0092674 (-GetSecureSoftwareDeviceTag@CUmdfSvcConfig@@QEAAJPEAXPEAK@Z.c)
 *     ?IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z @ 0x1C0092760 (-IsCompanionSecure@CUmdfSvcConfig@@SAJPEAXPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CUmdfSvcConfig::_QueryULong(void *Key, _UNICODE_STRING *ValueName, unsigned int *Value)
{
  NTSTATUS v4; // edx
  unsigned int length; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  length = 16;
  v4 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, buffer, 0x10u, &length);
  if ( ((int)(v4 + 0x80000000) < 0 || v4 == -2147483643) && *(_DWORD *)&buffer[4] != 4 )
    v4 = -1073741788;
  if ( v4 >= 0 )
    *Value = *(_DWORD *)&buffer[12];
  return (unsigned int)v4;
}
