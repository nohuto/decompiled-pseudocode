/*
 * XREFs of ?GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x18005592C
 * Callers:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x180053684 (-GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@.c)
 * Callees:
 *     OffsetBaseVertices @ 0x180055F34 (OffsetBaseVertices.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall Mesh::GenerateGridAntialiasBorder(
        __int64 a1,
        char a2,
        __int64 *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        unsigned int *a8)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  char v10; // r12
  int v11; // r10d
  int v12; // r11d
  int v13; // r13d
  __int64 v14; // rdx
  unsigned int v15; // r15d
  int v16; // ecx
  unsigned int v17; // r12d
  __int64 v18; // r14
  unsigned __int64 v19; // rdi
  __int64 v20; // r13
  char *v21; // rax
  bool v22; // zf
  int v23; // ebx
  int v24; // r9d
  int v25; // r15d
  int v26; // ecx
  int v27; // edx
  int v28; // r11d
  __int64 v29; // r10
  __int64 v30; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rdx
  int v34; // eax
  unsigned __int64 v35; // r8
  int v36; // r9d
  __int64 v37; // r10
  __int64 v38; // r11
  int v39; // r12d
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 *v43; // rcx
  int v44; // r15d
  __int64 *v45; // r14
  __int64 v46; // r8
  __int64 v47; // rcx
  unsigned int v48; // edi
  __int64 v49; // rsi
  _DWORD *v50; // r10
  int v51; // r8d
  __int64 v52; // rcx
  int v53; // eax
  int v54; // r9d
  int v55; // eax
  __int64 v56; // rcx
  unsigned int v57; // r10d
  __int64 v58; // rcx
  int v59; // r11d
  int v60; // r8d
  int v61; // esi
  int v62; // ebx
  __int64 *v63; // r10
  __int64 v64; // r9
  __int64 v65; // rdi
  __int64 v66; // r14
  __int16 v67; // r15
  __int16 v68; // r12
  int v69; // edx
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int16 v73; // ax
  __int64 result; // rax
  char v76; // [rsp+23h] [rbp-DDh] BYREF
  int v77; // [rsp+24h] [rbp-DCh] BYREF
  int v78; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v79; // [rsp+2Ch] [rbp-D4h]
  unsigned int v80; // [rsp+30h] [rbp-D0h]
  __int64 v81; // [rsp+38h] [rbp-C8h]
  __int64 *v82; // [rsp+40h] [rbp-C0h]
  int v83; // [rsp+48h] [rbp-B8h]
  int v84; // [rsp+4Ch] [rbp-B4h]
  int v85; // [rsp+50h] [rbp-B0h]
  int v86; // [rsp+54h] [rbp-ACh]
  int v87; // [rsp+58h] [rbp-A8h]
  __int64 v88; // [rsp+60h] [rbp-A0h]
  __int64 v89; // [rsp+68h] [rbp-98h] BYREF
  int v90; // [rsp+70h] [rbp-90h]
  int v91; // [rsp+74h] [rbp-8Ch]
  __int64 v92; // [rsp+78h] [rbp-88h] BYREF
  int v93; // [rsp+80h] [rbp-80h]
  int v94; // [rsp+84h] [rbp-7Ch]
  char *v95; // [rsp+88h] [rbp-78h]
  _BYTE *v96; // [rsp+90h] [rbp-70h]
  __int64 v97; // [rsp+A0h] [rbp-60h]
  _DWORD *v98; // [rsp+A8h] [rbp-58h]
  unsigned int *v99; // [rsp+B0h] [rbp-50h]
  __int64 v100; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v101[2]; // [rsp+C0h] [rbp-40h]
  __int64 v102; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v103[2]; // [rsp+D0h] [rbp-30h]
  _DWORD v104[4]; // [rsp+D8h] [rbp-28h]
  _DWORD v105[4]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v106[8]; // [rsp+F8h] [rbp-8h]

  v8 = a1;
  v104[3] = -1;
  v9 = 0LL;
  v97 = a6;
  v10 = a2;
  v11 = 0;
  v98 = a5;
  v88 = a1;
  v12 = *a5;
  v13 = v12;
  v99 = a8;
  v14 = *(unsigned int *)(a1 + 52);
  v15 = *a8;
  v16 = *(_DWORD *)(a1 + 48);
  v81 = a4;
  v82 = a3;
  v86 = v12;
  v80 = v15;
  v85 = v12;
  v84 = 0;
  v78 = 65537;
  v77 = 257;
  v105[0] = v14 * (v16 - 1);
  v105[2] = v14 - 1;
  v106[0] = v16;
  v106[1] = v14;
  v106[2] = v16;
  v106[3] = v14;
  v105[1] = 0;
  v105[3] = v16 * v14 - 1;
  v104[1] = 1;
  v104[0] = -(int)v14;
  v104[2] = v14;
  if ( !v10 )
    goto LABEL_29;
  v17 = 0;
  v79 = 0;
  v18 = 0LL;
  v19 = 56LL;
  do
  {
    if ( v17 )
    {
      v20 = v19;
      v96 = (char *)&v77 + v18 + 3;
      v21 = &v76 + v18;
    }
    else
    {
      v20 = 72LL;
      v96 = (char *)&v78 + 3;
      v21 = (char *)&v77 + 3;
    }
    v22 = *(_DWORD *)(v8 + v19 + 4) == 12;
    v95 = v21;
    if ( v22 )
    {
      v23 = v101[v19 / 4] - 1;
    }
    else
    {
      if ( *(_DWORD *)(v8 + v20) != 12 )
        goto LABEL_22;
      v23 = 1;
    }
    if ( v23 > 0 )
    {
      v24 = *((_DWORD *)a3 + 2);
      v25 = v11 + v12;
      v26 = *(_DWORD *)((char *)&v99 + v19);
      v27 = *(_DWORD *)((char *)&v97 + v19);
      v28 = v24 * v27;
      v103[v19 / 4] = v25;
      v87 = v26;
      v83 = v27;
      v29 = *a3 + v24 * v26;
      v30 = *a3 + v24 * v25;
      v31 = 0LL;
      v32 = v30;
      do
      {
        v33 = (int)v31 * v28;
        v34 = v31++ * v24;
        *(_OWORD *)(v34 + v32) = *(_OWORD *)(v33 + v29);
      }
      while ( v31 < (unsigned int)v23 );
      v35 = 0LL;
      v36 = *(_DWORD *)(v81 + 8);
      v37 = *(_QWORD *)v81 + v36 * v87;
      v38 = *(_QWORD *)v81 + v36 * v25;
      v39 = v36 * v83;
      do
      {
        v14 = (int)v35 * v39;
        v40 = v35++ * v36;
        *(_OWORD *)(v40 + v38) = *(_OWORD *)(v14 + v37);
      }
      while ( v35 < (unsigned int)v23 );
      v8 = v88;
      v17 = v79;
      if ( (*(_BYTE *)(v88 + v19 + 4) & 0xC) != 0 )
      {
        LOBYTE(v14) = *((_BYTE *)&v77 + v18);
        if ( (*(_BYTE *)(v88 + v19 + 4) & 8) != 0 )
          LOBYTE(v14) = (_BYTE)v14 == 0;
        v101[0] = *(_DWORD *)(v81 + 8);
        v101[1] = v23;
        v103[0] = *((_DWORD *)v82 + 2);
        v103[1] = v23;
        v100 = *(_QWORD *)v81 + v101[0] * v25;
        v102 = *v82 + v103[0] * v25;
        v41 = v102;
        LOBYTE(v41) = *((_BYTE *)&v78 + v18);
        OffsetBaseVertices(v41, v14, &v102, &v100);
      }
      if ( (*(_BYTE *)(v8 + v20) & 0xC) != 0 )
      {
        LOBYTE(v14) = *v95;
        if ( (*(_BYTE *)(v8 + v20) & 8) != 0 )
          LOBYTE(v14) = (_BYTE)v14 == 0;
        v91 = 1;
        v94 = 1;
        v42 = *(_DWORD *)(v81 + 8) * v25;
        v90 = *(_DWORD *)(v81 + 8);
        v43 = v82;
        v89 = *(_QWORD *)v81 + v42;
        v44 = *((_DWORD *)v82 + 2) * v25;
        v93 = *((_DWORD *)v82 + 2);
        v92 = *v82 + v44;
        LOBYTE(v43) = *v96;
        OffsetBaseVertices(v43, v14, &v92, &v89);
      }
      v12 = v86;
      v11 = v23 + v84;
      a3 = v82;
      v84 += v23;
    }
    v9 = 0LL;
LABEL_22:
    ++v17;
    ++v18;
    v19 += 4LL;
    v79 = v17;
  }
  while ( v17 < 4 );
  a4 = v81;
  if ( v11 > 0 )
  {
    v45 = v82;
    LODWORD(v14) = v12;
    v46 = (unsigned int)v11;
    do
    {
      *(_DWORD *)(*(_DWORD *)(a4 + 8) * (int)v14 + *(_QWORD *)a4 + 12LL) = 0;
      v47 = *v45 + *((_DWORD *)v45 + 2) * (int)v14;
      if ( *(char *)(v8 + 76) >= 0 )
        *(_DWORD *)(v47 + 12) = 0;
      else
        *(_BYTE *)(v47 + 15) = 0;
      v14 = (unsigned int)(v14 + 1);
      --v46;
    }
    while ( v46 );
  }
  a3 = v82;
  v15 = v80;
  v10 = a2;
  v13 = v85;
  v86 = v11 + v12;
LABEL_29:
  v48 = 0;
  v49 = v8 - (_QWORD)v105;
  v88 = v49;
  do
  {
    v50 = &v105[v9];
    if ( (*((_BYTE *)v50 + v49 + 60) & 0xC) != 0 )
    {
      LOBYTE(v14) = *((_BYTE *)&v77 + v9);
      if ( (*((_BYTE *)v50 + v49 + 60) & 4) == 0 )
        LOBYTE(v14) = (_BYTE)v14 == 0;
      v51 = *((_DWORD *)a3 + 2);
      v52 = *(_QWORD *)a4 + *v50 * *(_DWORD *)(a4 + 8);
      v53 = *(_DWORD *)(a4 + 8) * v104[v9];
      v54 = v106[v9];
      v92 = v52;
      v94 = v54;
      v91 = v54;
      v93 = v53;
      v55 = *v50 * v51;
      v90 = v104[v9] * v51;
      v89 = *v82 + v55;
      v56 = v89;
      LOBYTE(v56) = *((_BYTE *)&v78 + v9);
      OffsetBaseVertices(v56, v14, &v89, &v92);
    }
    a4 = v81;
    ++v48;
    a3 = v82;
    ++v9;
  }
  while ( v48 < 4 );
  if ( v10 )
  {
    v57 = 0;
    v79 = 0;
    v58 = 0LL;
    while ( 1 )
    {
      if ( *(_DWORD *)((char *)&v105[v58 + 15] + v49) == 12 )
      {
        v59 = v105[v58];
        v60 = v106[v58 + 4] - v13;
        if ( v106[v58] - 1 > 0 )
        {
          v61 = v84;
          v62 = v60 + 1;
          v63 = v82;
          v64 = (int)v15;
          v65 = (unsigned int)(v106[v58] - 1);
          do
          {
            v66 = *v63;
            v67 = v60 + v13;
            v68 = v59 + LOWORD(v104[v58]);
            v69 = v62 % v61;
            v70 = *((_DWORD *)v63 + 2) * (unsigned __int16)(v60 + v13);
            LOWORD(v69) = v13 + v62 % v61;
            v87 = v69;
            v71 = *((_DWORD *)v63 + 2) * (unsigned __int16)v69;
            if ( *(float *)(v66 + v70) != *(float *)(v71 + v66)
              || *(float *)(v66 + v70 + 4) != *(float *)(v71 + v66 + 4) )
            {
              v72 = v97;
              v73 = v87;
              v80 += 6;
              *(_WORD *)(v97 + 2 * v64) = v67;
              *(_WORD *)(v72 + 2 * v64 + 2) = v73;
              *(_WORD *)(v72 + 2 * v64 + 4) = v68;
              *(_WORD *)(v72 + 2 * v64 + 6) = v67;
              *(_WORD *)(v72 + 2 * v64 + 8) = v68;
              *(_WORD *)(v72 + 2 * v64 + 10) = v59;
              v64 += 6LL;
            }
            v59 += v104[v58];
            LOWORD(v60) = v60 + 1;
            LOWORD(v13) = v85;
            ++v62;
            --v65;
          }
          while ( v65 );
          v57 = v79;
          v49 = v88;
        }
      }
      v13 = v85;
      ++v57;
      ++v58;
      v79 = v57;
      if ( v57 >= 4 )
        break;
      v15 = v80;
    }
  }
  *v98 = v86;
  result = v80;
  *v99 = v80;
  return result;
}
