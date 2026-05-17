/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x1800F86B4
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800F8170 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpHeapTrkHash @ 0x1800F80C8 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkTrackStack @ 0x1800F89B8 (RtlpHeapTrkTrackStack.c)
 */

signed __int64 __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax

  result = RtlAllocateHeap(qword_180166A18, 0, 40LL);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v6 = (unsigned int)RtlpHeapTrkHash(a2);
    v5[2] = a1;
    v5[3] = a2;
    v7 = RtlpHeapTrkTrackStack();
    v5[4] = v7;
    if ( v7 )
    {
      v8 = v6 & 0xF;
      RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_1801669F8 + 8 * v8));
      v9 = qword_180166880 + 16 * v6;
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
        __fastfail(3u);
      *v5 = v10;
      v5[1] = v9;
      *(_QWORD *)(v10 + 8) = v5;
      *(_QWORD *)v9 = v5;
      return RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801669F8 + 8 * v8));
    }
    else
    {
      return RtlFreeHeap(qword_180166A18, 0, (__int64)v5);
    }
  }
  return result;
}
