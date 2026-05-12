/*
 * XREFs of RaidReleasePortData @ 0x1C00101D4
 * Callers:
 *     StorpLogStatistics @ 0x1C000C4E8 (StorpLogStatistics.c)
 *     McGenControlCallbackV2 @ 0x1C001FE70 (McGenControlCallbackV2.c)
 *     RaDeleteDriver @ 0x1C007482C (RaDeleteDriver.c)
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
