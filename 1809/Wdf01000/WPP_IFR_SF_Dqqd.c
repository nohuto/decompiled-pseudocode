/*
 * XREFs of WPP_IFR_SF_dqqd @ 0x1C0050608
 * Callers:
 *     ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x1C0016E74 (-PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestActi.c)
 *     ?PowerPolSystemWakeDeviceToD0@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0017BA0 (-PowerPolSystemWakeDeviceToD0@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C004FB08 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0004FD0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C003BC00 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_dqqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 flags,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        int _a2,
        const void *_a3,
        const void *_a4,
        int globals_0)
{
  int v12; // eax
  unsigned __int64 v13; // r11

  v12 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)id >> 16) + (((id - 1) >> 5) & 0x7FF));
  if ( _bittest(&v12, (id - 1) & 0x1F) )
  {
    v13 = (unsigned __int64)id >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v13 + 1) >= 2u )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v13),
        43LL,
        _a1,
        traceGuid,
        &_a2,
        4LL,
        &_a3,
        8LL,
        &_a4,
        8LL,
        &globals_0,
        4LL,
        0LL);
  }
  FxIFR(globals, 2u, id, _a1, traceGuid, &_a2, 4LL, &_a3, 8LL, &_a4, 8LL, &globals_0, 4LL, 0LL);
}
