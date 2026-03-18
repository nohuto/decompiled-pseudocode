/*
 * XREFs of ?vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0298B50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D16(struct BLTINFO *a1)
{
  int v1; // r15d
  struct BLTINFO *v2; // r10
  int v3; // edi
  BOOL v4; // r12d
  __int16 *v5; // r9
  unsigned int v6; // r8d
  __int64 i; // rcx
  __int16 v8; // ax
  int v9; // edx
  int v10; // ebx
  int v11; // esi
  char v12; // r11
  char v13; // r11
  int v14; // r13d
  int v15; // ecx
  int v16; // r9d
  int v17; // r8d
  int v18; // edi
  _DWORD *v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  _BYTE *v22; // r8
  int v23; // ecx
  int v24; // eax
  __int64 v25; // r10
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r15
  unsigned int v30; // ecx
  unsigned __int64 v31; // rax
  char v32; // si
  char v33; // r12
  __int64 v34; // r11
  _BYTE *v35; // r15
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rdx
  __int64 v38; // r14
  int v39; // r9d
  _BYTE *v40; // r8
  _WORD *v41; // rdx
  __int64 v42; // r12
  __int64 v43; // r10
  _WORD *v44; // rsi
  unsigned __int8 v45; // di
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // r10
  _WORD *v50; // rsi
  unsigned __int8 v51; // di
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // r12
  __int64 v55; // r10
  unsigned __int8 v56; // bl
  _WORD *v57; // rdi
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rax
  int v60; // r9d
  int v61; // ecx
  _WORD *v62; // rdx
  unsigned int v63; // eax
  _BYTE *v64; // r8
  unsigned int v65; // ebx
  __int64 v66; // r14
  __int64 v67; // r15
  unsigned __int64 v68; // rdi
  char v69; // r12
  __int64 v70; // rsi
  unsigned __int8 v71; // r10
  _WORD *v72; // r11
  unsigned __int64 v73; // rcx
  __int64 v74; // rbx
  unsigned __int64 v75; // rax
  __int64 v76; // r14
  __int64 v77; // r15
  unsigned __int64 v78; // rdi
  char v79; // r12
  __int64 v80; // rsi
  _WORD *v81; // r11
  __int64 v82; // rbx
  unsigned __int64 v83; // rcx
  unsigned __int8 v84; // r10
  unsigned __int64 v85; // rax
  char v86; // [rsp+0h] [rbp-60h]
  int v87; // [rsp+4h] [rbp-5Ch]
  int v88; // [rsp+8h] [rbp-58h]
  _WORD v89[2]; // [rsp+10h] [rbp-50h]
  int v90; // [rsp+14h] [rbp-4Ch]
  int v91; // [rsp+18h] [rbp-48h]
  int v92; // [rsp+1Ch] [rbp-44h]
  __int64 v93; // [rsp+20h] [rbp-40h]
  int v94; // [rsp+28h] [rbp-38h]
  int v95; // [rsp+2Ch] [rbp-34h]
  struct BLTINFO *v96; // [rsp+30h] [rbp-30h]
  _DWORD v97[4]; // [rsp+48h] [rbp-18h]

  v1 = *((_DWORD *)a1 + 14);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 7);
  v4 = 1;
  v96 = a1;
  v95 = v3 + v1;
  v5 = *(__int16 **)(*(_QWORD *)a1 + 16LL);
  v6 = (*((_DWORD *)v5 + 1) << 16) | *((_DWORD *)v5 + 1);
  v97[0] = (*(_DWORD *)v5 << 16) | *(_DWORD *)v5;
  v97[3] = v6;
  v97[1] = HIWORD(v97[0]) | (v6 << 16);
  v97[2] = (v97[0] << 16) | HIWORD(v6);
  for ( i = 0LL; i < 2; ++i )
  {
    v8 = *v5;
    v5 += 2;
    v89[i] = v8;
  }
  v9 = *((_DWORD *)v2 + 12);
  v10 = v1 & 7;
  v11 = v9 & 7;
  v12 = *((_BYTE *)v2 + 48) & 7;
  v94 = v11;
  v13 = v12 - v10;
  if ( v11 < (unsigned int)v10 )
    v13 += 8;
  v14 = *((_DWORD *)v2 + 11);
  v15 = *((_DWORD *)v2 + 10);
  v16 = v1 >> 3;
  v17 = v95 >> 3;
  v86 = v13;
  v92 = (unsigned __int8)(8 - v13);
  v90 = v14;
  v91 = v15;
  v88 = v1 >> 3;
  v87 = v95 >> 3;
  if ( v95 >> 3 != v1 >> 3 )
  {
    v18 = *((_DWORD *)v2 + 8);
    v19 = (_DWORD *)(*((_QWORD *)v2 + 2) + (int)(2 * ((v1 + 7) & 0xFFFFFFF8)));
    v20 = v9 + (-v10 & 7);
    LODWORD(v21) = v87 - ((v1 + 7) >> 3);
    v22 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v20 >> 3));
    v23 = v14 - 16 * v21;
    v24 = v91 - v21;
    if ( v13 )
    {
      if ( v18 )
      {
        v32 = v92;
        v21 = (int)v21;
        v33 = v13;
        v34 = v24;
        v93 = (int)v21;
        do
        {
          v35 = &v22[v21];
          --v18;
          v36 = *v22 << v33;
          if ( v22 != &v22[v21] )
          {
            do
            {
              v37 = v36 | ((unsigned __int64)(unsigned __int8)*++v22 >> v32);
              *v19 = v97[v37 >> 6];
              v19[1] = v97[(v37 >> 4) & 3];
              v19[2] = v97[(v37 >> 2) & 3];
              v19[3] = v97[v37 & 3];
              v19 += 4;
              v36 = *v22 << v33;
            }
            while ( v22 != v35 );
            v21 = v93;
          }
          v19 = (_DWORD *)((char *)v19 + v23);
          v22 += v34;
        }
        while ( v18 );
        v13 = v86;
        goto LABEL_22;
      }
    }
    else if ( v18 )
    {
      v25 = v24;
      v26 = (int)v21;
      v27 = v23;
      do
      {
        --v18;
        v28 = v26;
        v29 = 0LL;
        if ( v22 > &v22[v26] )
          v28 = 0LL;
        if ( v28 )
        {
          do
          {
            v30 = (unsigned __int8)*v22;
            ++v29;
            v31 = (unsigned __int8)*v22++;
            *v19 = v97[v31 >> 6];
            v19[1] = v97[(v30 >> 4) & 3];
            v19[2] = v97[(v30 >> 2) & 3];
            v19[3] = v97[v30 & 3];
            v19 += 4;
          }
          while ( v29 != v28 );
        }
        v19 = (_DWORD *)((char *)v19 + v27);
        v22 += v25;
      }
      while ( v18 );
LABEL_22:
      v4 = 1;
      v14 = v90;
      v11 = v94;
      v2 = v96;
    }
    v15 = v91;
    v17 = v87;
    v3 = 8 - v10;
    v16 = v88;
    goto LABEL_25;
  }
  v4 = v11 + v3 > 8;
LABEL_25:
  v38 = 0LL;
  if ( v10 | (v17 == v16) )
  {
    v39 = *((_DWORD *)v2 + 8);
    v40 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    v41 = (_WORD *)(*((_QWORD *)v2 + 2) + 2 * *((_DWORD *)v2 + 14));
    if ( v11 <= v10 )
    {
      if ( v39 )
      {
        v54 = v3;
        v55 = v15;
        do
        {
          --v39;
          v56 = *v40 << v11;
          v57 = v41;
          v58 = (unsigned __int64)(v54 * 2 + 1) >> 1;
          if ( v41 > &v41[v54] )
            v58 = 0LL;
          if ( v58 )
          {
            do
            {
              ++v38;
              v59 = (unsigned __int64)v56 >> 7;
              v56 *= 2;
              *v57++ = v89[v59];
            }
            while ( v38 != v58 );
          }
          v41 = (_WORD *)((char *)v41 + v14);
          v40 += v55;
          v38 = 0LL;
        }
        while ( v39 );
        goto LABEL_51;
      }
    }
    else if ( v4 )
    {
      if ( v39 )
      {
        v42 = v3;
        v43 = v15;
        do
        {
          --v39;
          v44 = v41;
          v45 = ((unsigned __int8)(*v40 << v13) | (unsigned __int8)(v40[1] >> v92)) << v10;
          v46 = (unsigned __int64)(v42 * 2 + 1) >> 1;
          if ( v41 > &v41[v42] )
            v46 = 0LL;
          if ( v46 )
          {
            do
            {
              ++v38;
              v47 = (unsigned __int64)v45 >> 7;
              v45 *= 2;
              *v44++ = v89[v47];
            }
            while ( v38 != v46 );
          }
          v41 = (_WORD *)((char *)v41 + v14);
          v40 += v43;
          v38 = 0LL;
        }
        while ( v39 );
LABEL_35:
        v13 = v86;
LABEL_51:
        v2 = v96;
      }
    }
    else if ( v39 )
    {
      v48 = v3;
      v49 = v15;
      do
      {
        --v39;
        v50 = v41;
        v51 = *v40 << v13 << v10;
        v52 = (unsigned __int64)(v48 * 2 + 1) >> 1;
        if ( v41 > &v41[v48] )
          v52 = 0LL;
        if ( v52 )
        {
          do
          {
            ++v38;
            v53 = (unsigned __int64)v51 >> 7;
            v51 *= 2;
            *v50++ = v89[v53];
          }
          while ( v38 != v52 );
        }
        v41 = (_WORD *)((char *)v41 + v14);
        v40 += v49;
        v38 = 0LL;
      }
      while ( v39 );
      goto LABEL_35;
    }
    v16 = v88;
    v17 = v87;
  }
  if ( (v95 & 7) != 0 && v17 != v16 )
  {
    v60 = *((_DWORD *)v2 + 8);
    v61 = *((_DWORD *)v2 + 13) - 1;
    v62 = (_WORD *)(*((_QWORD *)v2 + 2) + (int)(2 * (v95 & 0xFFFFFFF8)));
    v63 = ((_BYTE)v95 - 1) & 7;
    v64 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v61 >> 3));
    v65 = v63 + 1;
    if ( (v61 & 7u) < v63 )
    {
      if ( v60 )
      {
        v76 = v90;
        v77 = v91;
        v78 = ((unsigned __int64)(2 * v65) + 1) >> 1;
        v79 = v13;
        v80 = v65;
        do
        {
          --v60;
          v81 = v62;
          v82 = 0LL;
          v83 = v78;
          v84 = (*v64 >> v92) | (*(v64 - 1) << v79);
          if ( v62 > &v62[v80] )
            v83 = 0LL;
          if ( v83 )
          {
            do
            {
              ++v82;
              v85 = (unsigned __int64)v84 >> 7;
              v84 *= 2;
              *v81++ = v89[v85];
            }
            while ( v82 != v83 );
          }
          v62 = (_WORD *)((char *)v62 + v76);
          v64 += v77;
        }
        while ( v60 );
      }
    }
    else if ( v60 )
    {
      v66 = v90;
      v67 = v91;
      v68 = ((unsigned __int64)(2 * v65) + 1) >> 1;
      v69 = v13;
      v70 = v65;
      do
      {
        --v60;
        v71 = *v64 << v69;
        v72 = v62;
        v73 = v68;
        v74 = 0LL;
        if ( v62 > &v62[v70] )
          v73 = 0LL;
        if ( v73 )
        {
          do
          {
            ++v74;
            v75 = (unsigned __int64)v71 >> 7;
            v71 *= 2;
            *v72++ = v89[v75];
          }
          while ( v74 != v73 );
        }
        v62 = (_WORD *)((char *)v62 + v66);
        v64 += v67;
      }
      while ( v60 );
    }
  }
}
