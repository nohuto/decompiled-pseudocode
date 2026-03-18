/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x140316330
 * Callers:
 *     RtlCompressBufferProgress @ 0x14015F500 (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressHuff @ 0x140315B50 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140165D30 (RtlpMakeXpressCallback.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     XpressBuildHuffmanEncodings @ 0x140319268 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x140319648 (XpressDoHuffmanPass.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v9; // rsi
  unsigned __int8 *v10; // r13
  unsigned __int8 *v11; // rbx
  __int64 v12; // rbp
  unsigned int v13; // ecx
  unsigned __int8 *v14; // rdi
  void *v15; // r9
  __int64 v16; // r14
  unsigned __int64 v17; // r12
  unsigned __int8 *v18; // rdx
  bool v19; // cc
  int v20; // r14d
  unsigned __int8 *v21; // rsi
  unsigned __int64 v22; // r11
  unsigned __int8 v23; // al
  unsigned __int8 *v24; // rbp
  unsigned __int8 *v25; // r9
  _DWORD *v26; // rdx
  __int64 v27; // r10
  unsigned __int8 *v28; // r8
  unsigned __int8 v29; // cl
  unsigned __int8 v30; // r9
  __int64 v31; // rdx
  unsigned __int8 *v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int8 v34; // r11
  unsigned __int8 v35; // bp
  __int64 v36; // rdx
  unsigned __int8 *v37; // rcx
  unsigned __int8 v38; // al
  unsigned __int8 v39; // r11
  unsigned __int8 v40; // bp
  unsigned __int64 v41; // rdx
  unsigned __int8 *v42; // rcx
  unsigned __int8 v43; // al
  unsigned __int8 *v44; // r8
  int v45; // ecx
  int v46; // eax
  unsigned __int64 i; // rcx
  unsigned __int64 v48; // rdi
  unsigned __int64 XpressCallback; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rdi
  char v53; // cl
  _BYTE *v54; // rax
  unsigned __int8 v55; // cl
  unsigned __int64 v56; // rdx
  _WORD *v57; // rsi
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  int v60; // eax
  int *v61; // rcx
  unsigned __int8 v62; // al
  int v63; // edi
  __int64 v64; // rax
  bool v65; // zf
  unsigned __int64 v67; // [rsp+30h] [rbp-C8h]
  unsigned __int8 *v68; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v69; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+48h] [rbp-B0h]
  unsigned __int8 *v71; // [rsp+50h] [rbp-A8h]
  __int64 v72; // [rsp+58h] [rbp-A0h]
  __int64 v73; // [rsp+60h] [rbp-98h]
  __int64 v74; // [rsp+68h] [rbp-90h]
  unsigned __int64 v75; // [rsp+70h] [rbp-88h]
  unsigned __int8 *v76; // [rsp+78h] [rbp-80h]
  unsigned __int8 *v77; // [rsp+80h] [rbp-78h]
  unsigned __int8 *v78; // [rsp+88h] [rbp-70h]
  unsigned __int64 v79; // [rsp+90h] [rbp-68h]
  __int64 v80; // [rsp+98h] [rbp-60h]
  _QWORD v81[2]; // [rsp+A0h] [rbp-58h] BYREF
  unsigned int v82; // [rsp+B0h] [rbp-48h]
  int v83; // [rsp+B4h] [rbp-44h]
  int v85; // [rsp+110h] [rbp+18h]

  v85 = a3;
  v83 = 0;
  v9 = a1 + a2;
  v10 = (unsigned __int8 *)a1;
  v67 = v9;
  v79 = a3 + a4;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v74 = a3;
  v11 = (unsigned __int8 *)a1;
  memset64(a6, a1, 0xAF6uLL);
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v12 = a3;
  v75 = v9 - 40;
  if ( !a7 || (v13 = a9, a9 > a2) )
    v13 = a2;
  v81[0] = a7;
  v14 = (unsigned __int8 *)(a6 + 23184);
  v15 = a6 + 22608;
  v16 = v13;
  v81[1] = a8;
  v82 = v13;
  v80 = v13;
  while ( 2 )
  {
    v72 = 0LL;
    v73 = 0LL;
    memset(v15, 0, 0x800uLL);
    v17 = (unsigned __int64)&v11[v16];
    v71 = v14;
    v18 = (unsigned __int8 *)v9;
    v19 = (unsigned __int64)(v11 + 0x10000) <= v9;
    v20 = 1;
    v21 = (unsigned __int8 *)(a6 + 23185);
    if ( v19 )
      v18 = v11 + 0x10000;
    v78 = v18;
    v22 = (unsigned __int64)(v18 - 40);
    v69 = (unsigned __int64)(v18 - 40);
    if ( (unsigned __int64)(v18 - 40) < v17 )
      v17 = (unsigned __int64)(v18 - 40);
    v70 = v17;
    if ( v11 == v10 )
    {
      v20 = 2;
      ++a6[*v11 + 22608];
      v23 = *v11++;
      *v21 = v23;
      v21 = (unsigned __int8 *)a6 + 92741;
    }
    if ( (unsigned __int64)v11 >= v22 )
    {
      i = v67;
      goto LABEL_95;
    }
    do
    {
      while ( 1 )
      {
        v24 = v11 + 1;
        v25 = v11;
        v77 = v11;
        v68 = v11 + 1;
        v26 = &a6[2 * *v11];
        v27 = v11[2] + 4LL * v11[1];
        v28 = *(unsigned __int8 **)&v26[4 * v27];
        *(_QWORD *)&v26[4 * v27] = v11;
        if ( *(_WORD *)v28 != *(_WORD *)v11 || v28[2] != v11[2] || v11 - v28 >= 0x10000 )
        {
          i = v67;
          goto LABEL_71;
        }
        v29 = v11[3];
        v30 = v28[3];
        v76 = v11;
        if ( v29 != v30 )
        {
          v31 = *v11 + 2 * v27;
          v32 = *(unsigned __int8 **)&a6[2 * v31 + 5612 + 2 * v29];
          *(_QWORD *)&a6[2 * v31 + 5612 + 2 * v30] = v28;
          if ( v11 - v32 >= 0x10000 || (v33 = *(unsigned int *)v11, (_DWORD)v33 != *(_DWORD *)v32) )
          {
            v11 += 3;
            v44 = v28 + 3;
            goto LABEL_63;
          }
          v28 = v32;
          *(_QWORD *)&a6[2 * v31 + 5612 + 2 * (v33 >> 24)] = v11;
        }
        v34 = v11[4];
        v35 = v28[4];
        if ( v34 != v35 )
        {
          v36 = 2
              * ((unsigned __int8)__ROR1__(*v68 ^ __ROL1__(v11[3] + *v11, 3), 1)
               + 4LL * (unsigned __int8)__ROL1__(*v11 ^ __ROR1__(v11[2] + *v68 + 97, 1), 3));
          v37 = *(unsigned __int8 **)&a6[2 * v36 + 5612 + 2 * v34];
          *(_QWORD *)&a6[2 * v36 + 5612 + 2 * v35] = v28;
          if ( v11 - v37 >= 0x10000 || *(_DWORD *)v11 != *(_DWORD *)v37 || (v38 = v11[4], v38 != v37[4]) || v11 == v37 )
          {
            v11 += 4;
            v44 = v28 + 4;
            goto LABEL_61;
          }
          v28 = v37;
          *(_QWORD *)&a6[2 * v36 + 5612 + 2 * v38] = v11;
        }
        v39 = v11[5];
        v40 = v28[5];
        if ( v39 != v40 )
        {
          v41 = 2
              * ((v11[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v11, v11[4]))
               + 4
               * ((unsigned __int8)__ROR1__(*v68 ^ __ROL1__(v11[3], 3), 1)
                + (unsigned __int64)(unsigned __int8)__ROL1__(v11[4] ^ (__ROR1__(*v11, 1) + 69), 3)));
          v42 = *(unsigned __int8 **)&a6[2 * v41 + 5612 + 2 * v39];
          *(_QWORD *)&a6[2 * v41 + 5612 + 2 * v40] = v28;
          if ( v11 - v42 >= 0x10000
            || *(_DWORD *)v11 != *(_DWORD *)v42
            || v11[4] != v42[4]
            || (v43 = v11[5], v43 != v42[5])
            || v11 == v42 )
          {
            v17 = v70;
            v11 += 5;
            v44 = v28 + 5;
            v24 = v68;
            goto LABEL_62;
          }
          v28 = v42;
          *(_QWORD *)&a6[2 * v41 + 5612 + 2 * v43] = v11;
        }
        v11 += 6;
        v44 = v28 + 6;
        if ( (unsigned __int64)v11 >= v75 )
        {
LABEL_43:
          for ( i = v67; (unsigned __int64)v11 < v67; ++v44 )
          {
            if ( *v11 != *v44 )
              break;
            ++v11;
          }
          v22 = v69;
          v17 = v70;
          v24 = v68;
        }
        else
        {
          while ( 1 )
          {
            v45 = *(_DWORD *)v11;
            v46 = *(_DWORD *)v44;
            if ( *(_DWORD *)v11 != *(_DWORD *)v44 )
              break;
            v45 = *((_DWORD *)v11 + 1);
            v46 = *((_DWORD *)v44 + 1);
            if ( v45 != v46 )
            {
              v11 += 4;
              v44 += 4;
              break;
            }
            v45 = *((_DWORD *)v11 + 2);
            v46 = *((_DWORD *)v44 + 2);
            if ( v45 != v46 )
            {
              v11 += 8;
              v44 += 8;
              break;
            }
            v45 = *((_DWORD *)v11 + 3);
            v46 = *((_DWORD *)v44 + 3);
            if ( v45 != v46 )
            {
              v11 += 12;
              v44 += 12;
              break;
            }
            v45 = *((_DWORD *)v11 + 4);
            v46 = *((_DWORD *)v44 + 4);
            if ( v45 != v46 )
            {
              v11 += 16;
              v44 += 16;
              break;
            }
            v45 = *((_DWORD *)v11 + 5);
            v46 = *((_DWORD *)v44 + 5);
            if ( v45 != v46 )
            {
              v11 += 20;
              v44 += 20;
              break;
            }
            v45 = *((_DWORD *)v11 + 6);
            v46 = *((_DWORD *)v44 + 6);
            if ( v45 != v46 )
            {
              v11 += 24;
              v44 += 24;
              break;
            }
            v45 = *((_DWORD *)v11 + 7);
            v46 = *((_DWORD *)v44 + 7);
            if ( v45 != v46 )
            {
              v11 += 28;
              v44 += 28;
              break;
            }
            v11 += 32;
            v44 += 32;
            if ( (unsigned __int64)v11 >= v75 )
              goto LABEL_43;
          }
          if ( (_BYTE)v45 != (_BYTE)v46 )
            goto LABEL_60;
          if ( v11[1] != v44[1] )
          {
            ++v11;
            ++v44;
LABEL_60:
            v17 = v70;
LABEL_61:
            v24 = v68;
LABEL_62:
            v22 = v69;
LABEL_63:
            i = v67;
            goto LABEL_64;
          }
          v22 = v69;
          v17 = v70;
          v24 = v68;
          i = v67;
          if ( v11[2] == v44[2] )
          {
            v11 += 3;
            v44 += 3;
          }
          else
          {
            v11 += 2;
            v44 += 2;
          }
        }
LABEL_64:
        v48 = v11 - v44;
        if ( v11 - v76 != 3 || v48 <= 0x1000 )
          break;
        v14 = v71;
        v25 = v77;
LABEL_71:
        v11 = v24;
        ++a6[*v25 + 22608];
        *v21++ = *v25;
        if ( v20 <= 0 )
        {
          *(_DWORD *)v14 = 2 * v20;
          v20 = 1;
          v14 = v21;
          v71 = v21;
          v21 += 4;
          if ( (unsigned __int64)v24 >= v17 )
          {
            if ( (unsigned __int64)v24 >= v22 )
              goto LABEL_93;
LABEL_75:
            XpressCallback = RtlpMakeXpressCallback((__int64)v81, v22, (__int64)v11);
            v22 = v69;
            v17 = XpressCallback;
            v70 = XpressCallback;
          }
        }
        else
        {
          v20 *= 2;
        }
      }
      if ( v48 < 0x100 )
        v50 = XpressHighBitIndexTable[v48];
      else
        v50 = XpressHighBitIndexTable[v48 >> 8] + 8LL;
      v72 += v50;
      v51 = v11 - v76 - 3;
      v52 = v48 - (1LL << v50);
      v53 = 16 * v50;
      v54 = v21 + 1;
      if ( v51 < 0xF )
      {
        v55 = v51 + v53;
        *v21 = v55;
        v57 = v21 + 1;
      }
      else
      {
        v55 = v53 + 15;
        v56 = v11 - v76 - 18;
        *v21 = v55;
        v57 = v21 + 2;
        if ( v56 >= 0xFF )
        {
          v59 = v56 + 15;
          *v54 = -1;
          if ( v59 >= 0x10000 )
          {
            *v57 = 0;
            v57 = v54 + 7;
            *(_DWORD *)(v54 + 3) = v59;
            v58 = 7LL;
          }
          else
          {
            *v57 = v59;
            v57 = v54 + 3;
            v58 = 3LL;
          }
        }
        else
        {
          *v54 = v56;
          v58 = 1LL;
        }
        v73 += v58;
      }
      ++a6[v55 + 22864];
      v60 = 2 * v20 + 1;
      *v57 = v52;
      v21 = (unsigned __int8 *)(v57 + 1);
      if ( v20 <= 0 )
      {
        v61 = (int *)v71;
        v14 = v21;
        v71 = v21;
        v20 = 1;
        v21 += 4;
        *v61 = v60;
      }
      else
      {
        v14 = v71;
        v20 = 2 * v20 + 1;
      }
    }
    while ( (unsigned __int64)v11 < v17 );
    if ( (unsigned __int64)v11 < v22 )
      goto LABEL_75;
    i = v67;
LABEL_93:
    v12 = v74;
    v10 = (unsigned __int8 *)a1;
    v18 = v78;
LABEL_95:
    while ( v11 < v18 )
    {
      ++a6[*v11 + 22608];
      v62 = *v11++;
      *v21++ = v62;
      if ( v20 <= 0 )
      {
        *(_DWORD *)v14 = 2 * v20;
        v20 = 1;
        v14 = v21;
        v21 += 4;
      }
      else
      {
        v20 *= 2;
      }
    }
    for ( ; v20 > 0; v20 = 2 * v20 + 1 )
      ;
    *(_DWORD *)v14 = 2 * v20 + 1;
    if ( (unsigned __int64)v11 < i )
    {
      v63 = 0;
    }
    else
    {
      ++a6[22864];
      v63 = 1;
    }
    if ( v12 + v73 + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings(a6 + 15304) + v72 + 31) >> 5) + 258 < v79 )
    {
      v64 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, (_DWORD)v21, v12, v63);
      v9 = v67;
      v15 = a6 + 22608;
      v16 = v80;
      v65 = v63 == 0;
      v14 = (unsigned __int8 *)(a6 + 23184);
      v74 = v64;
      v12 = v64;
      if ( !v65 )
      {
        *a5 = v64 - v85;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}
