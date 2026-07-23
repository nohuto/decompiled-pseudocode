/*
 * XREFs of RtlpCopyBitMapTailToHeadEx @ 0x1402EF874
 * Callers:
 *     RtlCopyBitMapEx @ 0x1401191B0 (RtlCopyBitMapEx.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall RtlpCopyBitMapTailToHeadEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  size_t v7; // r8
  char v8; // cl
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  __int64 *v12; // rbp
  unsigned __int64 *v13; // r14
  __int64 *v14; // r8
  __int64 v15; // rsi
  char v16; // bl
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // r8
  __int64 v22; // rbx
  char v23; // di
  __int64 v24; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = a3 >> 3;
  if ( (a3 & 7) != 0 )
  {
    v8 = a4;
    v9 = a4 >> 6;
    v10 = a3 & 0x3F;
    v11 = v8 & 0x3F;
    v12 = (__int64 *)(*(_QWORD *)(a2 + 8) + 8 * (v9 + (a3 >> 6)));
    result = *(_QWORD *)(a1 + 8);
    v13 = (unsigned __int64 *)v12;
    v14 = (__int64 *)(result + 8 * v9);
    if ( v11 )
    {
      v15 = *v14;
      v16 = 64 - v10;
      if ( v11 > 64 - v10 )
      {
        v12[1] = v12[1] & ~((1LL << ((unsigned __int8)v10 + (unsigned __int8)v11 - 64)) - 1) | ((v15 & (unsigned __int64)(((1LL << ((unsigned __int8)v10 + (unsigned __int8)v11 - 64)) - 1) << v16)) >> v16);
        v20 = (*v14 & ((1LL << v16) - 1)) << v10;
        v19 = (1LL << v10) - 1;
      }
      else
      {
        v17 = (1LL << v11) - 1;
        v18 = v15 & v17;
        v19 = ~(v17 << v10);
        v20 = v18 << v10;
      }
      result = v20 | *v12 & v19;
      *v12 = result;
    }
    v21 = v14 - 1;
    if ( v9 )
    {
      v22 = *v12;
      v23 = 64 - v10;
      do
      {
        *v13-- = ((~((1LL << v23) - 1) & (unsigned __int64)*v21) >> v23) | v22 & ~((1LL << v10) - 1);
        v24 = *v21--;
        result = (((1LL << v23) - 1) & v24) << v10;
        v22 = result | ((1LL << v10) - 1) & *v13;
        *v13 = v22;
        --v9;
      }
      while ( v9 );
    }
  }
  else
  {
    v7 = a4 >> 3;
    if ( (a4 & 7) != 0 )
    {
      result = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v7 + *(_QWORD *)(a2 + 8) + v5) = ((1 << (a4 & 7)) - 1) & *(_BYTE *)(v7 + result) | *(_BYTE *)(v7 + *(_QWORD *)(a2 + 8) + v5) & ~((1 << (a4 & 7)) - 1);
    }
    if ( v7 )
      return (__int64)memmove((void *)(v5 + *(_QWORD *)(a2 + 8)), *(const void **)(a1 + 8), v7);
  }
  return result;
}
