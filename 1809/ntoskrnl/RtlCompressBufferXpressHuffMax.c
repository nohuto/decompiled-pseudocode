/*
 * XREFs of RtlCompressBufferXpressHuffMax @ 0x1402F8D44
 * Callers:
 *     RtlCompressBufferProgress @ 0x1401439F8 (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressHuff @ 0x1402F8C90 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140144288 (RtlpMakeXpressCallback.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     XpressBuildHuffmanEncodings @ 0x1402FB0A4 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x1402FB47C (XpressDoHuffmanPass.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffMax(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v10; // rbp
  unsigned int v11; // edi
  unsigned __int8 *v14; // rbx
  __int64 v15; // r15
  int *v16; // r13
  __int64 v17; // r10
  unsigned __int8 *v18; // rdi
  unsigned __int8 *v19; // r11
  int v20; // esi
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r9
  unsigned __int8 v23; // al
  unsigned __int8 *v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // r15d
  unsigned __int8 *v29; // r8
  int v30; // eax
  unsigned __int8 *v31; // rbp
  unsigned __int8 *v32; // r9
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // r11
  int v35; // eax
  int v36; // eax
  unsigned __int8 *v37; // rax
  unsigned __int8 *v38; // rbx
  _DWORD *v39; // r8
  unsigned __int8 *i; // rax
  int v41; // eax
  int v42; // ecx
  unsigned __int64 v43; // rbx
  unsigned __int8 *v44; // rax
  unsigned __int8 *v45; // rcx
  unsigned __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rcx
  _BYTE *v49; // r8
  unsigned __int64 v50; // rdx
  char v51; // cl
  unsigned __int8 v52; // cl
  unsigned __int64 v53; // rax
  _WORD *v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int8 v57; // al
  int v58; // esi
  __int64 v59; // rax
  unsigned __int8 *v60; // [rsp+30h] [rbp-98h]
  unsigned __int64 v61; // [rsp+38h] [rbp-90h]
  __int64 v62; // [rsp+40h] [rbp-88h]
  __int64 v63; // [rsp+48h] [rbp-80h]
  unsigned __int64 v64; // [rsp+50h] [rbp-78h]
  __int64 v65; // [rsp+58h] [rbp-70h]
  unsigned __int8 *v66; // [rsp+60h] [rbp-68h]
  unsigned __int64 v67; // [rsp+68h] [rbp-60h]
  _QWORD v68[2]; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v69; // [rsp+80h] [rbp-48h]
  unsigned __int64 XpressCallback; // [rsp+D0h] [rbp+8h]
  int v71; // [rsp+E0h] [rbp+18h]

  v71 = a3;
  v10 = a1 + a2;
  v11 = a2;
  v64 = v10;
  v67 = a3 + a4;
  if ( a4 >= 0x12C )
  {
    if ( a1 <= 0x10001 )
      return 3221225659LL;
    memset(a6, 0, 0x40000uLL);
    v65 = a3;
    v14 = (unsigned __int8 *)a1;
    *((_QWORD *)a6 + 0x8000) = 0LL;
    v15 = a3;
    if ( a7 && a9 <= v11 )
      v11 = a9;
    else
      a9 = v11;
    v68[0] = a7;
    v16 = (int *)(a6 + 1342240);
    v68[1] = a8;
    v69 = v11;
    v60 = 0LL;
LABEL_9:
    v62 = 0LL;
    v63 = 0LL;
    memset(a6 + 1339936, 0, 0x800uLL);
    v17 = v11;
    v18 = (unsigned __int8 *)(v16 + 1);
    v19 = (unsigned __int8 *)v10;
    v20 = 1;
    if ( (unsigned __int64)(v14 + 0x10000) <= v10 )
      v19 = v14 + 0x10000;
    v21 = (unsigned __int64)&v14[v17];
    v66 = v19;
    v22 = (unsigned __int64)(v19 - 5);
    v61 = (unsigned __int64)(v19 - 5);
    if ( (unsigned __int64)(v19 - 5) < v21 )
      v21 = (unsigned __int64)(v19 - 5);
    XpressCallback = v21;
    if ( v14 == (unsigned __int8 *)a1 )
    {
      v20 = 2;
      ++*(_DWORD *)&a6[4 * *v14 + 1339936];
      v23 = *v14++;
      *v18 = v23;
      v18 = (unsigned __int8 *)v16 + 5;
    }
    if ( (unsigned __int64)v14 >= v22 )
      goto LABEL_91;
    v24 = v14;
    v25 = (__int64)&v14[-a1] % 0x20000;
    do
    {
      v26 = (unsigned __int16)XpressHashFunction[*v24] ^ (unsigned __int16)word_14037E460[v24[2]] ^ (unsigned __int64)(unsigned __int16)word_14037E260[v24[1]];
      v27 = *(_QWORD *)&a6[8 * v26];
      *(_QWORD *)&a6[8 * v26] = v24++;
      *(_QWORD *)&a6[8 * v25 + 0x40000] = v27;
      v25 = ((_DWORD)v25 + 1) & 0x1FFFF;
    }
    while ( (unsigned __int64)v24 < v22 );
    while ( 1 )
    {
      if ( (unsigned __int64)v14 >= v21 )
      {
        if ( (unsigned __int64)v14 >= v22 )
        {
          v15 = v65;
          v10 = v64;
          v19 = v66;
LABEL_91:
          while ( v14 < v19 )
          {
            ++*(_DWORD *)&a6[4 * *v14 + 1339936];
            v57 = *v14++;
            *v18++ = v57;
            if ( v20 <= 0 )
            {
              *v16 = 2 * v20;
              v20 = 1;
              v16 = (int *)v18;
              v18 += 4;
            }
            else
            {
              v20 *= 2;
            }
          }
          while ( v20 > 0 )
            v20 = 2 * v20 + 1;
          *v16 = 2 * v20 + 1;
          if ( (unsigned __int64)v14 < v10 )
          {
            v58 = 0;
          }
          else
          {
            ++*((_DWORD *)a6 + 335240);
            v58 = 1;
          }
          if ( v15 + v63 + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings(a6 + 1310720) + v62 + 31) >> 5) + 258 >= v67 )
            return 3221225507LL;
          v16 = (int *)(a6 + 1342240);
          v59 = XpressDoHuffmanPass((int)a6 + 1310720, (int)a6 + 1342240, (_DWORD)v18, v15, v58);
          v11 = a9;
          v10 = v64;
          v15 = v59;
          v65 = v59;
          if ( v58 )
          {
            *a5 = v59 - v71;
            return 0LL;
          }
          goto LABEL_9;
        }
        XpressCallback = RtlpMakeXpressCallback((__int64)v68, v22, (__int64)v14);
      }
      v28 = *(_DWORD *)v14;
      v29 = *(unsigned __int8 **)&a6[8 * ((__int64)&v14[-a1] % 0x20000) + 0x40000];
      if ( v29 + 0x10000 <= v14 )
        goto LABEL_72;
      v30 = v28 ^ *(_DWORD *)v29;
      if ( !v30 )
        goto LABEL_23;
      if ( (v30 & 0xFFFFFF) != 0 )
      {
        v29 = *(unsigned __int8 **)&a6[8 * ((__int64)&v29[-a1] % 0x20000) + 0x40000];
        if ( v29 + 0x10000 <= v14 )
          goto LABEL_72;
        v35 = v28 ^ *(_DWORD *)v29;
        if ( !v35 )
          goto LABEL_23;
        if ( (v35 & 0xFFFFFF) != 0 )
        {
          v29 = *(unsigned __int8 **)&a6[8 * ((__int64)&v29[-a1] % 0x20000) + 0x40000];
          if ( v29 + 0x10000 <= v14 )
            goto LABEL_72;
          v36 = v28 ^ *(_DWORD *)v29;
          if ( !v36 )
          {
LABEL_23:
            v31 = v14 - 0x10000;
            v32 = v14;
            v33 = 0LL;
            v34 = 3LL;
            goto LABEL_35;
          }
          if ( (v36 & 0xFFFFFF) != 0 )
            goto LABEL_72;
        }
      }
      v60 = v29;
      v32 = v14;
      v31 = v14 - 0x10000;
      v33 = 0LL;
      v34 = 3LL;
      do
      {
        v29 = *(unsigned __int8 **)&a6[8 * ((__int64)&v29[-a1] % 0x20000) + 0x40000];
        if ( v29 <= v31 )
          break;
        if ( v28 == *(_DWORD *)v29 )
        {
          v14 = v32;
LABEL_35:
          v37 = v14;
          v38 = v14 + 4;
          v39 = v29 + 4;
          for ( i = v37 + 36; ; i = v38 + 32 )
          {
            if ( (unsigned __int64)i >= v64 )
            {
              while ( (unsigned __int64)v38 < v64 && *v38 == *(_BYTE *)v39 )
              {
                ++v38;
                v39 = (_DWORD *)((char *)v39 + 1);
              }
              goto LABEL_63;
            }
            v41 = *(_DWORD *)v38;
            v42 = *v39;
            if ( *(_DWORD *)v38 != *v39 )
              goto LABEL_54;
            v41 = *((_DWORD *)v38 + 1);
            v42 = v39[1];
            if ( v41 != v42 )
            {
              v38 += 4;
              ++v39;
              goto LABEL_54;
            }
            v41 = *((_DWORD *)v38 + 2);
            v42 = v39[2];
            if ( v41 != v42 )
            {
              v38 += 8;
              v39 += 2;
              goto LABEL_54;
            }
            v41 = *((_DWORD *)v38 + 3);
            v42 = v39[3];
            if ( v41 != v42 )
            {
              v38 += 12;
              v39 += 3;
              goto LABEL_54;
            }
            v41 = *((_DWORD *)v38 + 4);
            v42 = v39[4];
            if ( v41 != v42 )
            {
              v38 += 16;
              v39 += 4;
              goto LABEL_54;
            }
            v41 = *((_DWORD *)v38 + 5);
            v42 = v39[5];
            if ( v41 != v42 )
            {
              v38 += 20;
              v39 += 5;
              goto LABEL_54;
            }
            v41 = *((_DWORD *)v38 + 6);
            v42 = v39[6];
            if ( v41 != v42 )
            {
              v38 += 24;
              v39 += 6;
              goto LABEL_54;
            }
            v41 = *((_DWORD *)v38 + 7);
            v42 = v39[7];
            if ( v41 != v42 )
              break;
            v38 += 32;
            v39 += 8;
          }
          v38 += 28;
          v39 += 7;
LABEL_54:
          if ( (_BYTE)v41 == (_BYTE)v42 )
          {
            if ( v38[1] == *((_BYTE *)v39 + 1) )
            {
              if ( v38[2] == *((_BYTE *)v39 + 2) )
              {
                v38 += 3;
                v39 = (_DWORD *)((char *)v39 + 3);
              }
              else
              {
                v38 += 2;
                v39 = (_DWORD *)((char *)v39 + 2);
              }
            }
            else
            {
              ++v38;
              v39 = (_DWORD *)((char *)v39 + 1);
            }
          }
LABEL_63:
          v43 = v38 - v32;
          v44 = (unsigned __int8 *)v39;
          v29 = (unsigned __int8 *)v39 - v43;
          if ( v43 <= v34 )
          {
            v33 += v43;
            goto LABEL_67;
          }
          v45 = v29;
          v34 = v43;
          v60 = v29;
          if ( v44 > v32 )
            goto LABEL_69;
        }
LABEL_67:
        ++v33;
      }
      while ( v33 < 0xC );
      v45 = v60;
LABEL_69:
      v14 = &v32[v34];
      v46 = v32 - v45;
      if ( v34 == 3 && v46 > 0x1000 )
        break;
      if ( v46 < 0x100 )
        v48 = XpressHighBitIndexTable[v46];
      else
        v48 = XpressHighBitIndexTable[v46 >> 8] + 8LL;
      v62 += v48;
      v49 = v18 + 1;
      v50 = v46 - (1LL << v48);
      v51 = 16 * v48;
      if ( v34 - 3 < 0xF )
      {
        v52 = v34 - 3 + v51;
        *v18 = v52;
        v54 = v18 + 1;
      }
      else
      {
        v52 = v51 + 15;
        v53 = v34 - 18;
        *v18 = v52;
        v54 = v18 + 2;
        if ( v34 - 18 >= 0xFF )
        {
          v56 = v53 + 15;
          *v49 = -1;
          if ( v56 >= 0x10000 )
          {
            *v54 = 0;
            v54 = v49 + 7;
            *(_DWORD *)(v49 + 3) = v56;
            v55 = 7LL;
          }
          else
          {
            *v54 = v56;
            v54 = v49 + 3;
            v55 = 3LL;
          }
        }
        else
        {
          *v49 = v53;
          v55 = 1LL;
        }
        v63 += v55;
      }
      ++*(_DWORD *)&a6[4 * v52 + 1340960];
      v47 = 2 * v20 + 1;
      *v54 = v50;
      v18 = (unsigned __int8 *)(v54 + 1);
      if ( v20 > 0 )
      {
LABEL_73:
        v20 = v47;
        goto LABEL_74;
      }
      v20 = 1;
LABEL_76:
      *v16 = v47;
      v16 = (int *)v18;
      v18 += 4;
LABEL_74:
      v22 = v61;
      v21 = XpressCallback;
    }
    v14 = v32;
LABEL_72:
    ++v14;
    ++*(_DWORD *)&a6[4 * (unsigned __int8)v28 + 1339936];
    *v18++ = v28;
    v47 = 2 * v20;
    if ( v20 > 0 )
      goto LABEL_73;
    v20 = 1;
    goto LABEL_76;
  }
  return 3221225507LL;
}
