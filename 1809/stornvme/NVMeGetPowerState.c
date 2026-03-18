/*
 * XREFs of NVMeGetPowerState @ 0x1C000E4B8
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C000EA00 (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C000EBF4 (NVMePowerInitialize.c)
 *     NVMePowerSetFState @ 0x1C000F2D8 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000F400 (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeGetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 1528);
  if ( a2 > 0x1Fu || a2 > *(_BYTE *)(v2 + 263) )
    return 0LL;
  else
    return v2 + 32 * (a2 + 64LL);
}
