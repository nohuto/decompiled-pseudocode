/*
 * XREFs of RtlCSparseBitmapFindBitSetCapped @ 0x14000CBF0
 * Callers:
 *     RtlSparseArrayElementAllocated @ 0x14000CB98 (RtlSparseArrayElementAllocated.c)
 *     RtlSparseArrayElementFindCapped @ 0x1402FE1D0 (RtlSparseArrayElementFindCapped.c)
 * Callees:
 *     RtlLengthCurrentClearRunForwardEx @ 0x1402EF1B4 (RtlLengthCurrentClearRunForwardEx.c)
 */

__int64 __fastcall RtlCSparseBitmapFindBitSetCapped(__int64 a1, signed __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  const signed __int64 *v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // r12
  const signed __int64 *v14; // r10
  __int64 v15; // rcx
  unsigned int v16; // r11d
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  bool v19; // zf
  __int64 v20; // rcx
  char v21; // dl
  unsigned __int64 v22; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // [rsp+24h] [rbp-74h]
  _QWORD v28[10]; // [rsp+48h] [rbp-50h] BYREF

  while ( a3 )
  {
    v6 = a2 % 0x8000;
    v7 = a2 / 0x8000;
    v8 = a3;
    v9 = a2 % 0x8000 + a3;
    if ( a3 < 0 )
    {
      v8 = ~v6;
      if ( v9 >= 0 )
        v8 = a3;
    }
    else if ( v9 > 0x8000 )
    {
      v8 = 0x8000 - v6;
    }
    if ( _bittest64((const signed __int64 *)a1, (unsigned __int64)a2 >> 30) )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), (unsigned __int64)a2 >> 15) )
      {
        v10 = 1LL;
        if ( v8 > 1 )
          v10 = v8;
        v11 = (const signed __int64 *)(*(_QWORD *)(a1 + 16) + (v7 << 12));
        v28[0] = v6 + v10;
        v28[1] = v11;
        if ( _bittest64(v11, v6) )
        {
          v12 = 0LL;
        }
        else if ( v8 <= 0 )
        {
          v13 = -v8;
          v14 = (const signed __int64 *)((char *)v11 + 4 * (v6 >> 5));
          v15 = (a2 % 0x8000) & 0x1F;
          v16 = *(_DWORD *)v14 & dword_140361C10[v15];
          v17 = (unsigned int)(31 - v15);
          v27 = 31 - v15;
          v18 = 0LL;
          while ( !v16 )
          {
            v18 += 32LL;
            if ( v18 >= v13 )
            {
              if ( v18 - v17 >= v13 )
                goto LABEL_22;
              v17 = v27;
            }
            if ( v14 == v11 )
              goto LABEL_22;
            v14 = (const signed __int64 *)((char *)v14 - 4);
            v16 = *(_DWORD *)v14;
          }
          v19 = !_BitScanReverse64((unsigned __int64 *)&v20, v16);
          v21 = -1;
          if ( !v19 )
            v21 = v20;
          v18 += (unsigned int)(31 - v21);
LABEL_22:
          v22 = v18 - v27;
          if ( v22 > v13 )
            v22 = -v8;
          v12 = -(__int64)v22;
        }
        else
        {
          v12 = RtlLengthCurrentClearRunForwardEx(v28, v6, 0x40000000LL);
        }
        if ( (__int64)abs64(v12) < (__int64)abs64(v8) )
          return v6 + v12 + (v7 << 15);
      }
    }
    else
    {
      v25 = a2 % 0x40000000;
      v8 = a3;
      v26 = a2 % 0x40000000 + a3;
      if ( a3 >= 0 )
      {
        if ( v26 > 0x40000000 )
          v8 = 0x40000000 - v25;
      }
      else
      {
        v8 = ~v25;
        if ( v26 >= 0 )
          v8 = a3;
      }
    }
    a2 += v8;
    a3 -= v8;
  }
  return -1LL;
}
