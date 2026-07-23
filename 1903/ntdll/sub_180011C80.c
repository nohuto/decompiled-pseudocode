/*
 * XREFs of sub_180011C80 @ 0x180011C80
 * Callers:
 *     sub_180011A90 @ 0x180011A90 (sub_180011A90.c)
 * Callees:
 *     sub_180011F80 @ 0x180011F80 (sub_180011F80.c)
 *     sub_180012128 @ 0x180012128 (sub_180012128.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_180011C80(
        _BYTE *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        __int64 a9,
        int a10,
        unsigned int *a11,
        __int64 a12,
        unsigned int *a13,
        _BYTE *a14)
{
  char v14; // r9
  unsigned __int64 v15; // rdx
  unsigned int v16; // r14d
  char v17; // r10
  char v18; // si
  unsigned int v19; // r12d
  unsigned int v20; // r13d
  char v22; // al
  __int64 v23; // rdi
  unsigned int v24; // ecx
  unsigned __int64 v25; // rbx
  char v26; // al
  unsigned int v28; // eax
  char v29; // al
  __int16 v30; // [rsp+88h] [rbp-9h] BYREF
  bool v31; // [rsp+8Ah] [rbp-7h]
  unsigned int v32; // [rsp+8Ch] [rbp-5h] BYREF
  unsigned __int64 v33; // [rsp+90h] [rbp-1h]

  v14 = a2;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v32 = 0;
  v18 = 0;
  v19 = 0;
  v30 = 0;
  v20 = 0;
  *a14 = 0;
  v31 = v14 && (v22 = Src[1], (v22 & 4) == 0) && ((v22 & 1) != 0 || (v22 & 2) != 0);
  v23 = a12;
  v24 = 0;
  v25 = a12 + 8;
  if ( *(_WORD *)(a12 + 4) )
  {
    while ( v25 < a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    {
      ++v24;
      v25 += *(unsigned __int16 *)(v25 + 2);
      if ( v24 >= *(unsigned __int16 *)(a12 + 4) )
      {
        v14 = a2;
        goto LABEL_11;
      }
    }
    return 3221225597LL;
  }
LABEL_11:
  if ( v25 > a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    return 3221225597LL;
  a12 = v25;
  if ( !v25 )
    return 3221225597LL;
  v26 = Src[1];
  if ( v14 )
  {
    if ( (v26 & 2) != 0 )
    {
LABEL_15:
      v33 = v25;
      if ( !(unsigned __int8)sub_180012128(
                               Src,
                               a5,
                               a6,
                               a7,
                               GenericMapping,
                               a9,
                               a10,
                               (__int64)&a12,
                               (__int64)&v32,
                               v23,
                               (__int64)a14,
                               (__int64)&v30 + 1,
                               (__int64)&v30) )
        return 3221225597LL;
      v18 = v30;
      v16 = v32;
      if ( !(_BYTE)v30 && v32 && (unsigned __int8)sub_180011F80(v23, v25) )
      {
        v20 = v16;
        --*(_WORD *)(v23 + 4);
        v16 = 0;
      }
      else
      {
        v25 = a12;
      }
      v17 = HIBYTE(v30);
      v19 = v16;
      v15 = v33;
    }
  }
  else if ( (v26 & 1) != 0 )
  {
    goto LABEL_15;
  }
  if ( !v31 )
    goto LABEL_22;
  if ( v16 && !v17 )
  {
    if ( !v18 )
    {
      v29 = *(_BYTE *)(v15 + 1) | Src[1] & 3;
      *(_BYTE *)(v15 + 1) = v29;
      if ( a3 )
        *(_BYTE *)(v15 + 1) = v29 | 0x10;
    }
    goto LABEL_22;
  }
  if ( *Src <= 8u && !*((_DWORD *)Src + 1) )
  {
LABEL_22:
    *a11 = v19;
    *a13 = v20;
    return v18 != 0 ? 0xC0000023 : 0;
  }
  v19 += *((unsigned __int16 *)Src + 1);
  if ( v19 <= 0xFFFF )
  {
    if ( *((unsigned __int16 *)Src + 1) > (__int64)(v23 + *(unsigned __int16 *)(v23 + 2) - v25) )
    {
      v18 = 1;
    }
    else if ( !v18 )
    {
      memmove((void *)v25, Src, *((unsigned __int16 *)Src + 1));
      *(_BYTE *)(v25 + 1) |= 8u;
      ++*(_WORD *)(v23 + 4);
      if ( a3 )
      {
        *(_BYTE *)(v25 + 1) |= 0x10u;
        if ( (unsigned __int8)sub_180011F80(v23, v25) )
        {
          --*(_WORD *)(v23 + 4);
          v28 = *((unsigned __int16 *)Src + 1);
          v19 -= v28;
          if ( v20 > v28 )
            v28 = v20;
          v20 = v28;
        }
      }
    }
    goto LABEL_22;
  }
  return 3221225597LL;
}
