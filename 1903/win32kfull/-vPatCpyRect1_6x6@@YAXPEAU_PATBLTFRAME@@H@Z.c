/*
 * XREFs of ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02BE990
 * Callers:
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BE684 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
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
  unsigned int v27; // edi
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // r14d
  int v33; // edi
  int v34; // esi
  int v35; // ecx
  int v36; // edx
  int v37; // ecx
  int v38; // r14d
  int v39; // ecx
  int v40; // ecx
  _DWORD *v41; // rdi
  int *v42; // rsi
  __int64 v43; // rax
  unsigned __int64 m; // rcx
  char *v45; // rdi
  unsigned int v46; // r15d
  __int64 v47; // rbx
  __int64 v48; // r12
  int v49; // r14d
  int v50; // ecx
  _DWORD *v51; // rdi
  int *v52; // rsi
  __int64 v53; // rax
  unsigned __int64 k; // rcx
  char *v55; // rdi
  unsigned int v56; // r15d
  int v57; // r14d
  _DWORD *v58; // rsi
  _DWORD *v59; // rdi
  __int64 v60; // rax
  unsigned __int64 j; // rcx
  int *v62; // rdi
  unsigned int v63; // r15d
  int v64; // r14d
  __int64 v65; // r13
  int v66; // r12d
  _DWORD *v67; // rsi
  _DWORD *v68; // rdi
  __int64 v69; // rax
  unsigned __int64 i; // rcx
  int *v71; // rdi
  unsigned int v72; // r15d
  bool v73; // zf
  int v74; // [rsp+28h] [rbp-79h]
  int v75; // [rsp+28h] [rbp-79h]
  int v76; // [rsp+28h] [rbp-79h]
  char v77; // [rsp+2Ch] [rbp-75h]
  int v78; // [rsp+30h] [rbp-71h]
  int v79; // [rsp+40h] [rbp-61h]
  unsigned int Size; // [rsp+44h] [rbp-5Dh]
  int Size_4; // [rsp+48h] [rbp-59h]
  int v82; // [rsp+4Ch] [rbp-55h]
  int v83; // [rsp+50h] [rbp-51h]
  int v84; // [rsp+54h] [rbp-4Dh]
  int v85; // [rsp+58h] [rbp-49h]
  int v86; // [rsp+5Ch] [rbp-45h]
  _BYTE *v88; // [rsp+68h] [rbp-39h]
  int v89; // [rsp+70h] [rbp-31h]
  int v90; // [rsp+78h] [rbp-29h]
  int v91; // [rsp+7Ch] [rbp-25h]
  int v92; // [rsp+80h] [rbp-21h]
  int *v93; // [rsp+88h] [rbp-19h]
  int *v94; // [rsp+90h] [rbp-11h]
  __int64 v95; // [rsp+98h] [rbp-9h]
  char *v97; // [rsp+A8h] [rbp+7h]
  _BYTE *v98; // [rsp+B0h] [rbp+Fh]
  _BYTE Src[12]; // [rsp+B8h] [rbp+17h] BYREF
  int v100; // [rsp+C4h] [rbp+23h]

  v2 = a1;
  v3 = (int *)*((_QWORD *)a1 + 3);
  v86 = *((_DWORD *)a1 + 4);
  v93 = v3;
  v89 = 6 * v86;
  do
  {
    v4 = *v3;
    v5 = v3[2];
    v6 = v3[1];
    v84 = v6;
    v7 = aulMsk[*v3 & 0x1F];
    v82 = v7;
    v8 = ~v7;
    v78 = ~v7;
    v9 = aulMsk[v5 & 0x1F];
    if ( v9 == -1 )
      v9 = 0;
    v10 = ~v9;
    v79 = v9;
    v83 = ~v9;
    v94 = (int *)(*(_QWORD *)v2 + *((_DWORD *)v2 + 4) * v3[1] + 4 * ((__int64)*v3 >> 5));
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
      v82 = v10 & v7;
      v8 = ~(v10 & v7);
      v78 = v8;
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
    v98 = (_BYTE *)(v13 + 48);
    v88 = v14;
    v15 = v11 / 3;
    v92 = v11 / 3;
    v16 = v11 % 3;
    Size = 4 * v11;
    v91 = v11 % 3;
    v77 = *((_BYTE *)v2 + 32);
    v85 = (v4 >> 5) % 3;
    v17 = 6;
    v18 = v3[3] - v6;
    if ( v18 >= 6 || (v17 = v3[3] - v6, v18) )
    {
      v19 = v86;
      v20 = v11;
      v21 = v89;
      v95 = v20;
      do
      {
        v22 = v94;
        v97 = (char *)v94;
        v23 = (char *)v94;
        v90 = v17 - 1;
        v94 = (int *)((char *)v94 + v19);
        v24 = (unsigned __int64)(715827883LL * (v3[3] - v84++ + 5)) >> 32;
        v25 = (v24 >> 31) + v24;
        v26 = *v14 >> 2;
        if ( v77 )
          v27 = ((unsigned __int8)(v26 << (6 - v77)) | (v26 >> v77)) & 0x3F;
        else
          v27 = v26;
        v28 = v27 | ((v27 | ((v27 | ((v27 | (v27 << 6)) << 6)) << 6)) << 6);
        if ( v12 == 9 )
        {
          if ( v85 )
          {
            if ( v85 == 1 )
            {
              v29 = 16 * v28;
              v27 >>= 2;
            }
            else
            {
              v29 = v28 << 6;
            }
          }
          else
          {
            v29 = 4 * v28;
            v27 >>= 4;
          }
          v30 = v27 | v29;
          Src[0] = v30;
          LOBYTE(v74) = HIBYTE(v30);
          BYTE1(v74) = BYTE2(v30);
          BYTE2(v74) = BYTE1(v30);
          v31 = v82;
          HIBYTE(v74) = Src[0];
          v32 = v74;
          *(_DWORD *)Src = v74;
          do
          {
            *v22 = v74 & v82 | v8 & *v22;
            v22 = (int *)((char *)v22 + v21);
            --v25;
          }
          while ( v25 );
          v33 = v100;
        }
        else
        {
          *(_DWORD *)Src = (v27 >> 4) | (4 * v28);
          LOBYTE(v75) = Src[3];
          BYTE1(v75) = Src[2];
          HIBYTE(v75) = (v27 >> 4) | (4 * v28);
          BYTE2(v75) = (unsigned __int16)((v27 >> 4) | (4 * v28)) >> 8;
          v34 = v75;
          v32 = v75;
          v35 = (v27 >> 2) | (16 * v28);
          v36 = v27 | (v28 << 6);
          LOBYTE(v75) = HIBYTE(v35);
          BYTE1(v75) = BYTE2(v35);
          BYTE2(v75) = BYTE1(v35);
          HIBYTE(v75) = v35;
          v37 = v75;
          LOBYTE(v76) = HIBYTE(v36);
          BYTE1(v76) = BYTE2(v36);
          BYTE2(v76) = BYTE1(v36);
          HIBYTE(v76) = v36;
          *(_DWORD *)&Src[4] = v37;
          *(_DWORD *)&Src[8] = v76;
          if ( v85 == 1 )
          {
            v32 = v37;
            *(_DWORD *)Src = v37;
            *(_DWORD *)&Src[4] = v76;
            *(_DWORD *)&Src[8] = v34;
          }
          else
          {
            *(_DWORD *)Src = v34;
            if ( v85 == 2 )
            {
              v32 = v76;
              *(_DWORD *)Src = v76;
              *(_DWORD *)&Src[8] = v37;
              *(_DWORD *)&Src[4] = v34;
            }
          }
          v21 = v89;
          v33 = v32;
          v31 = v82;
          v100 = v32;
        }
        if ( !v12 )
        {
          v64 = v31 & v32;
          v65 = 4LL * v16;
          *v22 = v64 | v8 & *v22;
          v66 = v83 & *(_DWORD *)&Src[v65 + 4];
          if ( v15 > 0 )
          {
            v67 = v22 + 1;
            *(_QWORD *)(v22 + 1) = *(_QWORD *)&Src[4];
            v22[3] = v33;
            v68 = v22 + 4;
            v69 = 12LL * (unsigned int)v15;
            for ( i = (unsigned __int64)(v69 - 12) >> 2; i; --i )
              *v68++ = *v67++;
            v22 = (int *)((char *)v22 + v69);
          }
          if ( v16 )
          {
            memmove(v22 + 1, &Src[4], (unsigned int)(4 * v16));
            v8 = v78;
            v22 = (int *)((char *)v22 + v65);
          }
          v21 = v89;
          v22[1] = v66 | v79 & v22[1];
          v71 = (int *)&v97[v89];
          v72 = v25 - 1;
          if ( v72 )
          {
            do
            {
              *v71 = v64 | v8 & *v71;
              memmove(v71 + 1, v97 + 4, Size);
              v8 = v78;
              v71[v95 + 1] = v66 | v79 & v71[v95 + 1];
              v71 = (int *)((char *)v71 + v89);
              --v72;
            }
            while ( v72 );
            v21 = v89;
          }
          v9 = v79;
          goto LABEL_87;
        }
        if ( v12 == 1 )
        {
          v57 = v31 & v32;
          *v22 = v57 | v8 & *v22;
          if ( v15 > 0 )
          {
            v58 = v22 + 1;
            *(_QWORD *)(v22 + 1) = *(_QWORD *)&Src[4];
            v22[3] = v33;
            v59 = v22 + 4;
            v60 = 12LL * (unsigned int)v15;
            for ( j = (unsigned __int64)(v60 - 12) >> 2; j; --j )
              *v59++ = *v58++;
            v22 = (int *)((char *)v22 + v60);
          }
          if ( v16 )
          {
            memmove(v22 + 1, &Src[4], (unsigned int)(4 * v16));
            v8 = v78;
          }
          v21 = v89;
          v62 = (int *)&v23[v89];
          v63 = v25 - 1;
          if ( v63 )
          {
            do
            {
              *v62 = v57 | v8 & *v62;
              memmove(v62 + 1, v23 + 4, Size);
              v8 = v78;
              v62 = (int *)((char *)v62 + v89);
              --v63;
            }
            while ( v63 );
            v9 = v79;
            v21 = v89;
          }
          goto LABEL_87;
        }
        if ( v12 == 2 )
        {
          v48 = 4LL * v16;
          v49 = v83 & *(_DWORD *)&Src[v48];
          if ( v15 > 0 )
          {
            v50 = *(_DWORD *)&Src[8];
            v51 = v22 + 3;
            v52 = v22;
            *(_QWORD *)v22 = *(_QWORD *)Src;
            v22[2] = v50;
            v53 = 12LL * (unsigned int)v15;
            for ( k = (unsigned __int64)(v53 - 12) >> 2; k; --k )
              *v51++ = *v52++;
            v22 = (int *)((char *)v22 + v53);
          }
          if ( v16 )
          {
            memmove(v22, Src, (unsigned int)(4 * v16));
            v22 = (int *)((char *)v22 + v48);
          }
          v9 = v79;
          v21 = v89;
          *v22 = v49 | v79 & *v22;
          v55 = &v23[v89];
          v56 = v25 - 1;
          if ( !v56 )
            goto LABEL_87;
          v47 = v89;
          do
          {
            memmove(v55, v23, Size);
            *(_DWORD *)&v55[4 * v95] = v49 | v79 & *(_DWORD *)&v55[4 * v95];
            v55 += v89;
            --v56;
          }
          while ( v56 );
        }
        else
        {
          if ( v12 != 3 )
          {
            if ( v12 == 8 )
            {
              v38 = v31 & v32;
              v39 = v83 & *(_DWORD *)&Src[4];
              do
              {
                *v22 = v38 | v8 & *v22;
                v22[1] = v39 | v9 & v22[1];
                v22 = (int *)((char *)v22 + v21);
                --v25;
              }
              while ( v25 );
            }
            goto LABEL_87;
          }
          if ( v15 > 0 )
          {
            v40 = *(_DWORD *)&Src[8];
            v41 = v22 + 3;
            v42 = v22;
            *(_QWORD *)v22 = *(_QWORD *)Src;
            v22[2] = v40;
            v43 = 12LL * (unsigned int)v15;
            for ( m = (unsigned __int64)(v43 - 12) >> 2; m; --m )
              *v41++ = *v42++;
            v22 = (int *)((char *)v22 + v43);
          }
          if ( v16 )
            memmove(v22, Src, (unsigned int)(4 * v16));
          v21 = v89;
          v45 = &v23[v89];
          v46 = v25 - 1;
          if ( !v46 )
            goto LABEL_87;
          v47 = v89;
          do
          {
            memmove(v45, v23, Size);
            v45 += v89;
            --v46;
          }
          while ( v46 );
        }
        v21 = v47;
LABEL_87:
        v2 = a1;
        v14 = v88 + 8;
        v88 = v14;
        if ( v14 == v98 )
        {
          v14 = (_BYTE *)*((_QWORD *)a1 + 1);
          v88 = v14;
        }
        v17 = v90;
        v8 = v78;
        v12 = Size_4;
        v16 = v91;
        v15 = v92;
        v3 = v93;
        v19 = v86;
      }
      while ( v90 );
    }
    v3 += 4;
    v73 = a2-- == 1;
    v93 = v3;
  }
  while ( !v73 );
}
