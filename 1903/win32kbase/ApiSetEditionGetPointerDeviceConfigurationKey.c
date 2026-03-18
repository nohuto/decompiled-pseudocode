/*
 * XREFs of ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C0062254
 * Callers:
 *     AccessPTPEnabledStatus @ 0x1C0062070 (AccessPTPEnabledStatus.c)
 *     GetDWORDSettingValuesEx @ 0x1C00621B0 (GetDWORDSettingValuesEx.c)
 *     WriteSettingValues @ 0x1C01122F0 (WriteSettingValues.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetPointerDeviceConfigurationKey(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 PointerDeviceConfigurationKey; // rbx
  unsigned int v5; // esi
  int v7; // edx

  PointerDeviceConfigurationKey = 0LL;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      368,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  if ( (int)IsEditionGetPointerDeviceConfigurationKeySupported() >= 0 )
    PointerDeviceConfigurationKey = EditionGetPointerDeviceConfigurationKey(a1, v5, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      10,
      369,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return PointerDeviceConfigurationKey;
}
