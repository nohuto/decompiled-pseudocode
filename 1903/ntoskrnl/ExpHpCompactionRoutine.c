/*
 * XREFs of ExpHpCompactionRoutine @ 0x140002FF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpFreeHeap @ 0x140003214 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x14000331C (ExGetHeapFromVA.c)
 *     ExpHpCompactSessionPools @ 0x14008B714 (ExpHpCompactSessionPools.c)
 *     RtlpHpHeapCompact @ 0x14010AF94 (RtlpHpHeapCompact.c)
 *     RtlpInterlockedFlushSList @ 0x1401CBA70 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall ExpHpCompactionRoutine(int a1)
{
  unsigned int v1; // r15d
  int v2; // r13d
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rsi
  _QWORD *v9; // r12
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  _QWORD *p_Next; // rcx
  unsigned __int64 v19; // rax
  PSLIST_ENTRY v20; // rax
  ULONG_PTR v21; // rdi
  __int64 HeapFromVA; // rax
  _OWORD v23[5]; // [rsp+30h] [rbp-58h]
  int v25; // [rsp+98h] [rbp+10h]
  __int64 v26; // [rsp+A8h] [rbp+20h]

  v1 = 0;
  v2 = a1;
  v3 = a1;
  v23[0] = _mm_load_si128((const __m128i *)&_xmm);
  v4 = *((int *)v23 + 2 * a1);
  v5 = *((int *)v23 + 2 * v3 + 1);
  v25 = v4;
  v6 = v5;
  if ( dword_14046FA10 )
  {
    v26 = v4;
    do
    {
      v7 = v4;
      if ( v4 <= v6 )
      {
        do
        {
          v8 = *((_QWORD *)&unk_14046FA40 + 1048 * v1 + v7);
          v9 = *(_QWORD **)(v8 + 40);
          if ( v9 )
          {
            v10 = 0LL;
            v11 = ~*v9;
            while ( v11 )
            {
              _BitScanForward64(&v19, v11);
              v11 ^= 1LL << v19;
              v20 = RtlpInterlockedFlushSList((PSLIST_HEADER)&v9[8 * (unsigned int)v19 + 8]);
              if ( v10 )
              {
                while ( 1 )
                {
                  p_Next = &v20->Next;
                  if ( !v20 )
                    break;
                  v20 = v20->Next;
                  *p_Next = v10;
                  v10 = p_Next;
                }
              }
              else
              {
                v10 = &v20->Next;
              }
            }
            while ( 1 )
            {
              v21 = (ULONG_PTR)v10;
              if ( !v10 )
                break;
              v10 = (_QWORD *)*v10;
              HeapFromVA = ExGetHeapFromVA(v21);
              RtlpHpFreeHeap(HeapFromVA, v21, 0LL);
            }
            v6 = v5;
          }
          v12 = *(__int16 *)(v8 + 278);
          v13 = *(_QWORD *)(v12 + v8 + 264) >> *(_BYTE *)(v8 + 267);
          if ( v13 <= 8 )
            v13 = 8LL;
          if ( *(_QWORD *)(v12 + v8 + 272) + *(_QWORD *)(v12 + v8 + 280) > v13 )
            RtlpHpHeapCompact(v8);
          ++v7;
        }
        while ( v7 <= v6 );
        v4 = v26;
      }
      ++v1;
    }
    while ( v1 < dword_14046FA10 );
    v2 = a1;
    LODWORD(v4) = v25;
  }
  result = 2LL;
  v15 = (int)v4;
  if ( (int)v5 >= 2 )
    LODWORD(v5) = 2;
  while ( v15 <= (int)v5 )
  {
    v16 = qword_1404F2A40[v15];
    result = *(__int16 *)(v16 + 278);
    v17 = *(_QWORD *)(result + v16 + 264) >> *(_BYTE *)(v16 + 267);
    if ( v17 <= 8 )
      v17 = 8LL;
    if ( *(_QWORD *)(result + v16 + 272) + *(_QWORD *)(result + v16 + 280) > v17 )
      result = RtlpHpHeapCompact(qword_1404F2A40[v15]);
    ++v15;
  }
  if ( !v2 )
    result = ExpHpCompactSessionPools();
  if ( v2 == 1 )
    ExpHpGCScheduledNonPaged = 0;
  else
    ExpHpGCScheduledPaged = 0;
  return result;
}
