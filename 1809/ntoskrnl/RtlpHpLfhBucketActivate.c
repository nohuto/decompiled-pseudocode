/*
 * XREFs of RtlpHpLfhBucketActivate @ 0x140008E10
 * Callers:
 *     RtlpHpLfhBucketUpdateStats @ 0x140008D00 (RtlpHpLfhBucketUpdateStats.c)
 * Callees:
 *     RtlpHpLfhBucketInitialize @ 0x140008FE0 (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpLfhOwnerInitialize @ 0x140009734 (RtlpHpLfhOwnerInitialize.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

signed __int64 __fastcall RtlpHpLfhBucketActivate(__int64 a1, unsigned int a2)
{
  __int64 v4; // r14
  signed __int64 result; // rax
  __int64 v6; // rtt
  __int64 v7; // r10
  unsigned int v8; // r13d
  unsigned __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  size_t v13; // r15
  unsigned int v14; // ebp
  signed __int64 v15; // rdi
  unsigned __int64 v16; // r12
  __int64 v17; // r15
  void *v18; // rbx
  __int64 v19; // [rsp+20h] [rbp-48h]
  signed __int64 v20; // [rsp+70h] [rbp+8h]
  unsigned __int64 v21; // [rsp+70h] [rbp+8h]
  unsigned __int64 v22; // [rsp+80h] [rbp+18h]
  unsigned __int64 v23; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v19 = a2;
  result = *(_QWORD *)(a1 + 8LL * a2 + 128);
  if ( (result & 3) == 1 )
  {
    v20 = *(_QWORD *)(a1 + 8LL * a2 + 128);
    LOWORD(v20) = result | 2;
    v6 = *(_QWORD *)(a1 + 8LL * a2 + 128);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * a2 + 128), v20, result);
    if ( v6 == result )
    {
      v7 = *(unsigned __int8 *)(a1 + 56);
      v8 = 1;
      v9 = (unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6;
      v23 = v9 + 64;
      v21 = v9 + 128;
      v10 = v9 + 135 + v7 - (((_BYTE)v7 - 1) & 7);
      v11 = v10 + 8 * v7;
      v12 = v9 - (((_BYTE)v11 - 1) & 0x3F);
      v22 = v12 + v11 + 63;
      if ( (RtlpHpLfhPerfFlags & 0x200) != 0 )
        v8 = v7;
      v13 = v12 + v11 + 63 + (v9 + 64) * v8;
      result = ((__int64 (__fastcall *)(_QWORD, size_t))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
                 *(_QWORD *)a1,
                 v13);
      v14 = 0;
      v15 = result;
      if ( result )
      {
        memset((void *)result, 0, v13);
        RtlpHpLfhBucketInitialize(v15, a2, a1);
        *(_QWORD *)(v15 + 88) = v15 + v21;
        result = v10 + v15;
        v16 = v15 + v22;
        *(_QWORD *)(v15 + 96) = result;
        if ( v8 )
        {
          v17 = 0LL;
          do
          {
            *(_QWORD *)(*(_QWORD *)(v15 + 96) + 8 * v17) = v16;
            v18 = *(void **)(*(_QWORD *)(v15 + 96) + 8 * v17);
            memset(v18, 0, 0x40uLL);
            RtlpHpLfhOwnerInitialize(v18, *(unsigned __int8 *)(v15 + 1), v14, a1);
            ++*(_BYTE *)(v15 + 2);
            v16 += v23;
            result = *(_QWORD *)(v15 + 88);
            *(_BYTE *)(v17 + result) = v14++;
            ++v17;
          }
          while ( v14 < v8 );
          v4 = v19;
        }
        *(_QWORD *)(a1 + 8 * v4 + 128) = v15;
      }
    }
  }
  return result;
}
