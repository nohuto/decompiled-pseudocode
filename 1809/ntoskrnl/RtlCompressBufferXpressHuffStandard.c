/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x1402F93D0
 * Callers:
 *     RtlCompressBufferProgress @ 0x1401439F8 (RtlCompressBufferProgress.c)
 *     RtlCompressBufferXpressHuff @ 0x1402F8C90 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     RtlpMakeXpressCallback @ 0x140144288 (RtlpMakeXpressCallback.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     XpressBuildHuffmanEncodings @ 0x1402FB0A4 (XpressBuildHuffmanEncodings.c)
 *     XpressDoHuffmanPass @ 0x1402FB47C (XpressDoHuffmanPass.c)
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
  unsigned __int8 *v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rbp
  unsigned __int8 *v12; // rbx
  unsigned int v13; // ecx
  _DWORD *v14; // rsi
  void *v15; // rdi
  __int64 v16; // r15
  unsigned __int64 v17; // rdi
  unsigned __int8 *v18; // rcx
  int *v19; // r9
  int v20; // r15d
  unsigned __int64 v21; // r11
  unsigned __int8 *v22; // rsi
  unsigned __int8 v23; // al
  unsigned __int8 *v24; // r12
  unsigned __int8 *v25; // rbp
  _DWORD *v26; // rdx
  __int64 v27; // r10
  unsigned __int8 *v28; // r8
  unsigned __int8 v29; // di
  _BYTE *v30; // r13
  unsigned __int8 v31; // cl
  __int64 v32; // rdx
  unsigned __int8 *v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int8 v35; // r11
  char *v36; // r9
  unsigned __int8 v37; // r10
  __int64 v38; // rdx
  unsigned __int8 *v39; // rcx
  unsigned __int8 v40; // bp
  _BYTE *v41; // r10
  unsigned __int8 v42; // r11
  unsigned __int64 v43; // rdx
  unsigned __int8 *v44; // rcx
  unsigned __int8 *i; // r8
  unsigned __int64 v46; // rdi
  int v47; // ecx
  int v48; // eax
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
  int v64; // r8d
  __int64 v65; // rax
  bool v66; // zf
  unsigned __int64 v68; // [rsp+30h] [rbp-C8h]
  unsigned __int8 *v69; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v70; // [rsp+48h] [rbp-B0h]
  int *v71; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v72; // [rsp+58h] [rbp-A0h]
  __int64 v73; // [rsp+60h] [rbp-98h]
  __int64 v74; // [rsp+68h] [rbp-90h]
  __int64 v75; // [rsp+70h] [rbp-88h]
  unsigned __int64 v76; // [rsp+78h] [rbp-80h]
  unsigned __int8 *v77; // [rsp+80h] [rbp-78h]
  unsigned __int8 *v78; // [rsp+88h] [rbp-70h]
  unsigned __int64 v79; // [rsp+90h] [rbp-68h]
  __int64 v80; // [rsp+98h] [rbp-60h]
  _QWORD v81[2]; // [rsp+A0h] [rbp-58h] BYREF
  unsigned int v82; // [rsp+B0h] [rbp-48h]
  int v84; // [rsp+110h] [rbp+18h]

  v84 = a3;
  v9 = (unsigned __int8 *)a1;
  v10 = a1 + a2;
  v70 = v10;
  v79 = a3 + a4;
  if ( a4 >= 0x12C )
  {
    v75 = a3;
    v11 = a3;
    memset64(a6, a1, 0xAF6uLL);
    memset64(a6 + 5612, a1, 0x12EEuLL);
    v76 = v10 - 40;
    v12 = (unsigned __int8 *)a1;
    if ( !a7 || (v13 = a9, a9 > a2) )
      v13 = a2;
    v81[0] = a7;
    v14 = a6 + 23184;
    v15 = a6 + 22608;
    v16 = v13;
    v81[1] = a8;
    v82 = v13;
    v80 = v13;
    while ( 1 )
    {
      v73 = 0LL;
      v74 = 0LL;
      memset(v15, 0, 0x800uLL);
      v17 = (unsigned __int64)&v12[v16];
      v71 = v14;
      v18 = (unsigned __int8 *)v10;
      v19 = v14;
      if ( (unsigned __int64)(v12 + 0x10000) <= v10 )
        v18 = v12 + 0x10000;
      v20 = 1;
      v78 = v18;
      v21 = (unsigned __int64)(v18 - 40);
      v68 = (unsigned __int64)(v18 - 40);
      if ( (unsigned __int64)(v18 - 40) < v17 )
        v17 = (unsigned __int64)(v18 - 40);
      v22 = (unsigned __int8 *)(v14 + 1);
      v72 = v17;
      if ( v12 == v9 )
      {
        v20 = 2;
        ++a6[*v12 + 22608];
        v23 = *v12++;
        *v22++ = v23;
      }
      if ( (unsigned __int64)v12 < v21 )
        break;
LABEL_95:
      while ( v12 < v18 )
      {
        ++a6[*v12 + 22608];
        v62 = *v12++;
        *v22++ = v62;
        if ( v20 <= 0 )
        {
          *v19 = 2 * v20;
          v20 = 1;
          v19 = (int *)v22;
          v22 += 4;
        }
        else
        {
          v20 *= 2;
        }
      }
      while ( v20 > 0 )
        v20 = 2 * v20 + 1;
      *v19 = 2 * v20 + 1;
      if ( (unsigned __int64)v12 < v10 )
      {
        v63 = 0;
      }
      else
      {
        ++a6[22864];
        v63 = 1;
      }
      if ( v11 + v74 + 4 * ((unsigned __int64)(XpressBuildHuffmanEncodings(a6 + 15304) + v73 + 31) >> 5) + 258 >= v79 )
        return 3221225507LL;
      v64 = (int)v22;
      v14 = a6 + 23184;
      v65 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, v64, v11, v63);
      v16 = v80;
      v66 = v63 == 0;
      v75 = v65;
      v15 = a6 + 22608;
      v11 = v65;
      if ( !v66 )
      {
        *a5 = v65 - v84;
        return 0LL;
      }
    }
    while ( 1 )
    {
      v24 = v12 + 1;
      v25 = v12;
      v69 = v12;
      v26 = &a6[2 * *v12];
      v27 = v12[2] + 4LL * v12[1];
      v28 = *(unsigned __int8 **)&v26[4 * v27];
      *(_QWORD *)&v26[4 * v27] = v12;
      if ( *(_WORD *)v28 != *(_WORD *)v12 || v28[2] != v12[2] || v12 - v28 >= 0x10000 )
        goto LABEL_42;
      v29 = v28[3];
      v30 = v12 + 3;
      v31 = v12[3];
      v77 = v12;
      if ( v31 == v29 )
        goto LABEL_20;
      v32 = *v12 + 2 * v27;
      v33 = *(unsigned __int8 **)&a6[2 * v32 + 5612 + 2 * v31];
      *(_QWORD *)&a6[2 * v32 + 5612 + 2 * v29] = v28;
      if ( v12 - v33 < 0x10000 )
      {
        v34 = *(unsigned int *)v12;
        if ( (_DWORD)v34 == *(_DWORD *)v33 )
          break;
      }
      v12 += 3;
      i = v28 + 3;
LABEL_38:
      v10 = v70;
LABEL_39:
      v46 = v12 - i;
      if ( v12 - v77 != 3 || v46 <= 0x1000 )
      {
        if ( v46 < 0x100 )
          v50 = XpressHighBitIndexTable[v46];
        else
          v50 = XpressHighBitIndexTable[v46 >> 8] + 8LL;
        v73 += v50;
        v51 = v12 - v77 - 3;
        v52 = v46 - (1LL << v50);
        v53 = 16 * v50;
        v54 = v22 + 1;
        if ( v51 < 0xF )
        {
          v55 = v51 + v53;
          *v22 = v55;
          v57 = v22 + 1;
        }
        else
        {
          v55 = v53 + 15;
          v56 = v12 - v77 - 18;
          *v22 = v55;
          v57 = v22 + 2;
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
          v74 += v58;
        }
        ++a6[v55 + 22864];
        v60 = 2 * v20 + 1;
        *v57 = v52;
        v22 = (unsigned __int8 *)(v57 + 1);
        if ( v20 <= 0 )
        {
          v61 = v71;
          v19 = (int *)v22;
          v71 = (int *)v22;
          v20 = 1;
          v22 += 4;
          *v61 = v60;
        }
        else
        {
          v19 = v71;
          v20 = 2 * v20 + 1;
        }
        v17 = v72;
        goto LABEL_73;
      }
      v17 = v72;
      v19 = v71;
LABEL_42:
      v12 = v24;
      ++a6[*v25 + 22608];
      *v22++ = *v25;
      if ( v20 <= 0 )
      {
        *v19 = 2 * v20;
        v20 = 1;
        v19 = (int *)v22;
        v71 = (int *)v22;
        v22 += 4;
LABEL_73:
        if ( (unsigned __int64)v12 >= v17 )
        {
          if ( (unsigned __int64)v12 >= v21 )
          {
            v11 = v75;
            v9 = (unsigned __int8 *)a1;
            v18 = v78;
            goto LABEL_95;
          }
          XpressCallback = RtlpMakeXpressCallback((__int64)v81, v21, (__int64)v12);
          v21 = v68;
          v17 = XpressCallback;
          v19 = v71;
          v72 = XpressCallback;
        }
      }
      else
      {
        v20 *= 2;
      }
    }
    v28 = v33;
    *(_QWORD *)&a6[2 * v32 + 5612 + 2 * (v34 >> 24)] = v12;
LABEL_20:
    v35 = v28[4];
    v36 = (char *)(v12 + 4);
    v37 = v12[4];
    if ( v37 != v35 )
    {
      v38 = 2
          * ((unsigned __int8)__ROR1__(*v24 ^ __ROL1__(*v12 + *v30, 3), 1)
           + 4LL * (unsigned __int8)__ROL1__(*v12 ^ __ROR1__(v12[2] + *v24 + 97, 1), 3));
      v39 = *(unsigned __int8 **)&a6[2 * v38 + 5612 + 2 * v37];
      *(_QWORD *)&a6[2 * v38 + 5612 + 2 * v35] = v28;
      if ( v12 - v39 >= 0x10000 || *(_DWORD *)v12 != *(_DWORD *)v39 || *v36 != v39[4] || v12 == v39 )
      {
        v12 += 4;
        i = v28 + 4;
LABEL_37:
        v25 = v69;
        v21 = v68;
        goto LABEL_38;
      }
      v28 = v39;
      *(_QWORD *)&a6[2 * v38 + 5612 + 2 * (unsigned __int8)*v36] = v12;
    }
    v40 = v28[5];
    v41 = v12 + 5;
    v42 = v12[5];
    if ( v42 == v40 )
      goto LABEL_33;
    v43 = 2
        * ((v12[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v12, *v36))
         + 4
         * ((unsigned __int8)__ROR1__(*v24 ^ __ROL1__(*v30, 3), 1)
          + (unsigned __int64)(unsigned __int8)__ROL1__(*v36 ^ (__ROR1__(*v12, 1) + 69), 3)));
    v44 = *(unsigned __int8 **)&a6[2 * v43 + 5612 + 2 * v42];
    *(_QWORD *)&a6[2 * v43 + 5612 + 2 * v40] = v28;
    if ( v12 - v44 < 0x10000 && *(_DWORD *)v12 == *(_DWORD *)v44 && *v36 == v44[4] && *v41 == v44[5] && v12 != v44 )
    {
      v28 = v44;
      *(_QWORD *)&a6[2 * v43 + 5612 + 2 * (unsigned __int8)*v41] = v12;
LABEL_33:
      v12 += 6;
      for ( i = v28 + 6; ; i += 32 )
      {
        if ( (unsigned __int64)v12 >= v76 )
        {
          v10 = v70;
          while ( (unsigned __int64)v12 < v70 && *v12 == *i )
          {
            ++v12;
            ++i;
          }
          v21 = v68;
          v25 = v69;
          goto LABEL_39;
        }
        v47 = *(_DWORD *)v12;
        v48 = *(_DWORD *)i;
        if ( *(_DWORD *)v12 != *(_DWORD *)i )
          break;
        v47 = *((_DWORD *)v12 + 1);
        v48 = *((_DWORD *)i + 1);
        if ( v47 != v48 )
        {
          v12 += 4;
          i += 4;
          break;
        }
        v47 = *((_DWORD *)v12 + 2);
        v48 = *((_DWORD *)i + 2);
        if ( v47 != v48 )
        {
          v12 += 8;
          i += 8;
          break;
        }
        v47 = *((_DWORD *)v12 + 3);
        v48 = *((_DWORD *)i + 3);
        if ( v47 != v48 )
        {
          v12 += 12;
          i += 12;
          break;
        }
        v47 = *((_DWORD *)v12 + 4);
        v48 = *((_DWORD *)i + 4);
        if ( v47 != v48 )
        {
          v12 += 16;
          i += 16;
          break;
        }
        v47 = *((_DWORD *)v12 + 5);
        v48 = *((_DWORD *)i + 5);
        if ( v47 != v48 )
        {
          v12 += 20;
          i += 20;
          break;
        }
        v47 = *((_DWORD *)v12 + 6);
        v48 = *((_DWORD *)i + 6);
        if ( v47 != v48 )
        {
          v12 += 24;
          i += 24;
          break;
        }
        v47 = *((_DWORD *)v12 + 7);
        v48 = *((_DWORD *)i + 7);
        if ( v47 != v48 )
        {
          v12 += 28;
          i += 28;
          break;
        }
        v12 += 32;
      }
      if ( (_BYTE)v47 != (_BYTE)v48 )
        goto LABEL_37;
      if ( v12[1] != i[1] )
      {
        ++v12;
        ++i;
        goto LABEL_37;
      }
      v21 = v68;
      v25 = v69;
      v10 = v70;
      if ( v12[2] == i[2] )
      {
        v12 += 3;
        i += 3;
      }
      else
      {
        v12 += 2;
        i += 2;
      }
      goto LABEL_39;
    }
    v12 += 5;
    i = v28 + 5;
    goto LABEL_37;
  }
  return 3221225507LL;
}
