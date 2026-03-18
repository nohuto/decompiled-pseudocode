/*
 * XREFs of UsbDualRoleFeaturesQueryLocalMachine @ 0x1C005DB08
 * Callers:
 *     UsbhSetupDevice @ 0x1C0020B00 (UsbhSetupDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     CheckUSBFnConfiguration @ 0x1C005D14C (CheckUSBFnConfiguration.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C005D3B8 (CheckUSBFnIncludeDefaultCfg.c)
 *     ReadManifestAssignedValue @ 0x1C005D678 (ReadManifestAssignedValue.c)
 *     ReadTestOverrideValue @ 0x1C005D740 (ReadTestOverrideValue.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C005D84C (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UpdateUcmIsPresentBit @ 0x1C005D9C0 (UpdateUcmIsPresentBit.c)
 */

__int64 __fastcall UsbDualRoleFeaturesQueryLocalMachine(int *a1)
{
  __int64 v2; // rcx
  int v4; // [rsp+28h] [rbp-10h]

  if ( (int)ReadTestOverrideValue(a1) < 0 )
  {
    ReadManifestAssignedValue(a1);
    *a1 &= 0xFFFFFFF1;
    if ( CheckUSBFnIncludeDefaultCfg(v2) )
      CheckUSBFnConfiguration(a1, L"Default");
    if ( (int)ReadUSBFnFeaturesFromCurrentConfiguration(a1, 0) < 0 )
      ReadUSBFnFeaturesFromCurrentConfiguration(a1, 1);
  }
  UpdateUcmIsPresentBit(a1);
  v4 = *a1;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x25u,
    (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
    v4);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    39 - ((*a1 & 1) != 0),
    (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids);
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           1u,
           41 - ((*a1 & 2) != 0),
           (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids);
}
