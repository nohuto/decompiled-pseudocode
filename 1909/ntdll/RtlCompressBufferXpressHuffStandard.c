/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x18005E580
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x18005E520 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x18005EDA0 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x18005F090 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpMakeXpressCallback @ 0x18010A204 (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int8 *v8; // r15
  unsigned __int8 *v9; // rdi
  void *v10; // r9
  __int64 v11; // r12
  __int64 v12; // r13
  unsigned __int64 XpressCallback; // rbp
  unsigned __int8 *v14; // rcx
  bool v15; // cc
  int v16; // r14d
  unsigned __int8 *v17; // rbx
  unsigned __int8 v18; // al
  unsigned __int8 *v19; // r10
  unsigned __int8 *v20; // r11
  _DWORD *v21; // rdx
  __int64 v22; // r8
  unsigned __int8 *v23; // r9
  unsigned __int8 v24; // r15
  _BYTE *v25; // r13
  unsigned __int8 v26; // bp
  unsigned __int8 v27; // r15
  char *v28; // rax
  unsigned __int8 v29; // bp
  unsigned __int8 v30; // bp
  unsigned __int8 v31; // r15
  unsigned __int8 *v32; // r9
  int v33; // eax
  int v34; // ecx
  unsigned __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  char v38; // cl
  unsigned __int64 v39; // r8
  _BYTE *v40; // rax
  unsigned __int8 v41; // cl
  _WORD *v42; // rbx
  int v43; // eax
  unsigned __int64 v44; // rax
  unsigned __int8 v45; // al
  int v46; // ebp
  __int64 v47; // rax
  __int64 v49; // r8
  unsigned __int8 *v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // r8
  unsigned __int8 *v53; // rdx
  unsigned __int64 v54; // r8
  unsigned __int8 *v55; // rdx
  unsigned __int8 v56; // al
  unsigned __int64 v57; // r8
  __int64 v58; // rax
  int *v59; // rcx
  unsigned __int64 v60; // r8
  unsigned __int8 *v61; // r8
  unsigned __int64 v62; // [rsp+30h] [rbp-A8h]
  __int64 v63; // [rsp+38h] [rbp-A0h]
  __int64 v64; // [rsp+40h] [rbp-98h]
  unsigned __int64 v65; // [rsp+48h] [rbp-90h]
  unsigned __int64 v66; // [rsp+50h] [rbp-88h]
  __int64 v67; // [rsp+58h] [rbp-80h]
  unsigned __int8 *v68; // [rsp+70h] [rbp-68h]
  unsigned __int64 v69; // [rsp+78h] [rbp-60h]
  __int64 v70; // [rsp+80h] [rbp-58h]
  _QWORD v71[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v72; // [rsp+98h] [rbp-40h]
  int v74; // [rsp+F0h] [rbp+18h]
  unsigned __int8 *v75; // [rsp+110h] [rbp+38h]
  _BYTE *v76; // [rsp+118h] [rbp+40h]

  v74 = a3;
  v6 = a2;
  v70 = a2;
  v69 = a3 + a4;
  v7 = a2 + a1;
  v65 = v7;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v67 = a3;
  v71[0] = 0LL;
  v71[1] = 0LL;
  memset64(a6, a1, 0xAF6uLL);
  v72 = a2;
  v8 = (unsigned __int8 *)(a6 + 23184);
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v9 = (unsigned __int8 *)a1;
  v10 = a6 + 22608;
  while ( 2 )
  {
    v11 = 0LL;
    v63 = 0LL;
    v12 = 0LL;
    v64 = 0LL;
    memset(v10, 0, 0x800uLL);
    XpressCallback = (unsigned __int64)&v9[v6];
    v75 = v8;
    v14 = (unsigned __int8 *)v7;
    v15 = (unsigned __int64)(v9 + 0x10000) <= v7;
    v16 = 1;
    v17 = (unsigned __int8 *)(a6 + 23185);
    if ( v15 )
      v14 = v9 + 0x10000;
    v68 = v14;
    v66 = (unsigned __int64)(v14 - 40);
    if ( (unsigned __int64)(v14 - 40) < XpressCallback )
      XpressCallback = (unsigned __int64)(v14 - 40);
    v62 = XpressCallback;
    if ( v9 == (unsigned __int8 *)a1 )
    {
      v16 = 2;
      ++a6[*v9 + 22608];
      v18 = *v9++;
      *v17 = v18;
      v17 = (unsigned __int8 *)a6 + 92741;
    }
    if ( v9 >= v14 - 40 )
      goto LABEL_31;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = v9 + 1;
          v20 = v9;
          v21 = &a6[2 * *v9];
          v22 = v9[2] + 4LL * v9[1];
          v23 = *(unsigned __int8 **)&v21[4 * v22];
          *(_QWORD *)&v21[4 * v22] = v9;
          if ( *(_WORD *)v23 != *(_WORD *)v9 || v23[2] != v9[2] || v9 - v23 >= 0x10000 )
            break;
          v24 = v9[3];
          v25 = v9 + 3;
          v26 = v23[3];
          if ( v24 != v26 )
          {
            v49 = *v9 + 2 * v22;
            v50 = *(unsigned __int8 **)&a6[2 * v49 + 5612 + 2 * v24];
            *(_QWORD *)&a6[2 * v49 + 5612 + 2 * v26] = v23;
            if ( v9 - v50 >= 0x10000 || (v51 = *(unsigned int *)v9, (_DWORD)v51 != *(_DWORD *)v50) )
            {
              v9 += 3;
              v32 = v23 + 3;
              goto LABEL_21;
            }
            v23 = v50;
            *(_QWORD *)&a6[2 * v49 + 5612 + 2 * (v51 >> 24)] = v9;
          }
          v27 = v9[4];
          v28 = (char *)(v9 + 4);
          v29 = v23[4];
          v76 = v9 + 4;
          if ( v27 != v29 )
          {
            v52 = 2
                * ((unsigned __int8)__ROR1__(*v19 ^ __ROL1__(*v9 + *v25, 3), 1)
                 + 4LL * (unsigned __int8)__ROL1__(*v9 ^ __ROR1__(v9[2] + *v19 + 97, 1), 3));
            v53 = *(unsigned __int8 **)&a6[2 * v52 + 5612 + 2 * v27];
            *(_QWORD *)&a6[2 * v52 + 5612 + 2 * v29] = v23;
            if ( v9 - v53 >= 0x10000 || *(_DWORD *)v9 != *(_DWORD *)v53 || *v76 != v53[4] || v9 == v53 )
            {
              v9 += 4;
              v32 = v23 + 4;
              goto LABEL_21;
            }
            v23 = v53;
            *(_QWORD *)&a6[2 * v52 + 5612 + 2 * (unsigned __int8)*v76] = v9;
            v28 = (char *)(v9 + 4);
          }
          v30 = v23[5];
          v31 = v9[5];
          if ( v31 != v30 )
          {
            v54 = 2
                * ((v9[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v9, *v28))
                 + 4
                 * ((unsigned __int8)__ROR1__(*v19 ^ __ROL1__(*v25, 3), 1)
                  + (unsigned __int64)(unsigned __int8)__ROL1__(*v28 ^ (__ROR1__(*v9, 1) + 69), 3)));
            v55 = *(unsigned __int8 **)&a6[2 * v54 + 5612 + 2 * v31];
            *(_QWORD *)&a6[2 * v54 + 5612 + 2 * v30] = v23;
            if ( v9 - v55 >= 0x10000
              || *(_DWORD *)v9 != *(_DWORD *)v55
              || *v76 != v55[4]
              || (v56 = v9[5], v56 != v55[5])
              || v9 == v55 )
            {
              v9 += 5;
              v32 = v23 + 5;
              goto LABEL_21;
            }
            v23 = v55;
            *(_QWORD *)&a6[2 * v54 + 5612 + 2 * v56] = v9;
          }
          v9 += 6;
          v32 = v23 + 6;
          if ( (unsigned __int64)v9 >= v65 - 40 )
          {
LABEL_56:
            while ( (unsigned __int64)v9 < v65 )
            {
              if ( *v9 != *v32 )
                break;
              ++v9;
              ++v32;
            }
          }
          else
          {
            while ( 1 )
            {
              v33 = *(_DWORD *)v32;
              v34 = *(_DWORD *)v9;
              if ( *(_DWORD *)v9 != *(_DWORD *)v32 )
                break;
              v33 = *((_DWORD *)v32 + 1);
              v34 = *((_DWORD *)v9 + 1);
              if ( v34 != v33 )
              {
                v9 += 4;
                v32 += 4;
                break;
              }
              v33 = *((_DWORD *)v32 + 2);
              v34 = *((_DWORD *)v9 + 2);
              if ( v34 != v33 )
              {
                v9 += 8;
                v32 += 8;
                break;
              }
              v33 = *((_DWORD *)v32 + 3);
              v34 = *((_DWORD *)v9 + 3);
              if ( v34 != v33 )
              {
                v9 += 12;
                v32 += 12;
                break;
              }
              v33 = *((_DWORD *)v32 + 4);
              v34 = *((_DWORD *)v9 + 4);
              if ( v34 != v33 )
              {
                v9 += 16;
                v32 += 16;
                break;
              }
              v33 = *((_DWORD *)v32 + 5);
              v34 = *((_DWORD *)v9 + 5);
              if ( v34 != v33 )
              {
                v9 += 20;
                v32 += 20;
                break;
              }
              v33 = *((_DWORD *)v32 + 6);
              v34 = *((_DWORD *)v9 + 6);
              if ( v34 != v33 )
              {
                v9 += 24;
                v32 += 24;
                break;
              }
              v33 = *((_DWORD *)v32 + 7);
              v34 = *((_DWORD *)v9 + 7);
              if ( v34 != v33 )
              {
                v9 += 28;
                v32 += 28;
                break;
              }
              v9 += 32;
              v32 += 32;
              if ( (unsigned __int64)v9 >= v65 - 40 )
                goto LABEL_56;
            }
            if ( (_BYTE)v34 == (_BYTE)v33 )
            {
              if ( v9[1] == v32[1] )
              {
                if ( v9[2] == v32[2] )
                {
                  v9 += 3;
                  v32 += 3;
                }
                else
                {
                  v9 += 2;
                  v32 += 2;
                }
              }
              else
              {
                ++v9;
                ++v32;
              }
            }
          }
LABEL_21:
          v35 = v9 - v32;
          if ( v9 - v20 == 3 && v35 > 0x1000 )
          {
            XpressCallback = v62;
            v8 = v75;
            break;
          }
          if ( v35 >= 0x100 )
            v36 = XpressHighBitIndexTable[v35 >> 8] + 8LL;
          else
            v36 = XpressHighBitIndexTable[v35];
          v11 = v36 + v63;
          v37 = v35 - (1LL << v36);
          v38 = 16 * v36;
          v39 = v9 - v20 - 3;
          v63 = v11;
          v40 = v17 + 1;
          if ( v39 >= 0xF )
          {
            v41 = v38 + 15;
            v57 = v9 - v20 - 18;
            *v17 = v41;
            v42 = v17 + 2;
            if ( v57 >= 0xFF )
            {
              v60 = v57 + 15;
              *v40 = -1;
              if ( v60 < 0x10000 )
              {
                *v42 = v60;
                v42 = v40 + 3;
                v64 += 3LL;
                goto LABEL_26;
              }
              *v42 = 0;
              v42 = v40 + 7;
              *(_DWORD *)(v40 + 3) = v60;
              v58 = 7LL;
            }
            else
            {
              *v40 = v57;
              v58 = 1LL;
            }
            v64 += v58;
          }
          else
          {
            v41 = v39 + v38;
            *v17 = v41;
            v42 = v17 + 1;
          }
LABEL_26:
          ++a6[v41 + 22864];
          v43 = 2 * v16 + 1;
          *v42 = v37;
          v17 = (unsigned __int8 *)(v42 + 1);
          if ( v16 <= 0 )
          {
            v59 = (int *)v75;
            v16 = 1;
            v75 = v17;
            v17 += 4;
            *v59 = v43;
          }
          else
          {
            v16 = 2 * v16 + 1;
          }
          XpressCallback = v62;
          v8 = v75;
          if ( (unsigned __int64)v9 >= v62 )
          {
            v44 = v66;
            if ( (unsigned __int64)v9 >= v66 )
              goto LABEL_30;
            v61 = v9;
LABEL_100:
            XpressCallback = RtlpMakeXpressCallback(v71, v44, v61);
            v62 = XpressCallback;
          }
        }
        v9 = v19;
        ++a6[*v20 + 22608];
        *v17++ = *v20;
        if ( v16 <= 0 )
          break;
        v16 *= 2;
      }
      *(_DWORD *)v8 = 2 * v16;
      v16 = 1;
      v8 = v17;
      v75 = v17;
      v17 += 4;
    }
    while ( (unsigned __int64)v19 < XpressCallback );
    v44 = v66;
    if ( (unsigned __int64)v19 < v66 )
    {
      v61 = v19;
      goto LABEL_100;
    }
    v11 = v63;
LABEL_30:
    v12 = v64;
    v14 = v68;
LABEL_31:
    while ( v9 < v14 )
    {
      ++a6[*v9 + 22608];
      v45 = *v9++;
      *v17++ = v45;
      if ( v16 <= 0 )
      {
        *(_DWORD *)v8 = 2 * v16;
        v16 = 1;
        v8 = v17;
        v17 += 4;
      }
      else
      {
        v16 *= 2;
      }
    }
    for ( ; v16 > 0; v16 = 2 * v16 + 1 )
      ;
    *(_DWORD *)v8 = 2 * v16 + 1;
    if ( (unsigned __int64)v9 < v65 )
    {
      v46 = 0;
    }
    else
    {
      ++a6[22864];
      v46 = 1;
    }
    if ( v12 + 4 * ((unsigned __int64)(v11 + XpressBuildHuffmanEncodings(a6 + 15304) + 31) >> 5) + v67 + 258 < v69 )
    {
      v8 = (unsigned __int8 *)(a6 + 23184);
      v47 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, (_DWORD)v17, v67, v46);
      v7 = v65;
      v6 = v70;
      v10 = a6 + 22608;
      v67 = v47;
      if ( v46 )
      {
        *a5 = v47 - v74;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}
