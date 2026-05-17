/*
 * XREFs of sub_18007BDE0 @ 0x18007BDE0
 * Callers:
 *     <none>
 * Callees:
 *     TpReleaseTimer @ 0x180031810 (TpReleaseTimer.c)
 *     TpAllocTimer @ 0x180031BA0 (TpAllocTimer.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18007BEB4 @ 0x18007BEB4 (sub_18007BEB4.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 sub_18007BDE0()
{
  __int64 Heap; // rax
  __int64 v1; // rbx

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 96LL);
  v1 = Heap;
  if ( Heap )
  {
    memset((void *)(Heap + 4), 0, 0x5CuLL);
    *(_DWORD *)v1 = 6293777;
    if ( (int)TpAllocTimer((struct _PEB_LDR_DATA *)(v1 + 80), (__int64)sub_18008BDC0, 0LL, 0LL) >= 0 )
    {
      *(_QWORD *)(v1 + 88) = 0LL;
      *(_QWORD *)(v1 + 24) = v1 + 16;
      *(_QWORD *)(v1 + 16) = v1 + 16;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)(v1 + 40) = v1 + 32;
      *(_QWORD *)(v1 + 32) = v1 + 32;
      *(_QWORD *)(v1 + 48) = 0LL;
      *(_DWORD *)(v1 + 60) = 500;
      *(_DWORD *)(v1 + 64) = 1000;
      *(_DWORD *)(v1 + 68) = 3600000;
      *(_DWORD *)(v1 + 72) = 10;
      *(_DWORD *)(v1 + 56) = 1;
      if ( (int)sub_18007BEB4() >= 0 )
      {
        qword_180166088 = v1;
        return 1LL;
      }
      TpReleaseTimer(*(_QWORD *)(v1 + 80));
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  }
  return 0LL;
}
