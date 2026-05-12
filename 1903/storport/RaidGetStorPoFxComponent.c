/*
 * XREFs of RaidGetStorPoFxComponent @ 0x1C0016898
 * Callers:
 *     StorUpdateCrashDumpPowerReady @ 0x1C0016768 (StorUpdateCrashDumpPowerReady.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C00211F4 (StorpAdapterInitializePoFxPower.c)
 *     RaidGetTotalStorPoFxDeviceSize @ 0x1C0021474 (RaidGetTotalStorPoFxDeviceSize.c)
 *     RaidRegisterForRuntimePowerManagement @ 0x1C0021524 (RaidRegisterForRuntimePowerManagement.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003E104 (StorpUnitInitializePoFxPower.c)
 *     StorPortUnitIdleState @ 0x1C00407C0 (StorPortUnitIdleState.c)
 * Callees:
 *     <none>
 */

char *__fastcall RaidGetStorPoFxComponent(int *a1, unsigned int a2)
{
  int v2; // r8d
  char *result; // rax
  unsigned __int64 v4; // rax

  v2 = *a1;
  result = 0LL;
  if ( *a1 == 1 )
  {
    if ( a2 < a1[2] )
    {
      v4 = ((unsigned __int64)a2 << 6) + 16;
      return (char *)a1 + v4;
    }
  }
  else if ( (v2 == 2 || v2 == 3) && a2 < a1[2] )
  {
    v4 = ((unsigned __int64)a2 << 6) + 24;
    return (char *)a1 + v4;
  }
  return result;
}
