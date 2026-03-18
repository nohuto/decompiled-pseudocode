/*
 * XREFs of NVMeSystemPowerHint @ 0x1C000DBB0
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004C30 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C000DC74 (NVMeUpdateResumeLatencyTolerance.c)
 */

__int64 __fastcall NVMeSystemPowerHint(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // rdx
  __int64 result; // rax

  if ( a2[1] >= 0x10u && *a2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: System Power Hint - Level: %u, Latency: %ums\n", a2[2], a2[3]);
    a1[397] = a2[2];
    a1[399] = a2[3];
    NVMeUpdateResumeLatencyTolerance(a1);
    if ( a1[19] == 5 )
    {
      v4 = a1;
    }
    else
    {
      result = (unsigned int)a1[394];
      if ( (result & 0x10) == 0 )
        return result;
      v4 = a1;
    }
    return StorPortExtendedFunction(57LL, v4, 0LL);
  }
  return result;
}
