/*
 * XREFs of RtlHeapTrkInitialize @ 0x1800F9AC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlSetHeapInformation @ 0x18007E6A0 (RtlSetHeapInformation.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A0800 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0840 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x1800A0920 (NtQueryPerformanceCounter.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F25A8 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800F9E60 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800FA368 (RtlpHeapTrkGenerateHashRandoms.c)
 */

NTSTATUS __fastcall RtlHeapTrkInitialize(void *a1)
{
  NTSTATUS result; // eax
  PVOID Heap; // rax
  char *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r10
  __int64 v7; // r9
  char *v8; // r8
  char *v9; // rcx
  _QWORD *v10; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-9h] BYREF
  _QWORD v12[11]; // [rsp+58h] [rbp-1h] BYREF
  int HeapInformation; // [rsp+C0h] [rbp+67h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+6Fh] BYREF
  ULONG_PTR ViewSize; // [rsp+D0h] [rbp+77h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+D8h] [rbp+7Fh] BYREF

  ViewSize = 0x10000LL;
  BaseAddress = 0LL;
  SectionOffset.QuadPart = 0LL;
  if ( SectionHandle )
    return -1073741823;
  if ( !a1
    || ZwMapViewOfSection(
         a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewShare,
         0,
         4u) < 0 )
  {
    return -1073741811;
  }
  if ( *(_QWORD *)BaseAddress < 0x400uLL )
    return -1073741789;
  if ( *((_DWORD *)BaseAddress + 13) > 0x40u
    || *((_DWORD *)BaseAddress + 14) > 2u
    || !*((_QWORD *)BaseAddress + 1)
    || *((_QWORD *)BaseAddress + 1) == -1LL
    || !*((_QWORD *)BaseAddress + 2)
    || *((_QWORD *)BaseAddress + 2) == -1LL
    || !*((_QWORD *)BaseAddress + 3)
    || *((_QWORD *)BaseAddress + 3) == -1LL )
  {
    return -1073741811;
  }
  result = NtQueryPerformanceCounter(&PerformanceCounter, &PerformanceFrequency);
  if ( result >= 0 )
  {
    if ( PerformanceFrequency.QuadPart )
    {
      dword_180166808 = *((_DWORD *)BaseAddress + 14);
      RtlpHeapTrkGenerateHashRandoms();
      Heap = RtlCreateHeap(
               *((_DWORD *)BaseAddress + 13) == 0 ? 2 : 0,
               0LL,
               (unsigned int)(*((_DWORD *)BaseAddress + 13) << 20),
               0LL,
               0LL,
               0LL);
      HeapHandle = Heap;
      if ( Heap )
      {
        HeapInformation = 2;
        RtlSetHeapInformation(Heap, HeapCompatibilityInformation, &HeapInformation, 4uLL);
        dword_1801668A8 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180166508, &qword_1801668C8, 32LL) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_180166898, &qword_180166890, 8LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801668B0, &qword_180166888, 8LL) )
            {
              qword_1801667F0 = (__int64)RtlAllocateHeap(HeapHandle, 0, 0x1EEF0uLL);
              if ( qword_1801667F0 )
              {
                v4 = (char *)RtlAllocateHeap(HeapHandle, 0, 0x1EEF0uLL);
                qword_180166800 = (__int64)v4;
                if ( v4 )
                {
                  v5 = (_QWORD *)qword_1801667F0;
                  v6 = 7919LL;
                  SectionHandle = a1;
                  v7 = qword_1801667F0 - (_QWORD)v4;
                  dword_1801667F8 = 0;
                  v8 = &v4[-qword_1801667F0];
                  do
                  {
                    v9 = (char *)v5 + (_QWORD)v8;
                    *v5 = v5;
                    *(_QWORD *)&v9[v7 + 8] = v5;
                    v10 = (_QWORD *)((char *)v5 + (_QWORD)v8);
                    v5 += 2;
                    *((_QWORD *)v9 + 1) = v10;
                    *v10 = v10;
                    --v6;
                  }
                  while ( v6 );
                  memset(v12, 0, 0x30uLL);
                  LOWORD(v12[1]) = 0;
                  v12[0] = RtlpHeapTrkInterceptor;
                  v12[5] = RtlpHeapTrkLeakCallback;
                  if ( (int)RtlSetHeapDebuggingInformation(0LL, (__int64)v12) >= 0 )
                  {
                    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                    return 0;
                  }
                }
              }
            }
          }
        }
        RtlDestroyHeap(HeapHandle);
        HeapHandle = 0LL;
        qword_1801668C8 = 0LL;
        qword_1801667F0 = 0LL;
        qword_180166898 = 0LL;
        qword_180166890 = 0LL;
        qword_180166800 = 0LL;
        qword_1801668B0 = 0LL;
        qword_180166888 = 0LL;
        if ( BaseAddress )
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        if ( SectionHandle )
        {
          NtClose(SectionHandle);
          SectionHandle = 0LL;
        }
      }
    }
    return -1073741823;
  }
  return result;
}
