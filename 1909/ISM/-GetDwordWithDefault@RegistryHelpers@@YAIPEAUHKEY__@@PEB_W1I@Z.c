/*
 * XREFs of ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18002A59C
 * Callers:
 *     _dynamic_initializer_for__SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64__ @ 0x1800013F0 (_dynamic_initializer_for__SpatialInteractionDevices--SpatialInteractionHeartbeat--ReportInterval.c)
 *     ?Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ @ 0x1800D82C0 (-Instance@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAAEAV1234@XZ.c)
 *     GetConfigurationFlag @ 0x1800DEA54 (GetConfigurationFlag.c)
 *     ??0SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAA@PEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@523@@Z @ 0x1800F3484 (--0SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAA@PEAUISpatialObjectDev.c)
 *     SpatialGraphDriverClientHelpers::DefaultSpatialGraphSettings @ 0x1801546BC (SpatialGraphDriverClientHelpers--DefaultSpatialGraphSettings.c)
 *     ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x180162D7C (--0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@.c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x180165700 (-EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Inte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegistryHelpers::GetDwordWithDefault(
        RegistryHelpers *this,
        const WCHAR *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  DWORD v6; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v7[5]; // [rsp+44h] [rbp-14h] BYREF
  DWORD v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+64h] [rbp+Ch]

  v9 = HIDWORD(this);
  v8 = 0;
  v7[0] = 0;
  v4 = (unsigned int)a4;
  v6 = 4;
  if ( RegGetValueW(HKEY_LOCAL_MACHINE, a2, a3, 0x10u, &v8, v7, &v6) )
    return v4;
  if ( v8 != 4 )
    return v4;
  result = v7[0];
  if ( v6 != 4 )
    return v4;
  return result;
}
