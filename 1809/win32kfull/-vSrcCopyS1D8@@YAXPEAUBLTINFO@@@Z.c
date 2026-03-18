/*
 * XREFs of ?vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z @ 0x1C01121C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall vSrcCopyS1D8(struct BLTINFO *a1)
{
  __int64 v1; // rax
  struct BLTINFO *v2; // r10
  BOOL v3; // r13d
  char *v4; // rcx
  __int64 v5; // rdx
  int v6; // r8d
  int v7; // r9d
  char v8; // al
  int v9; // edx
  signed int v10; // ebx
  int v11; // edi
  int v12; // esi
  unsigned int v13; // r12d
  int v14; // ecx
  int v15; // r8d
  unsigned int v16; // r11d
  int v17; // r14d
  int v18; // eax
  int v19; // r9d
  int v20; // r15d
  int v21; // r11d
  _DWORD *v22; // r9
  __int64 v23; // rdx
  char *v24; // r8
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // r10
  __int64 v28; // r13
  __int64 v29; // rdx
  __int64 v30; // r15
  char v31; // cl
  unsigned __int64 v32; // rax
  char v33; // si
  __int64 v34; // rdi
  char *v35; // r15
  unsigned __int8 v36; // al
  unsigned __int64 v37; // rax
  _BYTE *v38; // rdx
  int v39; // r9d
  _BYTE *v40; // r8
  __int64 v41; // r13
  char v42; // di
  _BYTE *v43; // r15
  _BYTE *v44; // rbx
  unsigned __int8 v45; // r11
  _BYTE *v46; // rcx
  unsigned __int64 v47; // rax
  _BYTE *v48; // r15
  _BYTE *v49; // rbx
  unsigned __int8 v50; // r11
  _BYTE *v51; // rcx
  unsigned __int64 v52; // rax
  char v53; // r14
  _BYTE *v54; // r15
  unsigned __int8 v55; // r11
  _BYTE *v56; // rbx
  _BYTE *v57; // rcx
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  int v60; // r9d
  unsigned __int64 v61; // rdx
  _BYTE *v62; // r8
  unsigned int v63; // ecx
  unsigned int v64; // r11d
  _BYTE *v65; // rbx
  unsigned __int8 v66; // r10
  _BYTE *v67; // r11
  _BYTE *v68; // rcx
  unsigned __int64 v69; // rax
  __int64 v70; // rbx
  __int64 v71; // r11
  __int64 v72; // rcx
  unsigned __int8 v73; // r10
  unsigned __int64 v74; // rax
  _BYTE v75[4]; // [rsp+8h] [rbp-79h]
  int v76; // [rsp+Ch] [rbp-75h]
  int v77; // [rsp+10h] [rbp-71h]
  int v78; // [rsp+14h] [rbp-6Dh]
  int v79; // [rsp+18h] [rbp-69h]
  int v80; // [rsp+1Ch] [rbp-65h]
  int v81; // [rsp+20h] [rbp-61h]
  unsigned int v82; // [rsp+28h] [rbp-59h]
  int v83; // [rsp+2Ch] [rbp-55h]
  unsigned int v84; // [rsp+30h] [rbp-51h]
  struct BLTINFO *v85; // [rsp+38h] [rbp-49h]
  int v86; // [rsp+40h] [rbp-41h]
  __int64 v87; // [rsp+48h] [rbp-39h]
  __int64 v88; // [rsp+58h] [rbp-29h]
  _DWORD v89[2]; // [rsp+68h] [rbp-19h]
  int v90; // [rsp+70h] [rbp-11h]
  int v91; // [rsp+74h] [rbp-Dh]
  int v92; // [rsp+78h] [rbp-9h]
  int v93; // [rsp+7Ch] [rbp-5h]
  int v94; // [rsp+80h] [rbp-1h]
  int v95; // [rsp+84h] [rbp+3h]
  int v96; // [rsp+88h] [rbp+7h]
  int v97; // [rsp+8Ch] [rbp+Bh]
  int v98; // [rsp+90h] [rbp+Fh]
  int v99; // [rsp+94h] [rbp+13h]
  int v100; // [rsp+98h] [rbp+17h]
  int v101; // [rsp+9Ch] [rbp+1Bh]
  int v102; // [rsp+A0h] [rbp+1Fh]
  int v103; // [rsp+A4h] [rbp+23h]

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v85 = a1;
  v3 = 1;
  v83 = 1;
  v4 = *(char **)(v1 + 16);
  v5 = 0LL;
  v6 = *(_DWORD *)v4;
  v7 = *((_DWORD *)v4 + 1);
  do
  {
    v8 = *v4;
    v4 += 4;
    v75[v5++] = v8;
  }
  while ( v5 < 2 );
  v9 = *((_DWORD *)v2 + 14);
  v10 = *((_DWORD *)v2 + 7);
  v11 = *((_DWORD *)v2 + 11);
  v12 = *((_DWORD *)v2 + 10);
  v13 = v9 & 7;
  v82 = v13;
  v89[0] = ((v6 | (v6 << 8)) << 16) | v6 | (v6 << 8);
  v78 = v11;
  v96 = v7 | (v89[0] << 8);
  v81 = v12;
  v92 = v6 | (v96 << 8);
  v98 = v7 | (v92 << 8);
  v93 = v6 | (v98 << 8);
  v90 = v6 | (v93 << 8);
  v97 = v7 | (v90 << 8);
  v100 = v7 | (v97 << 8);
  v102 = v7 | (v100 << 8);
  v103 = v7 | (v102 << 8);
  v95 = v6 | (v103 << 8);
  v99 = v7 | (v95 << 8);
  v101 = v7 | (v99 << 8);
  v94 = v6 | (v101 << 8);
  v91 = v6 | (v94 << 8);
  v14 = v6 | (v91 << 8);
  v15 = *((_DWORD *)v2 + 12);
  v89[1] = v14;
  v16 = v15 & 7;
  v84 = v16;
  v17 = (unsigned __int8)(v16 - (v9 & 7) + 8);
  v18 = 8;
  if ( v16 >= v13 )
    v17 = (unsigned __int8)(v16 - v13);
  LOBYTE(v18) = 8 - v17;
  v79 = v17;
  v80 = v18;
  v19 = v9 >> 3;
  v86 = v9 + v10;
  v76 = v9 >> 3;
  v20 = (v9 + v10) >> 3;
  v77 = v20;
  if ( v20 != v9 >> 3 )
  {
    v21 = *((_DWORD *)v2 + 8);
    v10 = 8 - v13;
    v22 = (_DWORD *)(*((_QWORD *)v2 + 2) + ((v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL));
    LODWORD(v23) = v20 - ((v9 + 7) >> 3);
    v24 = (char *)(*((_QWORD *)v2 + 1) + ((__int64)(v15 + ((8 - (unsigned __int8)v13) & 7)) >> 3));
    LODWORD(v25) = v11 - 8 * v23;
    v26 = v12 - v23;
    if ( (_BYTE)v17 )
    {
      if ( !v21 )
        goto LABEL_16;
      v33 = v80;
      v23 = (int)v23;
      v88 = (int)v23;
      v34 = v26;
      do
      {
        v35 = &v24[v23];
        --v21;
        v36 = *v24 << v17;
        if ( v24 != &v24[v23] )
        {
          do
          {
            v37 = v36 | ((unsigned __int64)(unsigned __int8)*++v24 >> v33);
            *v22 = v89[v37 >> 4];
            v22[1] = v89[v37 & 0xF];
            v22 += 2;
            v36 = *v24 << v17;
          }
          while ( v24 != v35 );
          v23 = v88;
        }
        v22 = (_DWORD *)((char *)v22 + (int)v25);
        v24 += v34;
      }
      while ( v21 );
      v11 = v78;
      v12 = v81;
      LOBYTE(v17) = v79;
    }
    else
    {
      if ( !v21 )
      {
LABEL_16:
        v16 = v84;
        v19 = v76;
        goto LABEL_17;
      }
      v25 = (int)v25;
      v87 = (int)v25;
      v27 = v26;
      v28 = (int)v23;
      do
      {
        --v21;
        v29 = v28;
        v30 = 0LL;
        if ( v24 > &v24[v28] )
          v29 = 0LL;
        if ( v29 )
        {
          do
          {
            v31 = *v24;
            ++v30;
            v32 = (unsigned __int8)*v24++;
            *v22 = v89[v32 >> 4];
            v22[1] = v89[v31 & 0xF];
            v22 += 2;
          }
          while ( v30 != v29 );
          v25 = v87;
        }
        v22 = (_DWORD *)((char *)v22 + v25);
        v24 += v27;
      }
      while ( v21 );
    }
    v20 = v77;
    v3 = v83;
    v13 = v82;
    v2 = v85;
    goto LABEL_16;
  }
  v3 = (int)(v10 + v16) > 8;
LABEL_17:
  if ( v13 | (v20 == v19) )
  {
    v38 = (_BYTE *)(*((_QWORD *)v2 + 2) + *((int *)v2 + 14));
    v39 = *((_DWORD *)v2 + 8);
    v40 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((__int64)*((int *)v2 + 12) >> 3));
    if ( v16 <= v13 )
    {
      if ( !v39 )
      {
        v19 = v76;
        goto LABEL_18;
      }
      v53 = v84;
      v54 = (_BYTE *)v10;
      do
      {
        --v39;
        v55 = *v40 << v53;
        v56 = v54;
        v57 = v38;
        if ( v38 > &v38[(_QWORD)v54] )
          v56 = 0LL;
        if ( v56 )
        {
          do
          {
            v58 = v55;
            v55 *= 2;
            *v57++ = v75[v58 >> 7];
          }
          while ( (_BYTE *)(v57 - v38) != v56 );
        }
        v38 += v11;
        v40 += v12;
      }
      while ( v39 );
    }
    else
    {
      if ( v3 )
      {
        if ( !v39 )
        {
LABEL_39:
          v19 = v76;
          goto LABEL_18;
        }
        v41 = v11;
        v42 = v80;
        v43 = (_BYTE *)v10;
        do
        {
          --v39;
          v44 = v43;
          v45 = ((unsigned __int8)(*v40 << v17) | (unsigned __int8)(v40[1] >> v42)) << v13;
          v46 = v38;
          if ( v38 > &v38[(_QWORD)v43] )
            v44 = 0LL;
          if ( v44 )
          {
            do
            {
              v47 = v45;
              v45 *= 2;
              *v46++ = v75[v47 >> 7];
            }
            while ( (_BYTE *)(v46 - v38) != v44 );
          }
          v38 += v41;
          v40 += v12;
        }
        while ( v39 );
      }
      else
      {
        if ( !v39 )
          goto LABEL_39;
        v48 = (_BYTE *)v10;
        do
        {
          --v39;
          v49 = v48;
          v50 = *v40 << v17 << v13;
          v51 = v38;
          if ( v38 > &v38[(_QWORD)v48] )
            v49 = 0LL;
          if ( v49 )
          {
            do
            {
              v52 = v50;
              v50 *= 2;
              *v51++ = v75[v52 >> 7];
            }
            while ( (_BYTE *)(v51 - v38) != v49 );
          }
          v38 += v11;
          v40 += v12;
        }
        while ( v39 );
      }
      v2 = v85;
    }
    v11 = v78;
    LOBYTE(v17) = v79;
    v20 = v77;
    goto LABEL_39;
  }
LABEL_18:
  if ( (v86 & 7) != 0 && v20 != v19 )
  {
    v59 = *((int *)v2 + 13);
    v60 = *((_DWORD *)v2 + 8);
    v61 = *((_QWORD *)v2 + 2) + (v86 & 0xFFFFFFFFFFFFFFF8uLL);
    v62 = (_BYTE *)(*((_QWORD *)v2 + 1) + ((v59 - 1) >> 3));
    v63 = ((_BYTE)v86 - 1) & 7;
    v64 = v63 + 1;
    if ( (((_BYTE)v59 - 1) & 7u) < v63 )
    {
      if ( v60 )
      {
        v70 = v64;
        do
        {
          --v60;
          v71 = v70;
          v72 = 0LL;
          v73 = (*v62 >> v80) | (*(v62 - 1) << v17);
          if ( v61 > v70 + v61 )
            v71 = 0LL;
          if ( v71 )
          {
            do
            {
              v74 = v73;
              v73 *= 2;
              *(_BYTE *)(v72 + v61) = v75[v74 >> 7];
              ++v72;
            }
            while ( v72 != v71 );
          }
          v61 += v11;
          v62 += v12;
        }
        while ( v60 );
      }
    }
    else if ( v60 )
    {
      v65 = (_BYTE *)v64;
      do
      {
        --v60;
        v66 = *v62 << v17;
        v67 = v65;
        v68 = (_BYTE *)v61;
        if ( v61 > (unsigned __int64)&v65[v61] )
          v67 = 0LL;
        if ( v67 )
        {
          do
          {
            v69 = v66;
            v66 *= 2;
            *v68++ = v75[v69 >> 7];
          }
          while ( &v68[-v61] != v67 );
        }
        v61 += v11;
        v62 += v12;
      }
      while ( v60 );
    }
  }
}
