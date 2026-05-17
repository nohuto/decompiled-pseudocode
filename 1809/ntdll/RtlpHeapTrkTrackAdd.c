/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x1800FA9D0
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800FA490 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpHeapTrkHash @ 0x1800FA3DC (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkTrackStack @ 0x1800FACD4 (RtlpHeapTrkTrackStack.c)
 */

signed __int64 __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax

  result = RtlAllocateHeap(qword_1801668B8, 0, 40LL);
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
      v11 = v6 & 0xF;
      RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180166898 + 8 * v11), v8, v9, v10);
      v12 = qword_1801667F0 + 16 * v6;
      v13 = *(_QWORD *)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
        __fastfail(3u);
      *v5 = v13;
      v5[1] = v12;
      *(_QWORD *)(v13 + 8) = v5;
      *(_QWORD *)v12 = v5;
      return RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180166898 + 8 * v11));
    }
    else
    {
      return RtlFreeHeap(qword_1801668B8, 0, (unsigned __int64)v5);
    }
  }
  return result;
}
