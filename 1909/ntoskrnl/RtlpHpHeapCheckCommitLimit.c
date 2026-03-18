/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x14002232C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140022010 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x14010FF98 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpAllocateHeap @ 0x14030E330 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x14030FF98 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14031021C (RtlpFindAndCommitPages.c)
 *     RtlpInitializeHeapSegment @ 0x1403109D0 (RtlpInitializeHeapSegment.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // ebx
  __int64 *v7; // rax
  __int64 v8; // r9

  v4 = *a4;
  v5 = 0;
  if ( (*a4 || (v4 = qword_140436738) != 0) && a1 + a2 > v4 )
  {
    v7 = &qword_140436738;
    if ( *a4 )
      v7 = (__int64 *)a4;
    v8 = v7[1];
    if ( v8 )
      RtlpLogHeapFailure(21, a3, 0, v8, a1, a2);
  }
  else
  {
    return 1;
  }
  return v5;
}
