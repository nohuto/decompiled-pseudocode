/*
 * XREFs of RtlpHpHeapCheckCommitLimit @ 0x180060BEC
 * Callers:
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x18001CBEC (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18001CED8 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180060934 (RtlpCommitBlock.c)
 *     RtlpHpSegMgrCommit @ 0x180060A68 (RtlpHpSegMgrCommit.c)
 *     RtlpInitializeHeapSegment @ 0x1800617A8 (RtlpInitializeHeapSegment.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x180066980 (RtlpHpSegHeapCheckCommitLimit.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpHeapCheckCommitLimit(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rcx
  __int64 *v8; // rax
  __int64 v9; // r9

  v4 = 0;
  if ( !dword_18015F3E8 && ((v6 = *a4) != 0 || (v6 = qword_1801634B8) != 0) && a1 + a2 > v6 )
  {
    v8 = &qword_1801634B8;
    if ( *a4 )
      v8 = a4;
    v9 = v8[1];
    if ( v9 )
      RtlpLogHeapFailure(21, a3, 0, v9, a1, a2);
  }
  else
  {
    return 1;
  }
  return v4;
}
