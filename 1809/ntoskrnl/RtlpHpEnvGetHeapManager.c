/*
 * XREFs of RtlpHpEnvGetHeapManager @ 0x14000CE30
 * Callers:
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x140009E90 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpQueryVA @ 0x14000A390 (RtlpHpQueryVA.c)
 *     RtlpHpSegSegmentAllocate @ 0x14000A588 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegMgrCommit @ 0x14000C244 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x14000CE68 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x14000D214 (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14000DAB0 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpGetOwnerHeap @ 0x14000E6C0 (RtlpHpGetOwnerHeap.c)
 *     RtlpHpSizeHeapInternal @ 0x1400BEAE0 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpHeapCreate @ 0x140140BE0 (RtlpHpHeapCreate.c)
 *     RtlpHpRegisterEnvironment @ 0x140141460 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegSegmentFree @ 0x1401547C4 (RtlpHpSegSegmentFree.c)
 *     RtlpHpMetadataCommit @ 0x14019224C (RtlpHpMetadataCommit.c)
 *     RtlpHpExtrasSetPresent @ 0x1402FCC7C (RtlpHpExtrasSetPresent.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpEnvGetHeapManager(_DWORD *a1)
{
  if ( (*a1 & 6) == 4 )
    return *(void **)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3424);
  else
    return &ExPoolState;
}
