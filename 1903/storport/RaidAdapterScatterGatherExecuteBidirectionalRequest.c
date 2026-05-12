/*
 * XREFs of RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C003507C
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C00034F0 (RaidAdapterExecuteXrb.c)
 *     RaUnitStartIo @ 0x1C00035B0 (RaUnitStartIo.c)
 * Callees:
 *     RaidDmaGetScatterGatherList @ 0x1C0004F50 (RaidDmaGetScatterGatherList.c)
 *     RaidDmaBuildScatterGatherList @ 0x1C00051BC (RaidDmaBuildScatterGatherList.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C004159C (RaidSrbExGetBidirectionalData.c)
 */

__int64 __fastcall RaidAdapterScatterGatherExecuteBidirectionalRequest(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 result; // rax

  RaidSrbExGetBidirectionalData(*(_QWORD *)(a2 + 168));
  v5 = *(unsigned int *)(a1 + 524);
  if ( (v5 & 8) == 0 && (*(_BYTE *)(a1 + 109) & 2) == 0 )
  {
    LOBYTE(v5) = 1;
    LOBYTE(v4) = 1;
    KeFlushIoBuffers(*(_QWORD *)(a2 + 136), v4, v5);
  }
  result = RaidDmaBuildScatterGatherList((__int64 *)(a1 + 696), *(_QWORD *)(a1 + 8));
  if ( (_DWORD)result == -1073741789 )
    return RaidDmaGetScatterGatherList((__int64 *)(a1 + 696), *(_QWORD *)(a1 + 8));
  return result;
}
