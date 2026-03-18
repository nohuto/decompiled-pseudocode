/*
 * XREFs of UsbDualRoleFeaturesQueryLocalMachine @ 0x1C006035C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021740 (UsbhSetupDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     CheckUSBFnConfiguration @ 0x1C005F7EC (CheckUSBFnConfiguration.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C005FA94 (CheckUSBFnIncludeDefaultCfg.c)
 *     ReadManifestAssignedValue @ 0x1C005FDC0 (ReadManifestAssignedValue.c)
 *     ReadTestOverrideValue @ 0x1C005FEBC (ReadTestOverrideValue.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C0060014 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     UpdateUcmIsPresentBit @ 0x1C00601C8 (UpdateUcmIsPresentBit.c)
 */

void __fastcall UsbDualRoleFeaturesQueryLocalMachine(int *a1)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // r9
  int v5; // [rsp+28h] [rbp-10h]

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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *a1;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0x25u,
      (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
      v5);
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v3 = 38;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v3 = 39;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    v3,
    (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v4 = 40;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return;
    v4 = 41;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    v4,
    (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids);
}
