/*
 * XREFs of RaidReleasePortData @ 0x1C00026F4
 * Callers:
 *     StorpLogStatistics @ 0x1C0002A08 (StorpLogStatistics.c)
 *     McGenControlCallbackV2 @ 0x1C00232E0 (McGenControlCallbackV2.c)
 *     RaSqmLogAdapterStatistics @ 0x1C003C3D8 (RaSqmLogAdapterStatistics.c)
 *     RaDeleteDriver @ 0x1C00744A8 (RaDeleteDriver.c)
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
