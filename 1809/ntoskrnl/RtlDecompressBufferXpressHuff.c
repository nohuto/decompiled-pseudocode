/*
 * XREFs of RtlDecompressBufferXpressHuff @ 0x1400F7940
 * Callers:
 *     <none>
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x1400F7E60 (XpressBuildHuffmanDecodingTable.c)
 */

__int64 __fastcall RtlDecompressBufferXpressHuff(
        _BYTE *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rbx
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  unsigned __int16 *v14; // rbx
  _BYTE *v15; // r13
  int v16; // eax
  int v17; // r9d
  unsigned int v18; // r9d
  unsigned __int64 v19; // r14
  __int16 v20; // ax
  __int64 v21; // rcx
  __int16 v22; // ax
  int v23; // edx
  int v24; // ecx
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r11
  _BYTE *v28; // rsi
  int v29; // edx
  _DWORD *v30; // rsi
  int v31; // ecx
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r11
  char v34; // al
  __int64 v35; // rax
  int v37; // edx
  int v38; // ecx
  unsigned __int64 v39; // r10
  __int16 v40; // ax
  __int64 v41; // rcx
  int v42; // edx
  int v43; // ecx
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // r10
  _BYTE *v47; // [rsp+80h] [rbp+38h]

  v7 = a3;
  if ( !a7 )
    return 3221225704LL;
  v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = (unsigned __int64)&a1[a2];
  v47 = (_BYTE *)v12;
LABEL_3:
  if ( (__int64)(v11 - (_QWORD)v7) < 260 )
  {
    if ( v10 != (_BYTE *)v12 )
      return 3221226050LL;
    goto LABEL_44;
  }
  if ( (unsigned int)XpressBuildHuffmanDecodingTable(v9, v7) )
    return 3221226050LL;
  v13 = 16LL;
  v14 = (unsigned __int16 *)(v7 + 256);
  v15 = (_BYTE *)v12;
  v16 = v14[1];
  v17 = *v14;
  v7 = (unsigned __int8 *)(v14 + 2);
  v18 = v16 + (v17 << 16);
  if ( (unsigned __int64)(v10 + 0x10000) <= v12 )
    v15 = v10 + 0x10000;
  v19 = (unsigned __int64)(v15 - 188);
  if ( v10 < v15 - 188 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v20 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
          if ( v20 <= 0 )
          {
            v18 <<= 10;
            v13 -= 10LL;
            do
            {
              --v13;
              v31 = (unsigned __int64)v18 >> 31;
              v18 *= 2;
              v20 = *(_WORD *)(v9 + 2LL * (__int16)(v31 - v20) + 3104);
            }
            while ( v20 <= 0 );
          }
          else
          {
            v21 = v20 & 0xF;
            v18 <<= v21;
            v13 -= v21;
          }
          v22 = (v20 >> 4) - 256;
          if ( v13 < 0 )
          {
            if ( (unsigned __int64)v10 >= v19 )
              goto LABEL_45;
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v23 = *(unsigned __int16 *)v7;
            v7 += 2;
            v18 += v23 << -(char)v13;
            v13 += 16LL;
          }
          if ( v22 >= 0 )
            break;
          *v10++ = v22;
        }
        if ( !v22 && (unsigned __int64)v7 >= v11 && v10 == v47 )
          goto LABEL_44;
        v24 = v22 / 16;
        v25 = v22 % 16;
        if ( v25 == 15 )
        {
          if ( (unsigned __int64)v7 >= v11 )
            return 3221226050LL;
          v32 = *v7++;
          if ( v32 == 255 )
          {
            if ( (unsigned __int64)(v7 + 1) >= v11 )
              return 3221226050LL;
            v45 = *(unsigned __int16 *)v7;
            v7 += 2;
            if ( !v45 )
            {
              if ( (unsigned __int64)(v7 + 3) >= v11 )
                return 3221226050LL;
              v45 = *(unsigned int *)v7;
              v7 += 4;
            }
            if ( v45 < 0xF || &v10[v45 + 3] < v10 )
              return 3221226050LL;
            v32 = v45 - 15;
          }
          v25 = v32 + 15;
        }
        v26 = v25 + 3;
        v27 = (1LL << v24) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v24) >> 1);
        v18 <<= v24;
        v13 -= v24;
        if ( v13 < 0 )
        {
          if ( (unsigned __int64)v10 >= v19 )
            goto LABEL_59;
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v29 = *(unsigned __int16 *)v7;
          v7 += 2;
          v18 += v29 << -(char)v13;
          v13 += 16LL;
        }
        v28 = &v10[-v27];
        if ( &v10[-v27] < a1 )
          return 3221226050LL;
        if ( v27 < 4 )
          break;
