/*
 * XREFs of RtlpDynamicLookasideRebalance @ 0x1401B7D4C
 * Callers:
 *     ExHeapLookasideRebalance @ 0x1401B760C (ExHeapLookasideRebalance.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     RtlpLookasideAdjustDepth @ 0x1401B7E78 (RtlpLookasideAdjustDepth.c)
 */

__int64 __fastcall RtlpDynamicLookasideRebalance(__int64 *a1)
{
  size_t v1; // r10
  unsigned int v2; // edi
  __int64 v4; // rbp
  int *v5; // rsi
  _DWORD *v6; // r11
  unsigned __int8 v7; // cf
  int v8; // eax
  unsigned int v9; // r9d
  unsigned int v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  __int64 result; // rax
  __int64 v14; // rdi
  unsigned int *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // esi
  _BYTE Base[4]; // [rsp+20h] [rbp-218h] BYREF
  char v19; // [rsp+24h] [rbp-214h] BYREF

  v1 = *((unsigned int *)a1 + 2);
  v2 = 0;
  if ( (_DWORD)v1 )
  {
    v4 = *a1;
    v5 = (int *)&v19;
    v6 = (_DWORD *)a1 + 21;
    do
    {
      v7 = _bittest64(&v4, v2);
      *(v5 - 1) = v2;
      v8 = v6[2];
      v9 = -1;
      v10 = *v6 + v7 - v6[4];
      v6 += 16;
      if ( v10 >= v7 )
        v9 = v10;
      v11 = v9 + v8 - *(v6 - 10);
      v12 = -1;
      if ( v11 >= v9 )
        v12 = v11;
      ++v2;
      *v5 = v12;
      v5 += 2;
    }
    while ( v2 < (unsigned int)v1 );
  }
  qsort(Base, v1, 8uLL, (int (__cdecl *)(const void *, const void *))RtlpDynamicLookasideBucketCompare);
  result = *((unsigned int *)a1 + 3);
  v14 = 0LL;
  if ( (_DWORD)result )
  {
    v15 = (unsigned int *)Base;
    v16 = (unsigned int)result;
    do
    {
      if ( v15[1] >= 0x19 )
      {
        result = *v15;
        v14 |= 1LL << result;
      }
      v15 += 2;
      --v16;
    }
    while ( v16 );
  }
  v17 = 0;
  for ( *a1 = v14; v17 < *((_DWORD *)a1 + 2); ++v17 )
    result = RtlpLookasideAdjustDepth(&a1[8 * v17 + 8], !_bittest64(&v14, v17));
  return result;
}
