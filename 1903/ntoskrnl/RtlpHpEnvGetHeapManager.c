/*
 * XREFs of RtlpHpEnvGetHeapManager @ 0x14001FDB8
 * Callers:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     RtlpHpGetOwnerHeap @ 0x140003384 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpSegMgrCommit @ 0x140021C20 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x14002236C (RtlpHpAllocVA.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     RtlpHpFreeVA @ 0x14010E3E4 (RtlpHpFreeVA.c)
 *     RtlpHpSegSegmentAllocate @ 0x14010EFCC (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140110150 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpQueryVA @ 0x1401108D8 (RtlpHpQueryVA.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140110A9C (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpHeapCreate @ 0x140159604 (RtlpHpHeapCreate.c)
 *     RtlpHpRegisterEnvironment @ 0x140159E2C (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegSegmentFree @ 0x1401669D0 (RtlpHpSegSegmentFree.c)
 *     RtlpHpMetadataCommit @ 0x14019A47C (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x14031B604 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpSizeHeapInternal @ 0x14031B754 (RtlpHpSizeHeapInternal.c)
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
