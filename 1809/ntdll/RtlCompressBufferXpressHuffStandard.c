/*
 * XREFs of RtlCompressBufferXpressHuffStandard @ 0x1800672F0
 * Callers:
 *     RtlCompressBufferXpressHuff @ 0x180067290 (RtlCompressBufferXpressHuff.c)
 * Callees:
 *     XpressDoHuffmanPass @ 0x180067AF8 (XpressDoHuffmanPass.c)
 *     XpressBuildHuffmanEncodings @ 0x180067DA8 (XpressBuildHuffmanEncodings.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlpMakeXpressCallback @ 0x18010BFDC (RtlpMakeXpressCallback.c)
 */

__int64 __fastcall RtlCompressBufferXpressHuffStandard(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int8 *v8; // r15
  unsigned __int8 *v9; // rdi
  void *v10; // r9
  __int64 v11; // r13
  __int64 v12; // r12
  unsigned __int64 XpressCallback; // rbp
  unsigned __int8 *v14; // rcx
  bool v15; // cc
  int v16; // esi
  unsigned __int8 *v17; // rbx
  unsigned __int8 v18; // al
  unsigned __int8 *v19; // r10
  unsigned __int8 *v20; // r11
  _DWORD *v21; // rdx
  __int64 v22; // r8
  unsigned __int8 *v23; // r9
  unsigned __int8 v24; // r15
  unsigned __int8 v25; // bp
  unsigned __int8 v26; // bp
  _BYTE *v27; // r13
  unsigned __int8 v28; // r15
  unsigned __int8 v29; // r12
  unsigned __int8 v30; // r13
  unsigned __int8 *v31; // r9
  int v32; // eax
  int v33; // ecx
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  char v37; // cl
  unsigned __int64 v38; // r8
  _BYTE *v39; // rax
  unsigned __int8 v40; // cl
  _WORD *v41; // rbx
  int v42; // eax
  unsigned __int64 v43; // rax
  unsigned __int8 v44; // al
  int v45; // esi
  __int64 v46; // rax
  bool v47; // zf
  __int64 v49; // r8
  unsigned __int8 *v50; // rcx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int8 *v53; // rcx
  unsigned __int64 v54; // r8
  unsigned __int8 *v55; // rdx
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  int *v58; // rcx
  unsigned __int8 v59; // al
  unsigned __int64 v60; // r8
  unsigned __int8 *v61; // r8
  __int64 v62; // [rsp+30h] [rbp-A8h]
  __int64 v63; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v64; // [rsp+40h] [rbp-98h]
  _BYTE *v65; // [rsp+48h] [rbp-90h]
  char *v66; // [rsp+50h] [rbp-88h]
  unsigned __int64 v67; // [rsp+58h] [rbp-80h]
  __int64 v68; // [rsp+60h] [rbp-78h]
  unsigned __int8 *v69; // [rsp+70h] [rbp-68h]
  unsigned __int64 v70; // [rsp+78h] [rbp-60h]
  __int64 v71; // [rsp+80h] [rbp-58h]
  _QWORD v72[2]; // [rsp+88h] [rbp-50h] BYREF
  unsigned int v73; // [rsp+98h] [rbp-40h]
  int v75; // [rsp+F0h] [rbp+18h]
  unsigned __int8 *v76; // [rsp+110h] [rbp+38h]
  unsigned __int64 v77; // [rsp+118h] [rbp+40h]

  v75 = a3;
  v6 = a2;
  v71 = a2;
  v70 = a3 + a4;
  v7 = a2 + a1;
  v64 = v7;
  if ( a4 < 0x12C )
    return 3221225507LL;
  v68 = a3;
  v72[0] = 0LL;
  v72[1] = 0LL;
  memset64(a6, a1, 0xAF6uLL);
  v73 = a2;
  v8 = (unsigned __int8 *)(a6 + 23184);
  memset64(a6 + 5612, a1, 0x12EEuLL);
  v9 = (unsigned __int8 *)a1;
  v10 = a6 + 22608;
  while ( 2 )
  {
    v11 = 0LL;
    v62 = 0LL;
    v12 = 0LL;
    v63 = 0LL;
    memset(v10, 0, 0x800uLL);
    XpressCallback = (unsigned __int64)&v9[v6];
    v76 = v8;
    v14 = (unsigned __int8 *)v7;
    v15 = (unsigned __int64)(v9 + 0x10000) <= v7;
    v16 = 1;
    v17 = (unsigned __int8 *)(a6 + 23185);
    if ( v15 )
      v14 = v9 + 0x10000;
    v69 = v14;
    v67 = (unsigned __int64)(v14 - 40);
    if ( (unsigned __int64)(v14 - 40) < XpressCallback )
      XpressCallback = (unsigned __int64)(v14 - 40);
    v77 = XpressCallback;
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
          v25 = v23[3];
          v65 = v9 + 3;
          if ( v24 != v25 )
          {
            v49 = *v9 + 2 * v22;
            v50 = *(unsigned __int8 **)&a6[2 * v49 + 5612 + 2 * v24];
            *(_QWORD *)&a6[2 * v49 + 5612 + 2 * v25] = v23;
            if ( v9 - v50 >= 0x10000 || (v51 = *(unsigned int *)v9, (_DWORD)v51 != *(_DWORD *)v50) )
            {
              v9 += 3;
              v31 = v23 + 3;
              goto LABEL_21;
            }
            v23 = v50;
            *(_QWORD *)&a6[2 * v49 + 5612 + 2 * (v51 >> 24)] = v9;
          }
          v26 = v23[4];
          v27 = v9 + 4;
          v28 = v9[4];
          v66 = (char *)(v9 + 4);
          if ( v28 != v26 )
          {
            v52 = 2
                * ((unsigned __int8)__ROR1__(*v19 ^ __ROL1__(*v9 + *v65, 3), 1)
                 + 4LL * (unsigned __int8)__ROL1__(*v9 ^ __ROR1__(v9[2] + *v19 + 97, 1), 3));
            v53 = *(unsigned __int8 **)&a6[2 * v52 + 5612 + 2 * v28];
            *(_QWORD *)&a6[2 * v52 + 5612 + 2 * v26] = v23;
            if ( v9 - v53 >= 0x10000 || *(_DWORD *)v9 != *(_DWORD *)v53 || *v27 != v53[4] || v9 == v53 )
            {
              v9 += 4;
              v31 = v23 + 4;
              goto LABEL_21;
            }
            v23 = v53;
            *(_QWORD *)&a6[2 * v52 + 5612 + 2 * (unsigned __int8)*v27] = v9;
          }
          v29 = v23[5];
          v30 = v9[5];
          if ( v30 != v29 )
          {
            v54 = 2
                * ((v9[2] ^ (unsigned __int64)(unsigned __int8)__ROL1__(*v9, *v66))
                 + 4
                 * ((unsigned __int8)__ROR1__(*v19 ^ __ROL1__(*v65, 3), 1)
                  + (unsigned __int64)(unsigned __int8)__ROL1__(*v66 ^ (__ROR1__(*v9, 1) + 69), 3)));
            v55 = *(unsigned __int8 **)&a6[2 * v54 + 5612 + 2 * v30];
            *(_QWORD *)&a6[2 * v54 + 5612 + 2 * v29] = v23;
            if ( v9 - v55 >= 0x10000
              || *(_DWORD *)v9 != *(_DWORD *)v55
              || *v66 != v55[4]
              || (v59 = v9[5], v59 != v55[5])
              || v9 == v55 )
            {
              v9 += 5;
              v31 = v23 + 5;
              goto LABEL_21;
            }
            v23 = v55;
            *(_QWORD *)&a6[2 * v54 + 5612 + 2 * v59] = v9;
          }
          v9 += 6;
          v31 = v23 + 6;
          if ( (unsigned __int64)v9 >= v64 - 40 )
          {
LABEL_56:
            while ( (unsigned __int64)v9 < v64 )
            {
              if ( *v9 != *v31 )
                break;
              ++v9;
              ++v31;
            }
          }
          else
          {
            while ( 1 )
            {
              v32 = *(_DWORD *)v31;
              v33 = *(_DWORD *)v9;
              if ( *(_DWORD *)v9 != *(_DWORD *)v31 )
                break;
              v32 = *((_DWORD *)v31 + 1);
              v33 = *((_DWORD *)v9 + 1);
              if ( v33 != v32 )
              {
                v9 += 4;
                v31 += 4;
                break;
              }
              v32 = *((_DWORD *)v31 + 2);
              v33 = *((_DWORD *)v9 + 2);
              if ( v33 != v32 )
              {
                v9 += 8;
                v31 += 8;
                break;
              }
              v32 = *((_DWORD *)v31 + 3);
              v33 = *((_DWORD *)v9 + 3);
              if ( v33 != v32 )
              {
                v9 += 12;
                v31 += 12;
                break;
              }
              v32 = *((_DWORD *)v31 + 4);
              v33 = *((_DWORD *)v9 + 4);
              if ( v33 != v32 )
              {
                v9 += 16;
                v31 += 16;
                break;
              }
              v32 = *((_DWORD *)v31 + 5);
              v33 = *((_DWORD *)v9 + 5);
              if ( v33 != v32 )
              {
                v9 += 20;
                v31 += 20;
                break;
              }
              v32 = *((_DWORD *)v31 + 6);
              v33 = *((_DWORD *)v9 + 6);
              if ( v33 != v32 )
              {
                v9 += 24;
                v31 += 24;
                break;
              }
              v32 = *((_DWORD *)v31 + 7);
              v33 = *((_DWORD *)v9 + 7);
              if ( v33 != v32 )
              {
                v9 += 28;
                v31 += 28;
                break;
              }
              v9 += 32;
              v31 += 32;
              if ( (unsigned __int64)v9 >= v64 - 40 )
                goto LABEL_56;
            }
            if ( (_BYTE)v33 == (_BYTE)v32 )
            {
              if ( v9[1] == v31[1] )
              {
                if ( v9[2] == v31[2] )
                {
                  v9 += 3;
                  v31 += 3;
                }
                else
                {
                  v9 += 2;
                  v31 += 2;
                }
              }
              else
              {
                ++v9;
                ++v31;
              }
            }
          }
LABEL_21:
          v34 = v9 - v31;
          if ( v9 - v20 == 3 && v34 > 0x1000 )
          {
            XpressCallback = v77;
            v8 = v76;
            break;
          }
          if ( v34 >= 0x100 )
            v35 = XpressHighBitIndexTable[v34 >> 8] + 8LL;
          else
            v35 = XpressHighBitIndexTable[v34];
          v11 = v35 + v62;
          v36 = v34 - (1LL << v35);
          v37 = 16 * v35;
          v38 = v9 - v20 - 3;
          v62 = v11;
          v39 = v17 + 1;
          if ( v38 >= 0xF )
          {
            v40 = v37 + 15;
            v56 = v9 - v20 - 18;
            *v17 = v40;
            v41 = v17 + 2;
            if ( v56 >= 0xFF )
            {
              v60 = v56 + 15;
              *v39 = -1;
              if ( v60 < 0x10000 )
              {
                *v41 = v60;
                v41 = v39 + 3;
                v63 += 3LL;
                goto LABEL_26;
              }
              *v41 = 0;
              v41 = v39 + 7;
              *(_DWORD *)(v39 + 3) = v60;
              v57 = 7LL;
            }
            else
            {
              *v39 = v56;
              v57 = 1LL;
            }
            v63 += v57;
          }
          else
          {
            v40 = v38 + v37;
            *v17 = v40;
            v41 = v17 + 1;
          }
LABEL_26:
          ++a6[v40 + 22864];
          v42 = 2 * v16 + 1;
          *v41 = v36;
          v17 = (unsigned __int8 *)(v41 + 1);
          if ( v16 <= 0 )
          {
            v58 = (int *)v76;
            v16 = 1;
            v76 = v17;
            v17 += 4;
            *v58 = v42;
          }
          else
          {
            v16 = 2 * v16 + 1;
          }
          XpressCallback = v77;
          v8 = v76;
          if ( (unsigned __int64)v9 >= v77 )
          {
            v43 = v67;
            if ( (unsigned __int64)v9 >= v67 )
              goto LABEL_30;
            v61 = v9;
LABEL_100:
            XpressCallback = RtlpMakeXpressCallback(v72, v43, v61);
            v77 = XpressCallback;
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
      v76 = v17;
      v17 += 4;
    }
    while ( (unsigned __int64)v19 < XpressCallback );
    v43 = v67;
    if ( (unsigned __int64)v19 < v67 )
    {
      v61 = v19;
      goto LABEL_100;
    }
    v11 = v62;
LABEL_30:
    v12 = v63;
    v14 = v69;
LABEL_31:
    while ( v9 < v14 )
    {
      ++a6[*v9 + 22608];
      v44 = *v9++;
      *v17++ = v44;
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
    if ( (unsigned __int64)v9 < v64 )
    {
      v45 = 0;
    }
    else
    {
      ++a6[22864];
      v45 = 1;
    }
    if ( v12 + 4 * ((unsigned __int64)(v11 + XpressBuildHuffmanEncodings(a6 + 15304) + 31) >> 5) + v68 + 258 < v70 )
    {
      v8 = (unsigned __int8 *)(a6 + 23184);
      v46 = XpressDoHuffmanPass((int)a6 + 61216, (int)a6 + 92736, (_DWORD)v17, v68, v45);
      v7 = v64;
      v10 = a6 + 22608;
      v47 = v45 == 0;
      v68 = v46;
      v6 = v71;
      if ( !v47 )
      {
        *a5 = v46 - v75;
        return 0LL;
      }
      continue;
    }
    return 3221225507LL;
  }
}
