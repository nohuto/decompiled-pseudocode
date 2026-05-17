/*
 * XREFs of RtlHeapTrkInitialize @ 0x1800F9AC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlSetHeapInformation @ 0x18007E690 (RtlSetHeapInformation.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x1800A0900 (NtQueryPerformanceCounter.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F25A8 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800F9E60 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800FA368 (RtlpHeapTrkGenerateHashRandoms.c)
 */

__int64 __fastcall RtlHeapTrkInitialize(void *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *Heap; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  char *v12; // rcx
  _QWORD *v13; // rax
  _QWORD v14[11]; // [rsp+58h] [rbp-1h] BYREF
  int v15; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v16; // [rsp+C8h] [rbp+6Fh]
  __int64 v17; // [rsp+D0h] [rbp+77h]
  __int64 v18; // [rsp+D8h] [rbp+7Fh] BYREF

  v17 = 0x10000LL;
  v16 = 0LL;
  v18 = 0LL;
  if ( Handle )
    return 3221225473LL;
  if ( !a1 || (int)ZwMapViewOfSection() < 0 )
    return 3221225485LL;
  if ( *(_QWORD *)v16 < 0x400uLL )
    return 3221225507LL;
  if ( *(_DWORD *)(v16 + 52) > 0x40u
    || *(_DWORD *)(v16 + 56) > 2u
    || !*(_QWORD *)(v16 + 8)
    || *(_QWORD *)(v16 + 8) == -1LL
    || !*(_QWORD *)(v16 + 16)
    || *(_QWORD *)(v16 + 16) == -1LL
    || !*(_QWORD *)(v16 + 24)
    || *(_QWORD *)(v16 + 24) == -1LL )
  {
    return 3221225485LL;
  }
  result = NtQueryPerformanceCounter();
  if ( (int)result >= 0 )
  {
    if ( qword_180166500 )
    {
      dword_180166808 = *(_DWORD *)(v16 + 56);
      RtlpHeapTrkGenerateHashRandoms((unsigned int)dword_180166808, v3, v4, v5, 0LL, &v18);
      Heap = (_DWORD *)RtlCreateHeap(
                         *(_DWORD *)(v16 + 52) == 0 ? 2 : 0,
                         0LL,
                         (unsigned __int64 *)(unsigned int)(*(_DWORD *)(v16 + 52) << 20),
                         0LL,
                         0LL,
                         0LL);
      qword_1801668B8 = (__int64)Heap;
      if ( Heap )
      {
        v15 = 2;
        RtlSetHeapInformation(Heap, 0, (__int64)&v15, 4uLL);
        dword_1801668A8 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180166508, &qword_1801668C8, 32LL) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180166898, &qword_180166890, 8LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801668B0, &qword_180166888, 8LL) )
            {
              qword_1801667F0 = RtlAllocateHeap(qword_1801668B8, 0, 126704LL);
              if ( qword_1801667F0 )
              {
                v7 = RtlAllocateHeap(qword_1801668B8, 0, 126704LL);
                qword_180166800 = v7;
                if ( v7 )
                {
                  v8 = (_QWORD *)qword_1801667F0;
                  v9 = 7919LL;
                  Handle = a1;
                  v10 = qword_1801667F0 - v7;
                  dword_1801667F8 = 0;
                  v11 = v7 - qword_1801667F0;
                  do
                  {
                    v12 = (char *)v8 + v11;
                    *v8 = v8;
                    *(_QWORD *)&v12[v10 + 8] = v8;
                    v13 = (_QWORD *)((char *)v8 + v11);
                    v8 += 2;
                    *((_QWORD *)v12 + 1) = v13;
                    *v13 = v13;
                    --v9;
                  }
                  while ( v9 );
                  memset(v14, 0, 0x30uLL);
                  LOWORD(v14[1]) = 0;
                  v14[0] = RtlpHeapTrkInterceptor;
                  v14[5] = RtlpHeapTrkLeakCallback;
                  if ( (int)RtlSetHeapDebuggingInformation(0LL, (__int64)v14) >= 0 )
                  {
                    NtUnmapViewOfSection();
                    return 0LL;
                  }
                }
              }
            }
          }
        }
        RtlDestroyHeap(qword_1801668B8);
        qword_1801668B8 = 0LL;
        qword_1801668C8 = 0LL;
        qword_1801667F0 = 0LL;
        qword_180166898 = 0LL;
        qword_180166890 = 0LL;
        qword_180166800 = 0LL;
        qword_1801668B0 = 0LL;
        qword_180166888 = 0LL;
        if ( v16 )
          NtUnmapViewOfSection();
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0LL;
        }
      }
    }
    return 3221225473LL;
  }
  return result;
}
