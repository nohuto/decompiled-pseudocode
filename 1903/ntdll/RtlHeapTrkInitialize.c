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

__int64 __fastcall RtlHeapTrkInitialize(__int64 a1)
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
  if ( qword_1801669F0 )
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
  result = ZwQueryPerformanceCounter();
  if ( (int)result >= 0 )
  {
    if ( qword_180166560 )
    {
      dword_180166888 = *(_DWORD *)(v16 + 56);
      sub_1800F7F74((unsigned int)dword_180166888, v3, v4, v5, 0LL, &v18);
      Heap = (_DWORD *)RtlCreateHeap(
                         *(_DWORD *)(v16 + 52) == 0 ? 2 : 0,
                         0LL,
                         (unsigned int)(*(_DWORD *)(v16 + 52) << 20),
                         0LL,
                         0LL,
                         0LL);
      qword_180166A08 = (__int64)Heap;
      if ( Heap )
      {
        v15 = 2;
        RtlSetHeapInformation(Heap, 0, (__int64)&v15, 4uLL);
        dword_1801669F8 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)sub_1800F7A6C(&qword_180166568, &qword_180166A18, 32LL) )
        {
          if ( (unsigned __int8)sub_1800F7A6C(&qword_1801669E8, &qword_1801669E0, 8LL) )
          {
            if ( (unsigned __int8)sub_1800F7A6C(&qword_180166A00, &qword_1801669D8, 8LL) )
            {
              qword_180166870 = RtlAllocateHeap(qword_180166A08, 0, 126704LL);
              if ( qword_180166870 )
              {
                v7 = RtlAllocateHeap(qword_180166A08, 0, 126704LL);
                qword_180166880 = v7;
                if ( v7 )
                {
                  v8 = (_QWORD *)qword_180166870;
                  v9 = 7919LL;
                  qword_1801669F0 = a1;
                  v10 = qword_180166870 - v7;
                  dword_180166878 = 0;
                  v11 = v7 - qword_180166870;
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
                  v14[0] = sub_1800F8090;
                  v14[5] = sub_1800F8260;
                  if ( (int)sub_1800EF484(0LL, (__int64)v14) >= 0 )
                  {
                    ZwUnmapViewOfSection();
                    return 0LL;
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
        if ( v16 )
          ZwUnmapViewOfSection();
        if ( qword_1801669F0 )
        {
          ZwClose();
          qword_1801669F0 = 0LL;
        }
      }
    }
    return 3221225473LL;
  }
  return result;
}
