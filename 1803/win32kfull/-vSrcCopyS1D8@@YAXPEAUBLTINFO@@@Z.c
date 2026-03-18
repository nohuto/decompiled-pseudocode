/*
 * XREFs of ?vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z @ 0x1C00FFC90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D8(struct BLTINFO *a1)
{
  __int64 v1; // rax
  struct BLTINFO *v2; // r9
  __int64 v3; // rdx
  char *v4; // rcx
  int v5; // r8d
  int v6; // r10d
  char v7; // al
  int v8; // eax
  int v9; // esi
  int v10; // ecx
  int v11; // r8d
  int v12; // r12d
  char v13; // r10
  int v14; // r14d
  int v15; // r15d
  int v16; // ecx
  int v17; // edx
  int v18; // r13d
  int v19; // ebx
  _DWORD *v20; // r11
  __int64 v21; // rdx
  char *v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // r12
  char v29; // cl
  unsigned __int64 v30; // rax
  BOOL v31; // ebx
  char v32; // r15
  __int64 v33; // rsi
  char v34; // r14
  unsigned __int8 v35; // al
  char *v36; // r14
  unsigned __int64 v37; // rax
  _BYTE *v38; // rdx
  int v39; // r11d
  _BYTE *v40; // r8
  __int64 v41; // rax
  char v42; // r14
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // r13
  _BYTE *v46; // r12
  _BYTE *v47; // rdi
  unsigned __int8 v48; // bl
  _BYTE *v49; // rcx
  unsigned __int64 v50; // rax
  _BYTE *v51; // r12
  _BYTE *v52; // rdi
  unsigned __int8 v53; // bl
  _BYTE *v54; // rcx
  unsigned __int64 v55; // rax
  _BYTE *v56; // rsi
  unsigned __int8 v57; // bl
  _BYTE *v58; // rdi
  _BYTE *v59; // rcx
  unsigned __int64 v60; // rax
  int v61; // r11d
  int v62; // ecx
  unsigned __int64 v63; // rdx
  _BYTE *v64; // r8
  unsigned int v65; // eax
  _BYTE *v66; // rbx
  char v67; // r12
  unsigned __int8 v68; // r9
  _BYTE *v69; // r10
  _BYTE *v70; // rcx
  unsigned __int64 v71; // rax
  char v72; // r12
  _BYTE *v73; // r10
  _BYTE *v74; // rcx
  unsigned __int8 v75; // r9
  unsigned __int64 v76; // rax
  _BYTE v77[4]; // [rsp+Ch] [rbp-65h]
  int v78; // [rsp+10h] [rbp-61h]
  int v79; // [rsp+14h] [rbp-5Dh]
  __int64 v80; // [rsp+18h] [rbp-59h]
  int v81; // [rsp+20h] [rbp-51h]
  int v82; // [rsp+24h] [rbp-4Dh]
  int v83; // [rsp+28h] [rbp-49h]
  __int64 v84; // [rsp+30h] [rbp-41h]
  int v85; // [rsp+38h] [rbp-39h]
  int v86; // [rsp+3Ch] [rbp-35h]
  int v87; // [rsp+40h] [rbp-31h]
  int v88; // [rsp+44h] [rbp-2Dh]
  struct BLTINFO *v89; // [rsp+48h] [rbp-29h]
  _DWORD v90[2]; // [rsp+58h] [rbp-19h]
  int v91; // [rsp+60h] [rbp-11h]
  int v92; // [rsp+64h] [rbp-Dh]
  int v93; // [rsp+68h] [rbp-9h]
  int v94; // [rsp+6Ch] [rbp-5h]
  int v95; // [rsp+70h] [rbp-1h]
  int v96; // [rsp+74h] [rbp+3h]
  int v97; // [rsp+78h] [rbp+7h]
  int v98; // [rsp+7Ch] [rbp+Bh]
  int v99; // [rsp+80h] [rbp+Fh]
  int v100; // [rsp+84h] [rbp+13h]
  int v101; // [rsp+88h] [rbp+17h]
  int v102; // [rsp+8Ch] [rbp+1Bh]
  int v103; // [rsp+90h] [rbp+1Fh]
  int v104; // [rsp+94h] [rbp+23h]

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v89 = a1;
  v87 = 1;
  v3 = 0LL;
  v4 = *(char **)(v1 + 16);
  v5 = *(_DWORD *)v4;
  v6 = *((_DWORD *)v4 + 1);
  do
  {
    v7 = *v4;
    v4 += 4;
    v77[v3++] = v7;
  }
  while ( v3 < 2 );
  v8 = *((_DWORD *)v2 + 14);
  v90[0] = ((v5 | (v5 << 8)) << 16) | v5 | (v5 << 8);
  v9 = v8 & 7;
  v85 = v9;
  v97 = v6 | (v90[0] << 8);
  v93 = v5 | (v97 << 8);
  v99 = v6 | (v93 << 8);
  v94 = v5 | (v99 << 8);
  v91 = v5 | (v94 << 8);
  v98 = v6 | (v91 << 8);
  v101 = v6 | (v98 << 8);
  v103 = v6 | (v101 << 8);
  v104 = v6 | (v103 << 8);
  v96 = v5 | (v104 << 8);
  v100 = v6 | (v96 << 8);
  v102 = v6 | (v100 << 8);
  v95 = v5 | (v102 << 8);
  v92 = v5 | (v95 << 8);
  v10 = v5 | (v92 << 8);
  v11 = *((_DWORD *)v2 + 12);
  v90[1] = v10;
  v12 = v11 & 7;
  v86 = v12;
  v13 = v12 - v9;
  if ( v12 < (unsigned int)v9 )
    v13 += 8;
  v14 = *((_DWORD *)v2 + 11);
  v15 = *((_DWORD *)v2 + 10);
  v83 = (unsigned __int8)(8 - v13);
  v16 = *((_DWORD *)v2 + 7);
  v17 = v8 >> 3;
  v79 = v14;
  v82 = v15;
  v88 = v8 + v16;
  v18 = (v8 + v16) >> 3;
  v78 = v8 >> 3;
  v81 = v18;
  if ( v18 != v8 >> 3 )
  {
    v19 = *((_DWORD *)v2 + 8);
    v20 = (_DWORD *)(*((_QWORD *)v2 + 2) + ((v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
    LODWORD(v21) = v18 - ((v8 + 7) >> 3);
    v22 = (char *)(*((_QWORD *)v2 + 1) + ((__int64)(v11 + (-v9 & 7)) >> 3));
    LODWORD(v23) = v14 - 8 * v21;
    v24 = v15 - v21;
    if ( v13 )
    {
      if ( !v19 )
        goto LABEL_16;
      v32 = v83;
      v21 = (int)v21;
      v84 = (int)v21;
      v33 = v24;
      v34 = v13;
      do
      {
        v35 = *v22 << v34;
        --v19;
        if ( v22 != &v22[v21] )
        {
          v36 = &v22[v21];
          do
          {
            v37 = v35 | ((unsigned __int64)(unsigned __int8)*++v22 >> v32);
            *v20 = v90[v37 >> 4];
            v20[1] = v90[v37 & 0xF];
            v20 += 2;
            v35 = *v22 << v13;
          }
          while ( v22 != v36 );
          v21 = v84;
          v34 = v13;
        }
        v20 = (_DWORD *)((char *)v20 + (int)v23);
        v22 += v33;
      }
      while ( v19 );
      v2 = v89;
      v15 = v82;
    }
    else
    {
      if ( !v19 )
      {
LABEL_16:
        v17 = v78;
        v31 = v87;
        v16 = 8 - v9;
        goto LABEL_17;
      }
      v23 = (int)v23;
      v80 = (int)v23;
      v25 = v24;
      v26 = (int)v21;
      do
      {
        --v19;
        v27 = v26;
        v28 = 0LL;
        if ( v22 > &v22[v26] )
          v27 = 0LL;
        if ( v27 )
        {
          do
          {
            v29 = *v22;
            ++v28;
            v30 = (unsigned __int8)*v22++;
            *v20 = v90[v30 >> 4];
            v20[1] = v90[v29 & 0xF];
            v20 += 2;
          }
          while ( v28 != v27 );
          v23 = v80;
        }
        v20 = (_DWORD *)((char *)v20 + v23);
        v22 += v25;
      }
      while ( v19 );
    }
    v18 = v81;
    v12 = v86;
    v14 = v79;
    v9 = v85;
    goto LABEL_16;
  }
  v31 = v12 + v16 > 8;
LABEL_17:
  if ( v9 | (v18 == v17) )
  {
    v38 = (_BYTE *)(*((_QWORD *)v2 + 2) + *((int *)v2 + 14));
    v39 = *((_DWORD *)v2 + 8);
    v40 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    if ( v12 <= v9 )
    {
      if ( v39 )
      {
        v84 = v14;
        v56 = (_BYTE *)v16;
        do
        {
          --v39;
          v57 = *v40 << v12;
          v58 = v56;
          v59 = v38;
          if ( v38 > &v38[(_QWORD)v56] )
            v58 = 0LL;
          if ( v58 )
          {
            do
            {
              v60 = v57;
              v57 *= 2;
              *v59++ = v77[v60 >> 7];
            }
            while ( (_BYTE *)(v59 - v38) != v58 );
          }
          v38 += v14;
          v40 += v15;
        }
        while ( v39 );
        v2 = v89;
        goto LABEL_56;
      }
    }
    else if ( v31 )
    {
      if ( v39 )
      {
        v41 = v14;
        v42 = v83;
        v84 = v41;
        v43 = v15;
        v44 = v84;
        v45 = v43;
        v46 = (_BYTE *)v16;
        do
        {
          --v39;
          v47 = v46;
          v48 = ((unsigned __int8)(*v40 << v13) | (unsigned __int8)(v40[1] >> v42)) << v9;
          v49 = v38;
          if ( v38 > &v38[(_QWORD)v46] )
            v47 = 0LL;
          if ( v47 )
          {
            do
            {
              v50 = v48;
              v48 *= 2;
              *v49++ = v77[v50 >> 7];
            }
            while ( (_BYTE *)(v49 - v38) != v47 );
          }
          v38 += v44;
          v40 += v45;
        }
        while ( v39 );
        v2 = v89;
LABEL_39:
        v18 = v81;
LABEL_56:
        v15 = v82;
        v14 = v79;
      }
    }
    else if ( v39 )
    {
      v84 = v14;
      v51 = (_BYTE *)v16;
      do
      {
        --v39;
        v52 = v51;
        v53 = *v40 << v13 << v9;
        v54 = v38;
        if ( v38 > &v38[(_QWORD)v51] )
          v52 = 0LL;
        if ( v52 )
        {
          do
          {
            v55 = v53;
            v53 *= 2;
            *v54++ = v77[v55 >> 7];
          }
          while ( (_BYTE *)(v54 - v38) != v52 );
        }
        v38 += v14;
        v40 += v15;
      }
      while ( v39 );
      goto LABEL_39;
    }
    v17 = v78;
  }
  if ( (v88 & 7) != 0 && v18 != v17 )
  {
    v61 = *((_DWORD *)v2 + 8);
    v62 = *((_DWORD *)v2 + 13) - 1;
    v63 = *((_QWORD *)v2 + 2) + (v88 & 0xFFFFFFFFFFFFFFF8uLL);
    v64 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)v62 >> 3));
    v65 = ((_BYTE)v88 - 1) & 7;
    v66 = (_BYTE *)(v65 + 1);
    if ( (v62 & 7u) < v65 )
    {
      if ( v61 )
      {
        v72 = v13;
        do
        {
          --v61;
          v73 = v66;
          v74 = 0LL;
          v75 = (*v64 >> v83) | (*(v64 - 1) << v72);
          if ( v63 > (unsigned __int64)&v66[v63] )
            v73 = 0LL;
          if ( v73 )
          {
            do
            {
              v76 = v75;
              v75 *= 2;
              v74[v63] = v77[v76 >> 7];
              ++v74;
            }
            while ( v74 != v73 );
          }
          v63 += v14;
          v64 += v15;
        }
        while ( v61 );
      }
    }
    else if ( v61 )
    {
      v67 = v13;
      do
      {
        --v61;
        v68 = *v64 << v67;
        v69 = v66;
        v70 = (_BYTE *)v63;
        if ( v63 > (unsigned __int64)&v66[v63] )
          v69 = 0LL;
        if ( v69 )
        {
          do
          {
            v71 = v68;
            v68 *= 2;
            *v70++ = v77[v71 >> 7];
          }
          while ( &v70[-v63] != v69 );
        }
        v63 += v14;
        v64 += v15;
      }
      while ( v61 );
    }
  }
}
