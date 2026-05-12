/*
 * XREFs of RaidUpdateZoneIoMetadata @ 0x1C002727C
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0003360 (RaidpAdapterContinueScatterGather.c)
 *     RaUnitStartIo @ 0x1C0003430 (RaUnitStartIo.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00049A0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C003B510 (RaidpAdapterContinueDataBufferScatterGather.c)
 * Callees:
 *     IsZonedWriteRequest @ 0x1C0016238 (IsZonedWriteRequest.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C00267C4 (RaidUpdateZoneIoSubmission.c)
 */

void __fastcall RaidUpdateZoneIoMetadata(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && *(_BYTE *)(a1 + 129) )
  {
    v6 = 0;
    if ( IsZonedWriteRequest(a1, a2, a3, &v6) )
    {
      RtlInterlockedClearBitRun(a1 + 3288, v6, 1LL);
      RaidUpdateZoneIoSubmission(a1 + 656, a2, a3);
    }
  }
}
