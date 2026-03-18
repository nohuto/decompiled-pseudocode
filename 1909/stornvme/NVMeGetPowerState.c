/*
 * XREFs of NVMeGetPowerState @ 0x1C000BA5C
 * Callers:
 *     NVMeLogTelemetryControllerInfo @ 0x1C000C56C (NVMeLogTelemetryControllerInfo.c)
 *     NVMeMaxOperationalPower @ 0x1C000CB3C (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C000CD30 (NVMePowerInitialize.c)
 *     NVMePowerSetFState @ 0x1C000D414 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000D53C (NVMePowerSetPerfState.c)
 *     NVMeSetPowerState @ 0x1C001878C (NVMeSetPowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeGetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 1536);
  if ( a2 > 0x1Fu || a2 > *(_BYTE *)(v2 + 263) )
    return 0LL;
  else
    return v2 + 32 * (a2 + 64LL);
}
