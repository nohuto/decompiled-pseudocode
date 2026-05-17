/*
 * XREFs of RtlGenerate8dot3Name @ 0x1800F86C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     GetNextWchar @ 0x1800F8560 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1800F864C (RtlComputeLfnChecksum.c)
 */

__int64 __fastcall RtlGenerate8dot3Name(unsigned __int16 *a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // si
  char v8; // r12
  unsigned int v9; // ebp
  char v10; // r8
  __int16 NextWchar; // ax
  unsigned int v12; // edi
  bool v13; // zf
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  int v16; // eax
  unsigned __int16 v17; // r11
  unsigned int i; // r8d
  __int16 v19; // dx
  __int64 v20; // rax
  __int16 v21; // dx
  unsigned int v22; // esi
  unsigned int j; // edi
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // dx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // r9d
  unsigned __int16 v29; // ax
  int v30; // r11d
  unsigned __int16 v31; // r9
  __int64 v32; // r8
  _WORD *v33; // r10
  __int16 v34; // ax
  unsigned __int16 v35; // cx
  unsigned int v36; // edi
  char v37; // r15
  __int64 v38; // rax
  char v39; // cl
  __int16 v40; // r8
  __int64 v41; // rbp
  _WORD *v42; // r14
  unsigned __int16 v43; // ax
  unsigned __int16 v44; // cx
  int v45; // eax
  unsigned __int8 v46; // dl
  unsigned int v47; // ecx
  unsigned int k; // r8d
  int v49; // eax
  unsigned int v51; // [rsp+24h] [rbp-64h] BYREF
  __int64 v52; // [rsp+28h] [rbp-60h]
  unsigned int v53[6]; // [rsp+30h] [rbp-58h] BYREF

  v4 = 0;
  v52 = a4;
  if ( !a2 || (v8 = 1, !NlsMbOemCodePageTag) )
    v8 = 0;
  if ( !*(_BYTE *)(a3 + 3) )
  {
    v9 = -1;
    v51 = 0;
    if ( !*a1 || (v10 = 1, **((_WORD **)a1 + 1) != 46) )
      v10 = 0;
    while ( 1 )
    {
      NextWchar = GetNextWchar(a1, &v51, v10, a2);
      if ( !NextWchar )
        break;
      v10 = 0;
      if ( NextWchar == 46 )
        v9 = v51;
    }
    v12 = 0;
    v13 = v9 == *a1 >> 1;
    v51 = 0;
    *(_BYTE *)(a3 + 3) = 0;
    if ( v13 )
      v9 = -1;
    v53[0] = v9;
    while ( 1 )
    {
      v14 = GetNextWchar(a1, &v51, 1, a2);
      v15 = v14;
      if ( !v14 || v51 >= v9 || v4 >= 6u )
        break;
      if ( v8 )
      {
        if ( v14 <= 0x7Fu || (v13 = *(_BYTE *)(NlsUnicodeToMbOemData + 2LL * v14 + 1) == 0, v16 = 2, v13) )
          v16 = 1;
        v12 += v16;
        if ( v12 > 6 )
          break;
      }
      *(_WORD *)(a3 + 2LL * v4 + 4) = v15;
      v4 = ++*(_BYTE *)(a3 + 3);
    }
    if ( !v8 )
      v12 = v4;
    if ( v12 <= 2 )
    {
      v17 = RtlComputeLfnChecksum(a1);
      *(_WORD *)a3 = v17;
      for ( i = 0; i < 4; ++i )
      {
        v19 = 48;
        if ( (v17 & 0xFu) > 9 )
          v19 = 55;
        v20 = i + *(unsigned __int8 *)(a3 + 3);
        v21 = (v17 & 0xF) + v19;
        v17 >>= 4;
        *(_WORD *)(a3 + 2 * v20 + 4) = v21;
      }
      *(_BYTE *)(a3 + 3) += 4;
      *(_BYTE *)(a3 + 2) = 1;
    }
    if ( v9 == -1 )
    {
      *(_DWORD *)(a3 + 20) = 0;
    }
    else
    {
      *(_WORD *)(a3 + 24) = 46;
      v22 = 1;
      *(_DWORD *)(a3 + 20) = 1;
      for ( j = 1; ; j = *(_DWORD *)(a3 + 20) )
      {
        v24 = GetNextWchar(a1, v53, 1, a2);
        v25 = v24;
        if ( !v24 )
          break;
        if ( j >= 4 )
          goto LABEL_41;
        if ( v8 )
        {
          if ( v24 <= 0x7Fu || (v26 = v24, v27 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v26 + 1)) )
            v27 = 1;
          v22 += v27;
          if ( v22 > 4 )
          {
LABEL_41:
            *(_WORD *)(a3 + 2LL * (j - 1) + 24) = 126;
            break;
          }
        }
        *(_WORD *)(a3 + 2LL * j + 24) = v25;
        ++*(_DWORD *)(a3 + 20);
      }
    }
  }
  v28 = *(_DWORD *)(a3 + 32) + 1;
  *(_DWORD *)(a3 + 32) = v28;
  if ( v28 > 4 && !*(_BYTE *)(a3 + 2) )
  {
    v29 = RtlComputeLfnChecksum(a1);
    *(_WORD *)a3 = v29;
    v31 = v29;
    if ( 2 - v30 < (unsigned int)(6 - v30) )
    {
      v32 = 4LL;
      v33 = (_WORD *)(a3 + 2 * ((unsigned int)(2 - v30) + 2LL));
      do
      {
        v34 = 48;
        v35 = v31 & 0xF;
        if ( v35 > 9u )
          v34 = 55;
        v31 >>= 4;
        *v33++ = v35 + v34;
        --v32;
      }
      while ( v32 );
    }
    *(_DWORD *)(a3 + 32) = 1;
    *(_BYTE *)(a3 + 3) = 6 - v30;
    v28 = 1;
    *(_BYTE *)(a3 + 2) = 1;
  }
  v36 = 1;
  v37 = 1;
  do
  {
    if ( !v28 )
      break;
    v38 = 8 - v36++;
    v39 = 0;
    v40 = v28 % 0xA + 48;
    v28 /= 0xAu;
    *((_WORD *)&v53[2] + v38) = v40;
    if ( v40 == 57 )
      v39 = v37;
    v37 = v39;
  }
  while ( v36 <= 7 );
  v41 = v52;
  v42 = (_WORD *)&v53[2] + 8 - v36;
  *v42 = 126;
  if ( (unsigned __int8)(*(_BYTE *)(a3 + 3) - 1) > 0xBu )
  {
    v43 = 0;
  }
  else
  {
    memmove(*(void **)(v41 + 8), (const void *)(a3 + 4), 2LL * *(unsigned __int8 *)(a3 + 3));
    v43 = 2 * *(unsigned __int8 *)(a3 + 3);
  }
  *(_WORD *)v41 = v43;
  memmove((void *)(*(_QWORD *)(v41 + 8) + 2 * ((unsigned __int64)v43 >> 1)), v42, 2 * v36);
  v44 = *(_WORD *)v41 + 2 * v36;
  *(_WORD *)v41 = v44;
  v45 = *(_DWORD *)(a3 + 20);
  if ( v45 )
  {
    memmove(
      (void *)(*(_QWORD *)(v41 + 8) + 2 * ((unsigned __int64)v44 >> 1)),
      (const void *)(a3 + 24),
      (unsigned int)(2 * v45));
    *(_WORD *)v41 += 2 * *(_WORD *)(a3 + 20);
  }
  if ( !v37 )
    return 0LL;
  v46 = *(_BYTE *)(a3 + 3);
  if ( v8 )
  {
    v47 = 0;
    for ( k = 0; v47 < v46; ++v47 )
    {
      if ( *(_WORD *)(a3 + 2LL * v47 + 4) <= 0x7Fu
        || (v49 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * *(unsigned __int16 *)(a3 + 2LL * v47 + 4) + 1)) )
      {
        v49 = 1;
      }
      k += v49;
      if ( k > 7 - v36 )
        break;
    }
  }
  else
  {
    LOBYTE(v47) = v46 - 1;
  }
  *(_BYTE *)(a3 + 3) = v47;
  if ( (_BYTE)v47 )
    return 0LL;
  else
    return 3221226535LL;
}
