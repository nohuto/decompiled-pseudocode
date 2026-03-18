/*
 * XREFs of NVMePowerStateGetMaxPower @ 0x1C000F660
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C000EA00 (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C000EBF4 (NVMePowerInitialize.c)
 *     NVMePowerSetFState @ 0x1C000F2D8 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000F400 (NVMePowerSetPerfState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerStateGetMaxPower(unsigned __int16 *a1)
{
  if ( a1 )
    return *a1 * ((*((_BYTE *)a1 + 3) & 1) != 0 ? 100 : 10000);
  else
    return 0xFFFFFFFFLL;
}
