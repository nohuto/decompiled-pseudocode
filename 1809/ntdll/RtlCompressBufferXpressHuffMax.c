/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x18010B374
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x180067290 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x180067AF8 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x180067DA8 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpMakeXpressCallback @ 0x18010BFDC (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int8 *a6)
{
  unsigned __int64 v7; // rbp
  unsigned int v8; // esi
  int *v11; // r12
  unsigned __int8 *v12; // rbx
  char *v13; // r15
  __int64 v14; // r10
  unsigned __int8 *v15; // rdi
  unsigned __int8 *v16; // r11
  int v17; // esi
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r9
  unsigned __int8 v20; // al
  unsigned __int8 *v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r15d
  unsigned __int8 *v26; // r8
  int v27; // eax
  unsigned __int8 *v28; // rbp
  unsigned __int8 *v29; // r9
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // r11
  int v32; // eax
  int v33; // eax
  unsigned __int8 *v34; // rax
  unsigned __int8 *v35; // rbx
  _DWORD *v36; // r8
  unsigned __int8 *i; // rax
  int v38; // eax
  int v39; // ecx
  unsigned __int64 v40; // rbx
  unsigned __int8 *v41; // rax
  unsigned __int8 *v42; // rcx
  unsigned __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rcx
  _BYTE *v46; // r8
  unsigned __int64 v47; // rdx
  char v48; // cl
  unsigned __int8 v49; // cl
  unsigned __int64 v50; // rax
  _WORD *v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int8 v54; // al
  int v55; // esi
  bool v56; // zf
  __int64 v57; // [rsp+30h] [rbp-88h]
  __int64 v58; // [rsp+38h] [rbp-80h]
  unsigned __int64 v59; // [rsp+40h] [rbp-78h]
  char *v60; // [rsp+48h] [rbp-70h]
  unsigned __int8 *v61; // [rsp+50h] [rbp-68h]
  char *v62; // [rsp+58h] [rbp-60h]
  _QWORD v63[2]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v64; // [rsp+70h] [rbp-48h]
  __int64 XpressCallback; // [rsp+C0h] [rbp+8h]
  int v66; // [rsp+D0h] [rbp+18h]
  __int64 v68; // [rsp+F0h] [rbp+38h]
  __int64 v70; // [rsp+F8h] [rbp+40h]

  v66 = (int)a3;
  v7 = a1 + a2;
  v8 = a2;
  v59 = v7;
  v62 = &a3[a4];
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return 3221225659LL;
    memset(a6, 0, 0x40000uLL);
    v60 = a3;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v11 = (int *)(a6 + 1342240);
    v63[0] = 0LL;
    v12 = (unsigned __int8 *)a1;
    v63[1] = 0LL;
    v13 = a3;
    v68 = 0LL;
    v64 = v8;
LABEL_5:
    v57 = 0LL;
    v58 = 0LL;
    memset(a6 + 1339936, 0, 0x800uLL);
    v14 = v8;
    v15 = (unsigned __int8 *)(v11 + 1);
    v16 = (unsigned __int8 *)v7;
    v17 = 1;
    if ( (unsigned __int64)(v12 + 0x10000) <= v7 )
      v16 = v12 + 0x10000;
    v18 = (unsigned __int64)&v12[v14];
    v61 = v16;
    v19 = (unsigned __int64)(v16 - 5);
    v70 = (__int64)(v16 - 5);
    if ( (unsigned __int64)(v16 - 5) < v18 )
      v18 = (unsigned __int64)(v16 - 5);
    XpressCallback = v18;
    if ( v12 == (unsigned __int8 *)a1 )
    {
      v17 = 2;
      ++*(_DWORD *)&a6[4 * *v12 + 1339936];
      v20 = *v12++;
      *v15 = v20;
      v15 = (unsigned __int8 *)v11 + 5;
    }
    if ( (unsigned __int64)v12 >= v19 )
      goto LABEL_87;
    v21 = v12;
    v22 = (__int64)&v12[-a1] % 0x20000;
    do
    {
      v23 = (unsigned __int16)XpressHashFunction[*v21] ^ (unsigned __int16)word_1801392A0[v21[2]] ^ (unsigned __int64)(unsigned __int16)word_1801390A0[v21[1]];
      v24 = *(_QWORD *)&a6[8 * v23];
      *(_QWORD *)&a6[8 * v23] = v21++;
      *(_QWORD *)&a6[8 * v22 + 0x40000] = v24;
      v22 = ((_DWORD)v22 + 1) & 0x1FFFF;
    }
    while ( (unsigned __int64)v21 < v19 );
    while ( 1 )
    {
      if ( (unsigned __int64)v12 >= v18 )
      {
        if ( (unsigned __int64)v12 >= v19 )
        {
          v13 = v60;
          v7 = v59;
          v16 = v61;
LABEL_87:
          while ( v12 < v16 )
          {
            ++*(_DWORD *)&a6[4 * *v12 + 1339936];
            v54 = *v12++;
            *v15++ = v54;
            if ( v17 <= 0 )
            {
              *v11 = 2 * v17;
              v17 = 1;
              v11 = (int *)v15;
              v15 += 4;
            }
            else
            {
              v17 *= 2;
            }
          }
          while ( v17 > 0 )
            v17 = 2 * v17 + 1;
          *v11 = 2 * v17 + 1;
          if ( (unsigned __int64)v12 < v7 )
          {
            v55 = 0;
          }
          else
          {
            ++*((_DWORD *)a6 + 335240);
            v55 = 1;
          }
          if ( &v13[4 * ((unsigned __int64)(XpressBuildHuffmanEncodings((_QWORD *)a6 + 163840) + v57 + 31) >> 5)
                  + 258
                  + v58] >= v62 )
            return 3221225507LL;
          v11 = (int *)(a6 + 1342240);
          v7 = v59;
          v13 = XpressDoHuffmanPass((__int64)(a6 + 1310720), a6 + 1342240, (unsigned __int64)v15, (__int64)v13, v55);
          v60 = v13;
          v56 = v55 == 0;
          v8 = a2;
          if ( !v56 )
          {
            *a5 = (_DWORD)v13 - v66;
            return 0LL;
          }
          goto LABEL_5;
        }
        XpressCallback = RtlpMakeXpressCallback(v63, v19, v12);
      }
      v25 = *(_DWORD *)v12;
      v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v12[-a1] % 0x20000) + 0x40000];
      if ( v26 + 0x10000 <= v12 )
        goto LABEL_68;
      v27 = v25 ^ *(_DWORD *)v26;
      if ( !v27 )
        goto LABEL_19;
      if ( (v27 & 0xFFFFFF) != 0 )
      {
        v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
        if ( v26 + 0x10000 <= v12 )
          goto LABEL_68;
        v32 = v25 ^ *(_DWORD *)v26;
        if ( !v32 )
          goto LABEL_19;
        if ( (v32 & 0xFFFFFF) != 0 )
        {
          v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
          if ( v26 + 0x10000 <= v12 )
            goto LABEL_68;
          v33 = v25 ^ *(_DWORD *)v26;
          if ( !v33 )
          {
LABEL_19:
            v28 = v12 - 0x10000;
            v29 = v12;
            v30 = 0LL;
            v31 = 3LL;
            goto LABEL_31;
          }
          if ( (v33 & 0xFFFFFF) != 0 )
            goto LABEL_68;
        }
      }
      v68 = (__int64)v26;
      v29 = v12;
      v28 = v12 - 0x10000;
      v30 = 0LL;
      v31 = 3LL;
      do
      {
        v26 = *(unsigned __int8 **)&a6[8 * ((__int64)&v26[-a1] % 0x20000) + 0x40000];
        if ( v26 <= v28 )
          break;
        if ( v25 == *(_DWORD *)v26 )
        {
          v12 = v29;
LABEL_31:
          v34 = v12;
          v35 = v12 + 4;
          v36 = v26 + 4;
          for ( i = v34 + 36; ; i = v35 + 32 )
          {
            if ( (unsigned __int64)i >= v59 )
            {
              while ( (unsigned __int64)v35 < v59 && *v35 == *(_BYTE *)v36 )
              {
                ++v35;
                v36 = (_DWORD *)((char *)v36 + 1);
              }
              goto LABEL_59;
            }
            v38 = *(_DWORD *)v35;
            v39 = *v36;
            if ( *(_DWORD *)v35 != *v36 )
              goto LABEL_50;
            v38 = *((_DWORD *)v35 + 1);
            v39 = v36[1];
            if ( v38 != v39 )
            {
              v35 += 4;
              ++v36;
              goto LABEL_50;
            }
            v38 = *((_DWORD *)v35 + 2);
            v39 = v36[2];
            if ( v38 != v39 )
            {
              v35 += 8;
              v36 += 2;
              goto LABEL_50;
            }
            v38 = *((_DWORD *)v35 + 3);
            v39 = v36[3];
            if ( v38 != v39 )
            {
              v35 += 12;
              v36 += 3;
              goto LABEL_50;
            }
            v38 = *((_DWORD *)v35 + 4);
            v39 = v36[4];
            if ( v38 != v39 )
            {
              v35 += 16;
              v36 += 4;
              goto LABEL_50;
            }
            v38 = *((_DWORD *)v35 + 5);
            v39 = v36[5];
            if ( v38 != v39 )
            {
              v35 += 20;
              v36 += 5;
              goto LABEL_50;
            }
            v38 = *((_DWORD *)v35 + 6);
            v39 = v36[6];
            if ( v38 != v39 )
            {
              v35 += 24;
              v36 += 6;
              goto LABEL_50;
            }
            v38 = *((_DWORD *)v35 + 7);
            v39 = v36[7];
            if ( v38 != v39 )
              break;
            v35 += 32;
            v36 += 8;
          }
          v35 += 28;
          v36 += 7;
LABEL_50:
          if ( (_BYTE)v38 == (_BYTE)v39 )
          {
            if ( v35[1] == *((_BYTE *)v36 + 1) )
            {
              if ( v35[2] == *((_BYTE *)v36 + 2) )
              {
                v35 += 3;
                v36 = (_DWORD *)((char *)v36 + 3);
              }
              else
              {
                v35 += 2;
                v36 = (_DWORD *)((char *)v36 + 2);
              }
            }
            else
            {
              ++v35;
              v36 = (_DWORD *)((char *)v36 + 1);
            }
          }
LABEL_59:
          v40 = v35 - v29;
          v41 = (unsigned __int8 *)v36;
          v26 = (unsigned __int8 *)v36 - v40;
          if ( v40 <= v31 )
          {
            v30 += v40;
            goto LABEL_63;
          }
          v42 = v26;
          v31 = v40;
          v68 = (__int64)v26;
          if ( v41 > v29 )
            goto LABEL_65;
        }
LABEL_63:
        ++v30;
      }
      while ( v30 < 0xC );
      v42 = (unsigned __int8 *)v68;
