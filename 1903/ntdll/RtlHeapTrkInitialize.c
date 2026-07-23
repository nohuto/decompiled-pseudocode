/*
 * XREFs of RtlHeapTrkInitialize @ 0x1800F76D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 *     RtlSetHeapInformation @ 0x180079240 (RtlSetHeapInformation.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwQueryPerformanceCounter @ 0x18009CD00 (ZwQueryPerformanceCounter.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800EF484 @ 0x1800EF484 (sub_1800EF484.c)
 *     sub_1800F7A6C @ 0x1800F7A6C (sub_1800F7A6C.c)
 *     sub_1800F7F74 @ 0x1800F7F74 (sub_1800F7F74.c)
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
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v12[11]; // [rsp+60h] [rbp-1h] BYREF
  int HeapInformation; // [rsp+C8h] [rbp+67h] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+6Fh] BYREF
  ULONG_PTR ViewSize; // [rsp+D8h] [rbp+77h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+E0h] [rbp+7Fh] BYREF

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
  result = ZwQueryPerformanceCounter(&PerformanceCounter, &PerformanceFrequency);
  if ( result >= 0 )
  {
    if ( PerformanceFrequency.QuadPart )
    {
      dword_180166888 = *((_DWORD *)BaseAddress + 14);
      sub_1800F7F74();
      Heap = RtlCreateHeap(
               *((_DWORD *)BaseAddress + 13) == 0 ? 2 : 0,
               0LL,
               (unsigned int)(*((_DWORD *)BaseAddress + 13) << 20),
               0LL,
               0LL,
               0LL);
      qword_180166A08 = Heap;
      if ( Heap )
      {
        HeapInformation = 2;
        RtlSetHeapInformation(Heap, HeapCompatibilityInformation, &HeapInformation, 4uLL);
        dword_1801669F8 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)sub_1800F7A6C(&qword_180166568, &qword_180166A18, 32LL) )
        {
          if ( (unsigned __int8)sub_1800F7A6C(&qword_1801669E8, &qword_1801669E0, 8LL) )
          {
            if ( (unsigned __int8)sub_1800F7A6C(&qword_180166A00, &qword_1801669D8, 8LL) )
            {
              qword_180166870 = (__int64)RtlAllocateHeap(qword_180166A08, 0, 0x1EEF0uLL);
              if ( qword_180166870 )
              {
                v4 = (char *)RtlAllocateHeap(qword_180166A08, 0, 0x1EEF0uLL);
                qword_180166880 = (__int64)v4;
                if ( v4 )
                {
                  v5 = (_QWORD *)qword_180166870;
                  v6 = 7919LL;
                  SectionHandle = a1;
                  v7 = qword_180166870 - (_QWORD)v4;
                  dword_180166878 = 0;
                  v8 = &v4[-qword_180166870];
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
                  v12[0] = sub_1800F8090;
                  v12[5] = sub_1800F8260;
                  if ( (int)sub_1800EF484(0LL, (__int64)v12) >= 0 )
                  {
                    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                    return 0;
                  }
                }
              }
            }
          }
        }
        RtlDestroyHeap(qword_180166A08);
        qword_180166A08 = 0LL;
        qword_180166A18 = 0LL;
        qword_180166870 = 0LL;
        qword_1801669E8 = 0LL;
        qword_1801669E0 = 0LL;
        qword_180166880 = 0LL;
        qword_180166A00 = 0LL;
        qword_1801669D8 = 0LL;
        if ( BaseAddress )
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        if ( SectionHandle )
        {
          ZwClose(SectionHandle);
          SectionHandle = 0LL;
        }
      }
    }
    return -1073741823;
  }
  return result;
}
