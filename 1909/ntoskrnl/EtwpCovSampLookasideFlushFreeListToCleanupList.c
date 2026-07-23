/*
 * XREFs of EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1403354E0
 * Callers:
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140334B08 (EtwpCovSampCaptureCleanupLookasides.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x140900EE8 (EtwpCovSampCaptureFreeLookasides.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1401CC5F0 (RtlpInterlockedFlushSList.c)
 *     EtwpCovSampPushListSList @ 0x1403358E0 (EtwpCovSampPushListSList.c)
 */

__int64 __fastcall EtwpCovSampLookasideFlushFreeListToCleanupList(_SLIST_HEADER *a1)
{
  unsigned __int64 Alignment; // rdi
  unsigned int v2; // ebx
  PSLIST_ENTRY v3; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  Alignment = a1[2].Alignment;
  v2 = 0;
  v5 = 0;
  v3 = RtlpInterlockedFlushSList(a1);
  if ( v3 )
  {
    EtwpCovSampPushListSList(Alignment, v3, &v5);
    _InterlockedExchangeAdd((volatile signed __int32 *)(Alignment + 76), v5);
    return v5;
  }
  return v2;
}
