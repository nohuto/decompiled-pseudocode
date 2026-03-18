/*
 * XREFs of RtlpHpEnvGetHeapManager @ 0x1400201A8
 * Callers:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     RtlpHpGetOwnerHeap @ 0x140003384 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpSegMgrCommit @ 0x140022010 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x14002275C (RtlpHpAllocVA.c)
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 *     RtlpHpFreeVA @ 0x14010DAD4 (RtlpHpFreeVA.c)
 *     RtlpHpSegSegmentAllocate @ 0x14010E6BC (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14010F840 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpQueryVA @ 0x14010FFC8 (RtlpHpQueryVA.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x14011018C (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpHeapCreate @ 0x140159CA4 (RtlpHpHeapCreate.c)
 *     RtlpHpRegisterEnvironment @ 0x14015A4CC (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegSegmentFree @ 0x140166420 (RtlpHpSegSegmentFree.c)
 *     RtlpHpMetadataCommit @ 0x14019AADC (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x14031B054 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x14031B1A4 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpEnvGetHeapManager(_DWORD *a1)
{
  if ( (*a1 & 6) == 4 )
    return *(void **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 672);
  else
    return &ExPoolState;
}
