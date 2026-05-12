/*
 * XREFs of RaidReleasePortData @ 0x1C000E7C4
 * Callers:
 *     StorpLogStatistics @ 0x1C000C494 (StorpLogStatistics.c)
 *     McGenControlCallbackV2 @ 0x1C001F490 (McGenControlCallbackV2.c)
 *     RaDeleteDriver @ 0x1C0073958 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleasePortData(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    RaidpPortData = 0LL;
    ExFreePoolWithTag(a1, 0x44506152u);
  }
}
