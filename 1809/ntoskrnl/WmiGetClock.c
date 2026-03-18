/*
 * XREFs of WmiGetClock @ 0x14030ED10
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14008A510 (RtlGetSystemTimePrecise.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D20 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall WmiGetClock(int a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // ecx

  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  result = 0LL;
  if ( a1 )
  {
    if ( a1 != 2 )
    {
      if ( a1 > 2 )
      {
        if ( a1 <= 4 )
          return result;
        if ( a1 == 5 )
          return __rdtsc();
      }
      return RtlGetSystemTimePrecise();
    }
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  v4 = *(unsigned __int8 *)(v2 + 4209) - 2;
  if ( v4 )
  {
    if ( v4 == 1 )
      return __rdtsc();
    return KeQueryPerformanceCounter(0LL).QuadPart;
  }
  return RtlGetSystemTimePrecise();
}
