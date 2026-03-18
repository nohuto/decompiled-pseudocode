/*
 * XREFs of ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0017E54
 * Callers:
 *     imp_WdfRegistryQueryULong @ 0x1C0017DA0 (imp_WdfRegistryQueryULong.c)
 *     ?FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C003B830 (-FxIFRGetSize@@YAKPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     GetEnhancedVerifierOptions @ 0x1C0044098 (GetEnhancedVerifierOptions.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C0059A14 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxOverrideDefaultVerifierSettings @ 0x1C0059D14 (FxOverrideDefaultVerifierSettings.c)
 *     FxRegistrySettingsInitialize @ 0x1C0059D6C (FxRegistrySettingsInitialize.c)
 *     FxVerifierGetObjectDebugInfo @ 0x1C005A3E8 (FxVerifierGetObjectDebugInfo.c)
 *     FxVerifierQueryTrackPower @ 0x1C005A5E4 (FxVerifierQueryTrackPower.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x1C005B5F8 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C007DC98 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0087E4C (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 */

__int64 __fastcall FxRegKey::_QueryULong(void *Key, _UNICODE_STRING *ValueName, unsigned int *Value)
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