LABEL_65:
      v12 = &v29[v31];
      v43 = v29 - v42;
      if ( v31 == 3 && v43 > 0x1000 )
        break;
      if ( v43 < 0x100 )
        v45 = XpressHighBitIndexTable[v43];
      else
        v45 = XpressHighBitIndexTable[v43 >> 8] + 8LL;
      v57 += v45;
      v46 = v15 + 1;
      v47 = v43 - (1LL << v45);
      v48 = 16 * v45;
      if ( v31 - 3 < 0xF )
      {
        v49 = v31 - 3 + v48;
        *v15 = v49;
        v51 = v15 + 1;
      }
      else
      {
        v49 = v48 + 15;
        v50 = v31 - 18;
        *v15 = v49;
        v51 = v15 + 2;
        if ( v31 - 18 >= 0xFF )
        {
          v53 = v50 + 15;
          *v46 = -1;
          if ( v53 >= 0x10000 )
          {
            *v51 = 0;
            v51 = v46 + 7;
            *(_DWORD *)(v46 + 3) = v53;
            v52 = 7LL;
          }
          else
          {
            *v51 = v53;
            v51 = v46 + 3;
            v52 = 3LL;
          }
        }
        else
        {
          *v46 = v50;
          v52 = 1LL;
        }
        v58 += v52;
      }
      ++*(_DWORD *)&a6[4 * v49 + 1340960];
      v44 = 2 * v17 + 1;
      *v51 = v47;
      v15 = (unsigned __int8 *)(v51 + 1);
      if ( v17 > 0 )
      {
LABEL_69:
        v17 = v44;
        goto LABEL_70;
      }
      v17 = 1;
LABEL_72:
      *v11 = v44;
      v11 = (int *)v15;
      v15 += 4;
LABEL_70:
      v19 = v70;
      v18 = XpressCallback;
    }
    v12 = v29;
LABEL_68:
    ++v12;
    ++*(_DWORD *)&a6[4 * (unsigned __int8)v25 + 1339936];
    *v15++ = v25;
    v44 = 2 * v17;
    if ( v17 > 0 )
      goto LABEL_69;
    v17 = 1;
    goto LABEL_72;
  }
  return 3221225507LL;
}
