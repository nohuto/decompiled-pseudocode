/*
 * XREFs of RtlHeapTrkInitialize @ 0x1800F77B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004AA00 (RtlDestroyHeap.c)
 *     RtlSetHeapInformation @ 0x1800796C0 (RtlSetHeapInformation.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D390 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D3D0 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x18009D4B0 (NtQueryPerformanceCounter.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800EF564 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800F7B4C (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800F8054 (RtlpHeapTrkGenerateHashRandoms.c)
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
  _QWORD v14[11]; // [rsp+60h] [rbp-1h] BYREF
  int v15; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v16; // [rsp+D0h] [rbp+6Fh]
  __int64 v17; // [rsp+D8h] [rbp+77h]
  __int64 v18; // [rsp+E0h] [rbp+7Fh] BYREF

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
    if ( qword_180166570 )
    {
      dword_180166898 = *(_DWORD *)(v16 + 56);
      RtlpHeapTrkGenerateHashRandoms((unsigned int)dword_180166898, v3, v4, v5, 0LL, &v18);
      Heap = (_DWORD *)RtlCreateHeap(
                         *(_DWORD *)(v16 + 52) == 0 ? 2 : 0,
                         0LL,
                         (unsigned int)(*(_DWORD *)(v16 + 52) << 20),
                         0LL,
                         0LL,
                         0LL);
      qword_180166A18 = (__int64)Heap;
      if ( Heap )
      {
        v15 = 2;
        RtlSetHeapInformation(Heap, 0, (__int64)&v15, 4uLL);
        dword_180166A08 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180166578, &qword_180166A28, 32LL) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801669F8, &qword_1801669F0, 8LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180166A10, &qword_1801669E8, 8LL) )
            {
              qword_180166880 = RtlAllocateHeap(qword_180166A18, 0, 126704LL);
              if ( qword_180166880 )
              {
                v7 = RtlAllocateHeap(qword_180166A18, 0, 126704LL);
                qword_180166890 = v7;
                if ( v7 )
                {
                  v8 = (_QWORD *)qword_180166880;
                  v9 = 7919LL;
                  Handle = a1;
                  v10 = qword_180166880 - v7;
                  dword_180166888 = 0;
                  v11 = v7 - qword_180166880;
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
        RtlDestroyHeap(qword_180166A18);
        qword_180166A18 = 0LL;
        qword_180166A28 = 0LL;
        qword_180166880 = 0LL;
        qword_1801669F8 = 0LL;
        qword_1801669F0 = 0LL;
        qword_180166890 = 0LL;
        qword_180166A10 = 0LL;
        qword_1801669E8 = 0LL;
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
