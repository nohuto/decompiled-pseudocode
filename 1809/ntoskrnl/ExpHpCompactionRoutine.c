/*
 * XREFs of ExpHpCompactionRoutine @ 0x1401B78D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpFreeHeap @ 0x140007BC0 (RtlpHpFreeHeap.c)
 *     ExGetHeapFromVA @ 0x14000E644 (ExGetHeapFromVA.c)
 *     RtlpHpHeapCompact @ 0x1401B63AC (RtlpHpHeapCompact.c)
 *     ExpHpCompactSessionPools @ 0x1401B7788 (ExpHpCompactSessionPools.c)
 *     RtlpInterlockedFlushSList @ 0x1401C55B0 (RtlpInterlockedFlushSList.c)
 */

unsigned __int64 __fastcall ExpHpCompactionRoutine(int a1)
{
  unsigned int v1; // r15d
  int v2; // r13d
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r14
  _QWORD *v9; // r12
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // rdi
  __int128 *HeapFromVA; // rax
  unsigned __int64 v14; // rax
  PSLIST_ENTRY v15; // rax
  _QWORD *p_Next; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned __int64 result; // rax
  __int64 v20; // rbx
  __int64 v21; // r10
  __int64 v22; // r8
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
  if ( dword_1404444C8 )
  {
    v26 = v4;
    do
    {
      v7 = v4;
      if ( v4 <= v6 )
      {
        do
        {
          v8 = *((_QWORD *)&unk_140444500 + 1048 * v1 + v7);
          v9 = *(_QWORD **)(v8 + 40);
          if ( v9 )
          {
            v10 = 0LL;
            v11 = ~*v9;
            while ( v11 )
            {
              _BitScanForward64(&v14, v11);
              v11 ^= 1LL << v14;
              v15 = RtlpInterlockedFlushSList((PSLIST_HEADER)&v9[8 * (unsigned int)v14 + 8]);
              if ( v10 )
              {
                while ( 1 )
                {
                  p_Next = &v15->Next;
                  if ( !v15 )
                    break;
                  v15 = v15->Next;
                  *p_Next = v10;
                  v10 = p_Next;
                }
              }
              else
              {
                v10 = &v15->Next;
              }
            }
            while ( 1 )
            {
              v12 = (ULONG_PTR)v10;
              if ( !v10 )
                break;
              v10 = (_QWORD *)*v10;
              HeapFromVA = (__int128 *)ExGetHeapFromVA(v12);
              RtlpHpFreeHeap(HeapFromVA, v12, 0);
            }
            v6 = v5;
          }
          v17 = *(__int16 *)(v8 + 278);
          v18 = *(_QWORD *)(v17 + v8 + 264) >> *(_BYTE *)(v8 + 267);
          if ( v18 <= 8 )
            v18 = 8LL;
          if ( *(_QWORD *)(v17 + v8 + 272) + *(_QWORD *)(v17 + v8 + 280) > v18 )
            RtlpHpHeapCompact(v8);
          ++v7;
        }
        while ( v7 <= v6 );
        v4 = v26;
      }
      ++v1;
    }
    while ( v1 < dword_1404444C8 );
    v2 = a1;
    LODWORD(v4) = v25;
  }
  result = 2LL;
  v20 = (int)v4;
  if ( (int)v5 >= 2 )
    LODWORD(v5) = 2;
  while ( v20 <= (int)v5 )
  {
    v21 = qword_1404C7500[v20];
    v22 = *(__int16 *)(v21 + 278);
    result = *(_QWORD *)(v22 + v21 + 264) >> *(_BYTE *)(v21 + 267);
    if ( result <= 8 )
      result = 8LL;
    if ( *(_QWORD *)(v22 + v21 + 272) + *(_QWORD *)(v22 + v21 + 280) > result )
      result = RtlpHpHeapCompact(qword_1404C7500[v20]);
    ++v20;
  }
  if ( !v2 )
    result = ExpHpCompactSessionPools();
  if ( v2 == 1 )
    ExpHpGCScheduledNonPaged = 0;
  else
    ExpHpGCScheduledPaged = 0;
  return result;
}