LABEL_21:
        *(_DWORD *)v10 = *(_DWORD *)v28;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v28 + 1);
        if ( v26 >= 9 )
        {
          v10 += 8;
          v30 = v28 + 8;
          v26 -= 8LL;
          while ( (unsigned __int64)v10 < v19 )
          {
            *(_DWORD *)v10 = *v30;
            *((_DWORD *)v10 + 1) = v30[1];
            *((_DWORD *)v10 + 2) = v30[2];
            *((_DWORD *)v10 + 3) = v30[3];
            if ( v26 < 0x11 )
              goto LABEL_22;
            v10 += 16;
            v30 += 4;
            v26 -= 16LL;
          }
LABEL_51:
          if ( &v10[v26] <= v47 )
          {
            qmemcpy(v10, v30, v26);
            v10 += v26;
            goto LABEL_53;
          }
          return 3221226050LL;
        }
LABEL_22:
        v10 += v26;
      }
      *v10 = *v28;
      v33 = v27 - 1;
      if ( v33 )
      {
        v10[1] = v28[1];
        if ( v33 == 1 )
        {
          v10 += 2;
          v35 = -2LL;
          goto LABEL_39;
        }
        v34 = v28[2];
      }
      else
      {
        v10[1] = *v28;
        v34 = *v28;
      }
      v10[2] = v34;
      v35 = -3LL;
      v10 += 3;
LABEL_39:
      v26 += v35;
      if ( v26 )
        goto LABEL_21;
    }
  }
  while ( 1 )
  {
LABEL_53:
    if ( v10 >= v15 )
    {
      v12 = (unsigned __int64)v47;
      goto LABEL_3;
    }
    v40 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v40 <= 0 )
    {
      v18 <<= 10;
      v13 -= 10LL;
      do
      {
        --v13;
        v43 = (unsigned __int64)v18 >> 31;
        v18 *= 2;
        v40 = *(_WORD *)(v9 + 2LL * (__int16)(v43 - v40) + 3104);
      }
      while ( v40 <= 0 );
    }
    else
    {
      v41 = v40 & 0xF;
      v18 <<= v41;
      v13 -= v41;
    }
    v22 = (v40 >> 4) - 256;
    if ( v13 < 0 )
    {
LABEL_45:
      if ( (unsigned __int64)(v7 + 1) < v11 )
      {
        v37 = *(unsigned __int16 *)v7;
        v7 += 2;
        v18 += v37 << -(char)v13;
        v13 += 16LL;
        goto LABEL_57;
      }
      return 3221226050LL;
    }
LABEL_57:
    if ( v22 >= 0 )
      break;
    *v10++ = v22;
  }
  if ( !v22 && (unsigned __int64)v7 >= v11 && v10 == v47 )
  {
LABEL_44:
    *a6 = (_DWORD)v10 - (_DWORD)a1;
    return 0LL;
  }
  v38 = v22 / 16;
  v39 = v22 % 16;
  if ( v39 != 15 )
    goto LABEL_49;
  if ( (unsigned __int64)v7 >= v11 )
    return 3221226050LL;
  v44 = *v7++;
  if ( v44 == 255 )
  {
    if ( (unsigned __int64)(v7 + 1) >= v11 )
      return 3221226050LL;
    v46 = *(unsigned __int16 *)v7;
    v7 += 2;
    if ( !v46 )
    {
      if ( (unsigned __int64)(v7 + 3) >= v11 )
        return 3221226050LL;
      v46 = *(unsigned int *)v7;
      v7 += 4;
    }
    if ( v46 >= 0xF && &v10[v46 + 3] >= v10 )
    {
      v44 = v46 - 15;
      goto LABEL_67;
    }
  }
  else
  {
LABEL_67:
    v39 = v44 + 15;
LABEL_49:
    v26 = v39 + 3;
    v27 = (1LL << v38) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v38) >> 1);
    v18 <<= v38;
    v13 -= v38;
    if ( v13 < 0 )
    {
LABEL_59:
      if ( (unsigned __int64)(v7 + 1) >= v11 )
        return 3221226050LL;
      v42 = *(unsigned __int16 *)v7;
      v7 += 2;
      v18 += v42 << -(char)v13;
      v13 += 16LL;
    }
    v30 = &v10[-v27];
    if ( &v10[-v27] >= a1 )
      goto LABEL_51;
  }
  return 3221226050LL;
}
