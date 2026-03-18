/*
 * XREFs of ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02A7E18
 * Callers:
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02A7B48 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

void __fastcall vPatCpyRect1_6x6(struct _PATBLTFRAME *a1, int a2)
{
  struct _PATBLTFRAME *v2; // rbx
  int *v3; // r14
  int v4; // r15d
  int v5; // esi
  int v6; // r13d
  int v7; // edi
  int v8; // r9d
  int v9; // r12d
  int v10; // r8d
  int v11; // esi
  int v12; // r10d
  __int64 v13; // r8
  _BYTE *v14; // rdi
  int v15; // r11d
  int v16; // r8d
  int v17; // edx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  int *v22; // rbx
  char *v23; // r13
  unsigned int v24; // edx
  unsigned int v25; // r15d
  unsigned __int8 v26; // al
  unsigned int v27; // edx
  int v28; // edi
  int v29; // edx
  char v30; // cl
  char v31; // eax^2
  int v32; // edx
  int v33; // r14d
  int v34; // edi
  int v35; // esi
  int v36; // ecx
  int v37; // edi
  int v38; // ecx
  int v39; // r14d
  int v40; // ecx
  int v41; // ecx
  _DWORD *v42; // rdi
  int *v43; // rsi
  __int64 v44; // rax
  unsigned __int64 m; // rcx
  char *v46; // rdi
  unsigned int v47; // r15d
  __int64 v48; // rbx
  __int64 v49; // r12
  int v50; // r14d
  int v51; // ecx
  _DWORD *v52; // rdi
  int *v53; // rsi
  __int64 v54; // rax
  unsigned __int64 k; // rcx
  char *v56; // rdi
  unsigned int v57; // r15d
  int v58; // r14d
  _DWORD *v59; // rsi
  _DWORD *v60; // rdi
  __int64 v61; // rax
  unsigned __int64 j; // rcx
  int *v63; // rdi
  unsigned int v64; // r15d
  int v65; // r14d
  __int64 v66; // r13
  int v67; // r12d
  _DWORD *v68; // rsi
  _DWORD *v69; // rdi
  __int64 v70; // rax
  unsigned __int64 i; // rcx
  int *v72; // rdi
  unsigned int v73; // r15d
  bool v74; // zf
  int v75; // [rsp+28h] [rbp-79h]
  int v76; // [rsp+28h] [rbp-79h]
  int v77; // [rsp+28h] [rbp-79h]
  char v78; // [rsp+2Ch] [rbp-75h]
  int v79; // [rsp+30h] [rbp-71h]
  int v80; // [rsp+40h] [rbp-61h]
  unsigned int Size; // [rsp+44h] [rbp-5Dh]
  int Size_4; // [rsp+48h] [rbp-59h]
  int v83; // [rsp+4Ch] [rbp-55h]
  int v84; // [rsp+50h] [rbp-51h]
  int v85; // [rsp+54h] [rbp-4Dh]
  int v86; // [rsp+58h] [rbp-49h]
  int v87; // [rsp+5Ch] [rbp-45h]
  _BYTE *v89; // [rsp+68h] [rbp-39h]
  int v90; // [rsp+70h] [rbp-31h]
  int v91; // [rsp+78h] [rbp-29h]
  int v92; // [rsp+7Ch] [rbp-25h]
  int v93; // [rsp+80h] [rbp-21h]
  int *v94; // [rsp+88h] [rbp-19h]
  int *v95; // [rsp+90h] [rbp-11h]
  __int64 v96; // [rsp+98h] [rbp-9h]
  char *v98; // [rsp+A8h] [rbp+7h]
  _BYTE *v99; // [rsp+B0h] [rbp+Fh]
  _BYTE Src[12]; // [rsp+B8h] [rbp+17h] BYREF
  int v101; // [rsp+C4h] [rbp+23h]

  v2 = a1;
  v3 = (int *)*((_QWORD *)a1 + 3);
  v87 = *((_DWORD *)a1 + 4);
  v94 = v3;
  v90 = 6 * v87;
  do
  {
    v4 = *v3;
    v5 = v3[2];
    v6 = v3[1];
    v85 = v6;
    v7 = aulMsk[*v3 & 0x1F];
    v83 = v7;
    v8 = ~v7;
    v79 = ~v7;
    v9 = aulMsk[v5 & 0x1F];
    if ( v9 == -1 )
      v9 = 0;
    v10 = ~v9;
    v80 = v9;
    v84 = ~v9;
    v95 = (int *)(*(_QWORD *)v2 + v6 * *((_DWORD *)v2 + 4) + 4 * ((__int64)*v3 >> 5));
    v11 = (v5 >> 5) - ((v4 + 31) >> 5);
    if ( v11 == -1 )
      goto LABEL_12;
    if ( v11 )
    {
      if ( v7 == -1 )
        v12 = 3 - (v9 != 0);
      else
        v12 = v9 == 0;
      goto LABEL_13;
    }
    if ( v7 == -1 || !v9 )
    {
LABEL_12:
      v12 = 9;
      v83 = v10 & v7;
      v8 = ~(v10 & v7);
      v79 = v8;
    }
    else
    {
      v12 = 8;
    }
LABEL_13:
    v13 = *((_QWORD *)v2 + 1);
    Size_4 = v12;
    if ( v6 == *((_DWORD *)v2 + 9) )
      v14 = (_BYTE *)*((_QWORD *)v2 + 1);
    else
      v14 = (_BYTE *)(v13 + 8LL * ((6 - 6 * ((v6 - *((_DWORD *)v2 + 9)) / 6) + v6 - *((_DWORD *)v2 + 9)) % 6));
    v99 = (_BYTE *)(v13 + 48);
    v89 = v14;
    v15 = v11 / 3;
    v93 = v11 / 3;
    v16 = v11 % 3;
    Size = 4 * v11;
    v92 = v11 % 3;
    v78 = *((_BYTE *)v2 + 32);
    v86 = (v4 >> 5) % 3;
    v17 = 6;
    v18 = v3[3] - v6;
    if ( v18 >= 6 || (v17 = v3[3] - v6, v18) )
    {
      v19 = v87;
      v20 = v11;
      v21 = v90;
      v96 = v20;
      while ( 1 )
      {
        v22 = v95;
        v98 = (char *)v95;
        v23 = (char *)v95;
        v91 = v17 - 1;
        v95 = (int *)((char *)v95 + v19);
        v24 = (unsigned __int64)(715827883LL * (v3[3] - v85++ + 5)) >> 32;
        v25 = (v24 >> 31) + v24;
        v26 = *v14 >> 2;
        v27 = v78 ? ((unsigned __int8)(v26 << (6 - v78)) | (v26 >> v78)) & 0x3F : v26;
        v28 = v27 | ((v27 | ((v27 | ((v27 | (v27 << 6)) << 6)) << 6)) << 6);
        if ( v12 == 9 )
          break;
        HIBYTE(v76) = (v27 >> 4) | (4 * v28);
        LOBYTE(v76) = ((v27 >> 4) | (4 * v28)) >> 24;
        BYTE1(v76) = ((v27 >> 4) | (4 * v28)) >> 16;
        BYTE2(v76) = (unsigned __int16)((v27 >> 4) | (4 * v28)) >> 8;
        v35 = v76;
        v33 = v76;
        v36 = (v27 >> 2) | (16 * v28);
        v37 = v27 | (v28 << 6);
        HIBYTE(v76) = v36;
        LOBYTE(v76) = HIBYTE(v36);
        BYTE1(v76) = BYTE2(v36);
        BYTE2(v76) = BYTE1(v36);
        v38 = v76;
        LOBYTE(v77) = HIBYTE(v37);
        BYTE1(v77) = BYTE2(v37);
        BYTE2(v77) = BYTE1(v37);
        HIBYTE(v77) = v37;
        *(_DWORD *)&Src[4] = v38;
        *(_DWORD *)&Src[8] = v77;
        if ( v86 == 1 )
        {
          v33 = v38;
          *(_DWORD *)Src = v38;
          *(_DWORD *)&Src[4] = v77;
          *(_DWORD *)&Src[8] = v35;
        }
        else
        {
          *(_DWORD *)Src = v35;
          if ( v86 == 2 )
          {
            v33 = v77;
            *(_DWORD *)Src = v77;
            *(_DWORD *)&Src[8] = v38;
            *(_DWORD *)&Src[4] = v35;
          }
        }
        v21 = v90;
        v34 = v33;
        v32 = v83;
        v101 = v33;
LABEL_37:
        if ( !v12 )
        {
          v65 = v32 & v33;
          v66 = 4LL * v16;
          *v22 = v65 | v8 & *v22;
          v67 = v84 & *(_DWORD *)&Src[v66 + 4];
          if ( v15 > 0 )
          {
            v68 = v22 + 1;
            *(_QWORD *)(v22 + 1) = *(_QWORD *)&Src[4];
            v22[3] = v34;
            v69 = v22 + 4;
            v70 = 12LL * (unsigned int)v15;
            for ( i = (unsigned __int64)(v70 - 12) >> 2; i; --i )
              *v69++ = *v68++;
            v22 = (int *)((char *)v22 + v70);
          }
          if ( v16 )
          {
            memmove(v22 + 1, &Src[4], (unsigned int)(4 * v16));
            v8 = v79;
            v22 = (int *)((char *)v22 + v66);
          }
          v21 = v90;
          v22[1] = v67 | v22[1] & v80;
          v72 = (int *)&v98[v90];
          v73 = v25 - 1;
          if ( v73 )
          {
            do
            {
              *v72 = v65 | v8 & *v72;
              memmove(v72 + 1, v98 + 4, Size);
              v8 = v79;
              v72[v96 + 1] = v67 | v72[v96 + 1] & v80;
              v72 = (int *)((char *)v72 + v90);
              --v73;
            }
            while ( v73 );
            v21 = v90;
          }
          v9 = v80;
          goto LABEL_88;
        }
        if ( v12 == 1 )
        {
          v58 = v32 & v33;
          *v22 = v58 | v8 & *v22;
          if ( v15 > 0 )
          {
            v59 = v22 + 1;
            *(_QWORD *)(v22 + 1) = *(_QWORD *)&Src[4];
            v22[3] = v34;
            v60 = v22 + 4;
            v61 = 12LL * (unsigned int)v15;
            for ( j = (unsigned __int64)(v61 - 12) >> 2; j; --j )
              *v60++ = *v59++;
            v22 = (int *)((char *)v22 + v61);
          }
          if ( v16 )
          {
            memmove(v22 + 1, &Src[4], (unsigned int)(4 * v16));
            v8 = v79;
          }
          v21 = v90;
          v63 = (int *)&v23[v90];
          v64 = v25 - 1;
          if ( v64 )
          {
            do
            {
              *v63 = v58 | v8 & *v63;
              memmove(v63 + 1, v23 + 4, Size);
              v8 = v79;
              v63 = (int *)((char *)v63 + v90);
              --v64;
            }
            while ( v64 );
            v9 = v80;
            v21 = v90;
          }
          goto LABEL_88;
        }
        if ( v12 == 2 )
        {
          v49 = 4LL * v16;
          v50 = v84 & *(_DWORD *)&Src[v49];
          if ( v15 > 0 )
          {
            v51 = *(_DWORD *)&Src[8];
            v52 = v22 + 3;
            v53 = v22;
            *(_QWORD *)v22 = *(_QWORD *)Src;
            v22[2] = v51;
            v54 = 12LL * (unsigned int)v15;
            for ( k = (unsigned __int64)(v54 - 12) >> 2; k; --k )
              *v52++ = *v53++;
            v22 = (int *)((char *)v22 + v54);
          }
          if ( v16 )
          {
            memmove(v22, Src, (unsigned int)(4 * v16));
            v22 = (int *)((char *)v22 + v49);
          }
          v9 = v80;
          v21 = v90;
          *v22 = v50 | v80 & *v22;
          v56 = &v23[v90];
          v57 = v25 - 1;
          if ( !v57 )
            goto LABEL_88;
          v48 = v90;
          do
          {
            memmove(v56, v23, Size);
            *(_DWORD *)&v56[4 * v96] = v50 | v80 & *(_DWORD *)&v56[4 * v96];
            v56 += v90;
            --v57;
          }
          while ( v57 );
        }
        else
        {
          if ( v12 != 3 )
          {
            if ( v12 == 8 )
            {
              v39 = v32 & v33;
              v40 = v84 & *(_DWORD *)&Src[4];
              do
              {
                *v22 = v39 | v8 & *v22;
                v22[1] = v40 | v22[1] & v9;
                v22 = (int *)((char *)v22 + v21);
                --v25;
              }
              while ( v25 );
            }
            goto LABEL_88;
          }
          if ( v15 > 0 )
          {
            v41 = *(_DWORD *)&Src[8];
            v42 = v22 + 3;
            v43 = v22;
            *(_QWORD *)v22 = *(_QWORD *)Src;
            v22[2] = v41;
            v44 = 12LL * (unsigned int)v15;
            for ( m = (unsigned __int64)(v44 - 12) >> 2; m; --m )
              *v42++ = *v43++;
            v22 = (int *)((char *)v22 + v44);
          }
          if ( v16 )
            memmove(v22, Src, (unsigned int)(4 * v16));
          v21 = v90;
          v46 = &v23[v90];
          v47 = v25 - 1;
          if ( !v47 )
            goto LABEL_88;
          v48 = v90;
          do
          {
            memmove(v46, v23, Size);
            v46 += v90;
            --v47;
          }
          while ( v47 );
        }
        v21 = v48;
LABEL_88:
        v2 = a1;
        v14 = v89 + 8;
        v89 = v14;
        if ( v14 == v99 )
        {
          v14 = (_BYTE *)*((_QWORD *)a1 + 1);
          v89 = v14;
        }
        v17 = v91;
        v8 = v79;
        v12 = Size_4;
        v16 = v92;
        v15 = v93;
        v3 = v94;
        v19 = v87;
        if ( !v91 )
          goto LABEL_91;
      }
      if ( !v86 )
      {
        v29 = (4 * v28) | (v27 >> 4);
        goto LABEL_27;
      }
      if ( v86 == 1 )
      {
        v29 = (16 * v28) | (v27 >> 2);
LABEL_27:
        v30 = v29;
      }
      else
      {
        v29 = v27 | (v28 << 6);
        v30 = v29;
      }
      HIBYTE(v75) = v30;
      LOBYTE(v75) = HIBYTE(v29);
      v31 = BYTE2(v29);
      BYTE2(v75) = BYTE1(v29);
      v32 = v83;
      BYTE1(v75) = v31;
      v33 = v75;
      *(_DWORD *)Src = v75;
      do
      {
        *v22 = v75 & v83 | v8 & *v22;
        v22 = (int *)((char *)v22 + v21);
        --v25;
      }
      while ( v25 );
      v34 = v101;
      goto LABEL_37;
    }
LABEL_91:
    v3 += 4;
    v74 = a2-- == 1;
    v94 = v3;
  }
  while ( !v74 );
}
