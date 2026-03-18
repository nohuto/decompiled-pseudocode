/*
 * XREFs of NVMePowerStateGetMaxPower @ 0x1C000D79C
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C000CB3C (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C000CD30 (NVMePowerInitialize.c)
 *     NVMePowerSetFState @ 0x1C000D414 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000D53C (NVMePowerSetPerfState.c)
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
