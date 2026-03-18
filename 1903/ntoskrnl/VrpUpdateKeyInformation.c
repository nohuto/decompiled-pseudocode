/*
 * XREFs of VrpUpdateKeyInformation @ 0x1408468CC
 * Callers:
 *     VrpPostEnumerateKey @ 0x140844004 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140844BE0 (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 */

__int64 __fastcall VrpUpdateKeyInformation(
        int a1,
        int *a2,
        unsigned int a3,
        unsigned int *a4,
        __m128i *a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  char *v8; // r12
  unsigned int *v9; // r14
  unsigned int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  unsigned __int64 v14; // rcx
  _WORD *v15; // r8
  __m128i *v16; // rsi
  unsigned int v17; // r8d
  __int64 v18; // r11
  int *v19; // rcx
  __int64 v20; // rax
  __int16 v21; // si
  __m128i v22; // xmm0
  unsigned __int64 v23; // rax
  _WORD *v24; // r15
  int *v25; // r15
  unsigned int v26; // eax
  __int64 v27; // r12
  int v28; // eax
  int *v30; // [rsp+20h] [rbp-48h]
  __m128i v31; // [rsp+28h] [rbp-40h] BYREF

  v6 = 0;
  v31 = 0uLL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( !a1 )
  {
    v18 = 4LL;
    v19 = 0LL;
    v17 = 16;
    v20 = 3LL;
    goto LABEL_19;
  }
  v11 = a1 - 1;
  if ( !v11 )
  {
    v20 = 5LL;
    v9 = (unsigned int *)(a2 + 3);
    v19 = a2 + 4;
    v17 = 24;
    v18 = 6LL;
LABEL_19:
    v21 = 0;
    v30 = &a2[v20];
    v31 = *a5;
    v22 = v31;
    v31.m128i_i16[0] = 0;
    v23 = (unsigned __int64)(unsigned __int16)_mm_cvtsi128_si32(v22) >> 1;
    if ( v23 )
    {
      v24 = (_WORD *)(v22.m128i_i64[1] - 2 + 2 * v23);
      do
      {
        if ( *v24 == 92 )
          break;
        v21 += 2;
        --v24;
        --v23;
      }
      while ( v23 );
      v31.m128i_i16[0] = v21;
    }
    v31.m128i_i16[1] = v21;
    v16 = &v31;
    v31.m128i_i64[1] = v22.m128i_i64[1] + 2 * v23;
LABEL_25:
    v25 = &a2[v18];
    if ( v9 )
    {
      if ( !a2 )
      {
        *a4 += v16->m128i_u16[0];
        v26 = *a4;
LABEL_33:
        if ( a3 < v17 )
          return (unsigned int)-1073741789;
        if ( a3 >= v26 )
        {
          if ( v9 && *v19 )
          {
            memmove((char *)a2 + v10, v8, (unsigned int)*v19);
            *v9 = v10;
          }
          memmove(v25, (const void *)v16->m128i_i64[1], v16->m128i_u16[0]);
          *v30 = v16->m128i_u16[0];
        }
        else
        {
          return (unsigned int)-2147483643;
        }
        return v6;
      }
      v27 = *v9;
      *a4 = 24;
      v8 = (char *)a2 + v27;
      v10 = v16->m128i_u16[0] + 24;
      *a4 = v10;
      v28 = *v19;
      if ( *v19 )
      {
        v10 = (v10 + 7) & 0xFFFFFFF8;
        *a4 = v10;
        v28 = *v19;
      }
      v26 = v10 + v28;
    }
    else
    {
      v26 = v18 * 4 + v16->m128i_u16[0];
    }
    *a4 = v26;
    goto LABEL_33;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    v16 = a5;
    v17 = 4;
    v18 = 1LL;
    v30 = a2;
    v19 = 0LL;
    goto LABEL_25;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    if ( v13 != 4 )
      return (unsigned int)-1073741811;
    if ( a3 >= 4 )
    {
      *a2 = (a6 >> 1) & 1;
      return v6;
    }
    return (unsigned int)-1073741789;
  }
  v14 = (unsigned __int64)a5->m128i_u16[0] >> 1;
  if ( a3 < 0x28 )
    return (unsigned int)-1073741789;
  if ( v14 )
  {
    v15 = (_WORD *)(a5->m128i_i64[1] - 2 + 2 * v14);
    do
    {
      if ( *v15 == 92 )
        break;
      --v15;
      --v14;
    }
    while ( v14 );
  }
  a2[8] = a5->m128i_u16[0] - 2 * v14;
  return v6;
}
