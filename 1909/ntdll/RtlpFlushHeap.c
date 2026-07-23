/*
 * XREFs of RtlpFlushHeap @ 0x18004F10C
 * Callers:
 *     RtlpFlushHeapsCallback @ 0x18004F0F0 (RtlpFlushHeapsCallback.c)
 *     RtlSetHeapInformation @ 0x1800796C0 (RtlSetHeapInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlTryEnterCriticalSection @ 0x180046C20 (RtlTryEnterCriticalSection.c)
 *     RtlpCollectFreeBlocks @ 0x180047ED4 (RtlpCollectFreeBlocks.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004D0C4 (RtlpLowFragHeapFlushCaches.c)
 */

__int64 __fastcall RtlpFlushHeap(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx

  if ( (*(_BYTE *)(a1 + 112) & 1) == 0 && RtlTryEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352)) )
  {
    if ( *(_BYTE *)(a1 + 418) == 2 )
      v5 = *(_QWORD *)(a1 + 408);
    else
      v5 = 0LL;
    if ( v5 )
      RtlpLowFragHeapFlushCaches(v5, v2, v3, v4);
    RtlpCollectFreeBlocks(a1);
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  }
  return 0LL;
}
