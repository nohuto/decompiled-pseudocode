/*
 * XREFs of RtlpEstimateAllocatedSize @ 0x180077304
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180077050 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpLogHeapContractEvent @ 0x1801032C8 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapCreateEvent @ 0x180103380 (RtlpLogHeapCreateEvent.c)
 *     RtlpLogHeapExtendEvent @ 0x1801034A4 (RtlpLogHeapExtendEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpEstimateAllocatedSize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 576) - 16LL * *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(a1 + 418) == 2 )
    v2 = *(_QWORD *)(a1 + 408);
  else
    v2 = 0LL;
  if ( v2 )
    v1 -= *(_QWORD *)(v2 + 72);
  return v1;
}
