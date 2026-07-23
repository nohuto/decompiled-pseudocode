/*
 * XREFs of RtlDecompressBufferXpressHuffProgress @ 0x1402FA240
 * Callers:
 *     RtlDecompressBufferProgress @ 0x1402FA180 (RtlDecompressBufferProgress.c)
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x1400F7E60 (XpressBuildHuffmanDecodingTable.c)
 *     RtlpMakeXpressCallback @ 0x140144288 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlDecompressBufferXpressHuffProgress(
        _DWORD *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // esi
  unsigned __int8 *v9; // rbx
  _WORD *v11; // r14
  _DWORD *v12; // rdi
  _DWORD *v13; // r10
  unsigned __int64 v14; // r12
  _DWORD *v15; // rcx
  unsigned __int16 *v16; // rbx
  __int64 v17; // rbp
  int v18; // eax
  int v19; // r15d
  unsigned int v20; // r15d
  unsigned __int64 v21; // r13
  unsigned __int64 XpressCallback; // r9
  __int16 v23; // si
  int v24; // eax
  __int64 v25; // rcx
  __int16 v26; // si
  int v27; // edx
  unsigned __int64 v28; // r14
  __int64 v29; // rsi
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r8
  int v34; // edx
  char *v35; // rsi
  unsigned __int64 v36; // r8
  char v37; // al
  __int64 v38; // rax
  _DWORD *v39; // rsi
  _DWORD *v40; // rax
  unsigned __int64 v41; // rcx
  __int16 v42; // si
  int v43; // eax
  __int64 v44; // rcx
  int v45; // edx
  unsigned __int64 v46; // r14
  __int64 v47; // rsi
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // r14
  int v50; // edx
  _WORD *v51; // [rsp+20h] [rbp-58h]
  _DWORD *v52; // [rsp+28h] [rbp-50h]
  _QWORD v53[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v54; // [rsp+40h] [rbp-38h]
  unsigned __int64 v56; // [rsp+A8h] [rbp+30h]
  int v57; // [rsp+C0h] [rbp+48h]

  v8 = 4096;
  v57 = 4096;
  v9 = a3;
  if ( !a6 )
    return 3221225704LL;
  v11 = (_WORD *)((a6 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  v12 = a1;
  v51 = v11;
  v13 = (_DWORD *)((char *)a1 + a2);
  v14 = (unsigned __int64)&a3[a4];
  v56 = (unsigned __int64)v13;
  if ( !a7 || a2 < 0x1000 )
  {
    v8 = a2;
    v57 = a2;
  }
  v53[0] = a7;
  v53[1] = a8;
  v54 = v8;
LABEL_7:
  if ( (__int64)(v14 - (_QWORD)v9) < 260 )
  {
    if ( v12 != v13 )
      return 3221226050LL;
    goto LABEL_104;
  }
  if ( (unsigned int)XpressBuildHuffmanDecodingTable(v11, (__int64)v9) )
    return 3221226050LL;
  v13 = (_DWORD *)v56;
  v15 = (_DWORD *)v56;
  v16 = (unsigned __int16 *)(v9 + 256);
  v17 = 16LL;
  v18 = v16[1];
  v19 = *v16;
  v9 = (unsigned __int8 *)(v16 + 2);
  v20 = v18 + (v19 << 16);
  if ( (unsigned __int64)(v12 + 0x4000) <= v56 )
    v15 = v12 + 0x4000;
  v52 = v15;
  v21 = (unsigned __int64)(v15 - 47);
  if ( v12 < v15 - 47 )
  {
    XpressCallback = (unsigned __int64)v12 + v8;
    if ( v21 < XpressCallback )
      XpressCallback = (unsigned __int64)(v15 - 47);
LABEL_16:
    while ( 2 )
    {
      v23 = v11[((unsigned __int64)v20 >> 22) + 528];
      if ( v23 > 0 )
      {
        v25 = v23 & 0xF;
        v20 <<= v25;
        v17 -= v25;
      }
      else
      {
        v20 <<= 10;
        v17 -= 10LL;
        do
        {
          --v17;
          v24 = (unsigned __int64)v20 >> 31;
          v20 *= 2;
          v23 = v11[(__int16)(v24 - v23) + 1552];
        }
        while ( v23 <= 0 );
      }
      v26 = (v23 >> 4) - 256;
      if ( v17 < 0 )
      {
        if ( (unsigned __int64)v12 >= XpressCallback )
        {
          if ( (unsigned __int64)v12 >= v21 )
          {
            v13 = (_DWORD *)v56;
LABEL_77:
            if ( (unsigned __int64)(v9 + 1) < v14 )
            {
              v45 = *(unsigned __int16 *)v9;
              v9 += 2;
              v20 += v45 << -(char)v17;
              v17 += 16LL;
              goto LABEL_79;
            }
            return 3221226050LL;
          }
          XpressCallback = RtlpMakeXpressCallback((__int64)v53, v21, (__int64)v12);
        }
        if ( (unsigned __int64)(v9 + 1) >= v14 )
          return 3221226050LL;
        v27 = *(unsigned __int16 *)v9;
        v9 += 2;
        v20 += v27 << -(char)v17;
        v17 += 16LL;
      }
      if ( v26 < 0 )
      {
        *(_BYTE *)v12 = v26;
        v12 = (_DWORD *)((char *)v12 + 1);
        continue;
      }
      break;
    }
    v13 = (_DWORD *)v56;
    if ( !v26 && (unsigned __int64)v9 >= v14 && v12 == (_DWORD *)v56 )
      goto LABEL_104;
    v28 = v26 % 16;
    v29 = v26 / 16;
    if ( v28 == 15 )
    {
      if ( (unsigned __int64)v9 >= v14 )
        return 3221226050LL;
      v30 = *v9++;
      if ( v30 == 255 )
      {
        if ( (unsigned __int64)(v9 + 1) >= v14 )
          return 3221226050LL;
        v31 = *(unsigned __int16 *)v9;
        v9 += 2;
        if ( !v31 )
        {
          if ( (unsigned __int64)(v9 + 3) >= v14 )
            return 3221226050LL;
          v31 = *(unsigned int *)v9;
          v9 += 4;
        }
        if ( v31 < 0xF || (_DWORD *)((char *)v12 + v31 + 3) < v12 )
          return 3221226050LL;
        v30 = v31 - 15;
      }
      v28 = v30 + 15;
    }
    v32 = v28 + 3;
    v33 = (1LL << v29) + ((unsigned __int64)v20 >> (31 - (unsigned __int8)v29) >> 1);
    v20 <<= v29;
    v17 -= v29;
    if ( v17 < 0 )
    {
      if ( (unsigned __int64)v12 >= v21 )
        goto LABEL_96;
      if ( (unsigned __int64)(v9 + 1) >= v14 )
        return 3221226050LL;
      v34 = *(unsigned __int16 *)v9;
      v9 += 2;
      v20 += v34 << -(char)v17;
      v17 += 16LL;
    }
    v35 = (char *)v12 - v33;
    if ( (_DWORD *)((char *)v12 - v33) < a1 )
      return 3221226050LL;
    if ( v33 >= 4 )
    {
LABEL_56:
      *v12 = *(_DWORD *)v35;
      v12[1] = *((_DWORD *)v35 + 1);
      if ( v32 < 9 )
      {
        v12 = (_DWORD *)((char *)v12 + v32);
        goto LABEL_15;
      }
      v12 += 2;
      v39 = v35 + 8;
      for ( v32 -= 8LL; ; v32 -= 16LL )
      {
        if ( (unsigned __int64)v12 >= XpressCallback )
        {
          if ( (unsigned __int64)v12 >= v21 )
          {
            v13 = (_DWORD *)v56;
            v40 = (_DWORD *)((char *)v12 + v32);
            if ( (unsigned __int64)v12 + v32 <= v56 )
            {
LABEL_66:
              v41 = v32;
              v11 = v51;
              qmemcpy(v12, v39, v41);
              v12 = v40;
              goto LABEL_67;
            }
            return 3221226050LL;
          }
          XpressCallback = RtlpMakeXpressCallback((__int64)v53, v21, (__int64)v12);
        }
        *v12 = *v39;
        v12[1] = v39[1];
        v12[2] = v39[2];
        v12[3] = v39[3];
        if ( v32 < 0x11 )
        {
          v12 = (_DWORD *)((char *)v12 + v32);
LABEL_15:
          v11 = v51;
          goto LABEL_16;
        }
        v12 += 4;
        v39 += 4;
      }
    }
    *(_BYTE *)v12 = *v35;
    v36 = v33 - 1;
    if ( v36 )
    {
      *((_BYTE *)v12 + 1) = v35[1];
      if ( v36 == 1 )
      {
        v12 = (_DWORD *)((char *)v12 + 2);
        v38 = -2LL;
        goto LABEL_55;
      }
      v37 = v35[2];
    }
    else
    {
      *((_BYTE *)v12 + 1) = *v35;
      v37 = *v35;
    }
    *((_BYTE *)v12 + 2) = v37;
    v38 = -3LL;
    v12 = (_DWORD *)((char *)v12 + 3);
LABEL_55:
    v32 += v38;
    if ( !v32 )
      goto LABEL_15;
    goto LABEL_56;
  }
  while ( 1 )
  {
    if ( v12 >= v15 )
    {
      v8 = v57;
      goto LABEL_7;
    }
    v42 = v11[((unsigned __int64)v20 >> 22) + 528];
    if ( v42 > 0 )
    {
      v44 = v42 & 0xF;
      v20 <<= v44;
      v17 -= v44;
    }
    else
    {
      v20 <<= 10;
      v17 -= 10LL;
      do
      {
        --v17;
        v43 = (unsigned __int64)v20 >> 31;
        v20 *= 2;
        v42 = v11[(__int16)(v43 - v42) + 1552];
      }
      while ( v42 <= 0 );
    }
    v26 = (v42 >> 4) - 256;
    if ( v17 < 0 )
      goto LABEL_77;
LABEL_79:
    if ( v26 >= 0 )
      break;
    *(_BYTE *)v12 = v26;
    v12 = (_DWORD *)((char *)v12 + 1);
LABEL_67:
    v15 = v52;
  }
  if ( !v26 && (unsigned __int64)v9 >= v14 && v12 == v13 )
  {
LABEL_104:
    *a5 = (_DWORD)v12 - (_DWORD)a1;
    return 0LL;
  }
  v46 = v26 % 16;
  v47 = v26 / 16;
  if ( v46 != 15 )
  {
LABEL_95:
    v32 = v46 + 3;
    v33 = (1LL << v47) + ((unsigned __int64)v20 >> (31 - (unsigned __int8)v47) >> 1);
    v20 <<= v47;
    v17 -= v47;
    if ( v17 < 0 )
    {
LABEL_96:
      if ( (unsigned __int64)(v9 + 1) >= v14 )
        return 3221226050LL;
      v50 = *(unsigned __int16 *)v9;
      v9 += 2;
      v20 += v50 << -(char)v17;
      v17 += 16LL;
    }
    v39 = (_DWORD *)((char *)v12 - v33);
    if ( (_DWORD *)((char *)v12 - v33) >= a1 )
    {
      v40 = (_DWORD *)((char *)v12 + v32);
      if ( (_DWORD *)((char *)v12 + v32) <= v13 )
        goto LABEL_66;
    }
    return 3221226050LL;
  }
  if ( (unsigned __int64)v9 >= v14 )
    return 3221226050LL;
  v48 = *v9++;
  if ( v48 != 255 )
  {
LABEL_94:
    v46 = v48 + 15;
    goto LABEL_95;
  }
  if ( (unsigned __int64)(v9 + 1) >= v14 )
    return 3221226050LL;
  v49 = *(unsigned __int16 *)v9;
  v9 += 2;
  if ( !v49 )
  {
    if ( (unsigned __int64)(v9 + 3) >= v14 )
      return 3221226050LL;
    v49 = *(unsigned int *)v9;
    v9 += 4;
  }
  if ( v49 >= 0xF && (_DWORD *)((char *)v12 + v49 + 3) >= v12 )
  {
    v48 = v49 - 15;
    goto LABEL_94;
  }
  return 3221226050LL;
}
