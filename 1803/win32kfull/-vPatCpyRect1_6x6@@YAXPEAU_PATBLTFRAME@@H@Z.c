/*
 * XREFs of ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C0294108
 * Callers:
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C0293E38 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void __fastcall vPatCpyRect1_6x6(struct _PATBLTFRAME *a1, int a2)
{
  struct _PATBLTFRAME *v2; // rbx
  int *v3; // r15
  int v4; // r8d
  int v5; // esi
  int v6; // r13d
  int v7; // edi
  int v8; // r10d
  int v9; // r12d
  int v10; // r9d
  int v11; // esi
  int v12; // r11d
  __int64 v13; // r9
  _BYTE *v14; // rdi
  int v15; // r9d
  int v16; // edx
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  int *v22; // rbx
  char *v23; // r13
  int v24; // ecx
  int v25; // r15d
  unsigned __int8 v26; // al
  unsigned int v27; // edi
  int v28; // edx
  int v29; // edx
  int v30; // edx
  char v31; // eax^2
  int v32; // edx
  int v33; // r14d
  int v34; // edi
  int v35; // esi
  int v36; // ecx
  int v37; // edx
  int v38; // ecx
  int v39; // r14d
  int v40; // ecx
  int v41; // eax
  _DWORD *v42; // rdi
  int *v43; // rsi
  unsigned __int64 j; // rcx
  char *v45; // rdi
  int v46; // r15d
  __int64 v47; // rbx
  __int64 v48; // r12
  int v49; // r14d
  _DWORD *v50; // rdi
  int *v51; // rsi
  unsigned __int64 i; // rcx
  char *v53; // rdi
  int v54; // r15d
  int v55; // r14d
  _DWORD *v56; // rsi
  unsigned __int64 v57; // rcx
  _DWORD *v58; // rdi
  int *v59; // rdi
  int v60; // r15d
  int v61; // r14d
  __int64 v62; // r13
  int v63; // r12d
  _DWORD *v64; // rsi
  unsigned __int64 v65; // rcx
  _DWORD *v66; // rdi
  int *v67; // rdi
  int v68; // r15d
  bool v69; // zf
  int v70; // [rsp+28h] [rbp-79h]
  int v71; // [rsp+28h] [rbp-79h]
  int v72; // [rsp+28h] [rbp-79h]
  char v73; // [rsp+2Ch] [rbp-75h]
  int v74; // [rsp+30h] [rbp-71h]
  int v75; // [rsp+40h] [rbp-61h]
  int v76; // [rsp+44h] [rbp-5Dh]
  unsigned int Size; // [rsp+48h] [rbp-59h]
  int Size_4; // [rsp+4Ch] [rbp-55h]
  int v79; // [rsp+50h] [rbp-51h]
  int v80; // [rsp+54h] [rbp-4Dh]
  int v81; // [rsp+58h] [rbp-49h]
  int v82; // [rsp+5Ch] [rbp-45h]
  _BYTE *v84; // [rsp+68h] [rbp-39h]
  int v85; // [rsp+70h] [rbp-31h]
  char v86; // [rsp+74h] [rbp-2Dh]
  int v87; // [rsp+78h] [rbp-29h]
  int v88; // [rsp+7Ch] [rbp-25h]
  int *v89; // [rsp+80h] [rbp-21h]
  int *v90; // [rsp+88h] [rbp-19h]
  __int64 v91; // [rsp+90h] [rbp-11h]
  char *v93; // [rsp+A0h] [rbp-1h]
  _BYTE *v94; // [rsp+A8h] [rbp+7h]
  __int64 v95; // [rsp+B0h] [rbp+Fh]
  _BYTE Src[12]; // [rsp+B8h] [rbp+17h] BYREF
  int v97; // [rsp+C4h] [rbp+23h]

  v2 = a1;
  v3 = (int *)*((_QWORD *)a1 + 3);
  v82 = *((_DWORD *)a1 + 4);
  v89 = v3;
  v85 = 6 * v82;
  do
  {
    v4 = *v3;
    v5 = v3[2];
    v6 = v3[1];
    v81 = v6;
    v7 = *((_DWORD *)&aulMsk + (*v3 & 0x1F));
    v79 = v7;
    v8 = ~v7;
    v74 = ~v7;
    v9 = *((_DWORD *)&aulMsk + (v5 & 0x1F));
    if ( v9 == -1 )
      v9 = 0;
    v10 = ~v9;
    v75 = v9;
    v80 = ~v9;
    v90 = (int *)(*(_QWORD *)v2 + v6 * *((_DWORD *)v2 + 4) + 4 * ((__int64)*v3 >> 5));
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
      v79 = v10 & v7;
      v8 = ~(v10 & v7);
      v74 = v8;
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
    v94 = (_BYTE *)(v13 + 48);
    v84 = v14;
    v76 = v11 / 3;
    v15 = v11 % 3;
    Size = 4 * v11;
    v88 = v11 % 3;
    v16 = 6;
    LODWORD(v17) = (v4 >> 5) % 3;
    v73 = *((_BYTE *)v2 + 32);
    v18 = v3[3] - v6;
    if ( v18 >= 6 || (v16 = v3[3] - v6, v18) )
    {
      v19 = v82;
      v86 = 6 - *((_BYTE *)v2 + 32);
      v20 = v11;
      v21 = v85;
      v17 = (int)v17;
      v91 = v20;
      v95 = (int)v17;
      do
      {
        v22 = v90;
        v23 = (char *)v90;
        v93 = (char *)v90;
        v87 = v16 - 1;
        v90 = (int *)((char *)v90 + v19);
        v24 = v3[3] - v81++ + 5;
        v25 = v24 / 6;
        v26 = *v14 >> 2;
        if ( v73 )
          v27 = ((unsigned __int8)(v26 << v86) | (v26 >> v73)) & 0x3F;
        else
          v27 = v26;
        v28 = v27 | ((v27 | ((v27 | ((v27 | (v27 << 6)) << 6)) << 6)) << 6);
        if ( v12 == 9 )
        {
          if ( v17 )
          {
            if ( v17 == 1 )
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
          LOBYTE(v70) = HIBYTE(v30);
          v31 = BYTE2(v30);
          BYTE2(v70) = BYTE1(v30);
          HIBYTE(v70) = v30;
          v32 = v79;
          BYTE1(v70) = v31;
          v33 = v70;
          *(_DWORD *)Src = v70;
          do
          {
            *v22 = v70 & v79 | v8 & *v22;
            v22 = (int *)((char *)v22 + v21);
            --v25;
          }
          while ( v25 );
          v34 = v97;
        }
        else
        {
          HIBYTE(v71) = (v27 >> 4) | (4 * v28);
          LOBYTE(v71) = ((v27 >> 4) | (4 * v28)) >> 24;
          BYTE1(v71) = ((v27 >> 4) | (4 * v28)) >> 16;
          BYTE2(v71) = (unsigned __int16)((v27 >> 4) | (4 * v28)) >> 8;
          v35 = v71;
          v33 = v71;
          v36 = (v27 >> 2) | (16 * v28);
          v37 = v27 | (v28 << 6);
          HIBYTE(v71) = v36;
          LOBYTE(v71) = HIBYTE(v36);
          BYTE1(v71) = BYTE2(v36);
          BYTE2(v71) = BYTE1(v36);
          v38 = v71;
          LOBYTE(v72) = HIBYTE(v37);
          BYTE1(v72) = BYTE2(v37);
          BYTE2(v72) = BYTE1(v37);
          HIBYTE(v72) = v37;
          *(_DWORD *)&Src[8] = v72;
          *(_DWORD *)&Src[4] = v38;
          if ( v17 == 1 )
          {
            v33 = v38;
            *(_DWORD *)Src = v38;
            *(_DWORD *)&Src[4] = v72;
            *(_DWORD *)&Src[8] = v35;
          }
          else
          {
            *(_DWORD *)Src = v35;
            if ( v17 == 2 )
            {
              v33 = v72;
              *(_DWORD *)Src = v72;
              *(_DWORD *)&Src[8] = v38;
              *(_DWORD *)&Src[4] = v35;
            }
          }
          v21 = v85;
          v34 = v33;
          v32 = v79;
          v97 = v33;
        }
        if ( !v12 )
        {
          v61 = v32 & v33;
          v62 = 4LL * v15;
          *v22 = v61 | v8 & *v22;
          v63 = v80 & *(_DWORD *)&Src[v62 + 4];
          if ( v76 > 0 )
          {
            v64 = v22 + 1;
            *(_QWORD *)(v22 + 1) = *(_QWORD *)&Src[4];
            v22[3] = v34;
            v65 = (12 * (unsigned __int64)(unsigned int)v76 - 12) >> 2;
            v66 = v22 + 4;
            while ( v65 )
            {
              *v66++ = *v64++;
              --v65;
            }
            v22 += 3 * (unsigned int)v76;
          }
          if ( v15 )
          {
            memmove(v22 + 1, &Src[4], (unsigned int)(4 * v15));
            v8 = v74;
            v22 = (int *)((char *)v22 + v62);
          }
          v21 = v85;
          v22[1] = v63 | v75 & v22[1];
          v67 = (int *)&v93[v85];
          v68 = v25 - 1;
          if ( v68 )
          {
            do
            {
              *v67 = v61 | v8 & *v67;
              memmove(v67 + 1, v93 + 4, Size);
              v8 = v74;
              v67[v91 + 1] = v63 | v67[v91 + 1] & v75;
              v67 = (int *)((char *)v67 + v85);
              --v68;
            }
            while ( v68 );
            v21 = v85;
          }
          v9 = v75;
          goto LABEL_87;
        }
        if ( v12 == 1 )
        {
          v55 = v32 & v33;
          *v22 = v55 | v8 & *v22;
          if ( v76 > 0 )
          {
            v56 = v22 + 1;
            *(_QWORD *)(v22 + 1) = *(_QWORD *)&Src[4];
            v22[3] = v34;
            v57 = (12 * (unsigned __int64)(unsigned int)v76 - 12) >> 2;
            v58 = v22 + 4;
            while ( v57 )
            {
              *v58++ = *v56++;
              --v57;
            }
            v22 += 3 * (unsigned int)v76;
          }
          if ( v15 )
          {
            memmove(v22 + 1, &Src[4], (unsigned int)(4 * v15));
            v8 = v74;
          }
          v21 = v85;
          v59 = (int *)&v23[v85];
          v60 = v25 - 1;
          if ( v60 )
          {
            do
            {
              *v59 = v55 | v8 & *v59;
              memmove(v59 + 1, v23 + 4, Size);
              v8 = v74;
              v59 = (int *)((char *)v59 + v85);
              --v60;
            }
            while ( v60 );
            v9 = v75;
            v21 = v85;
          }
          goto LABEL_87;
        }
        if ( v12 == 2 )
        {
          v48 = 4LL * v15;
          v49 = v80 & *(_DWORD *)&Src[v48];
          if ( v76 > 0 )
          {
            v50 = v22 + 3;
            *(_QWORD *)v22 = *(_QWORD *)Src;
            v51 = v22;
            v22[2] = *(_DWORD *)&Src[8];
            for ( i = (12 * (unsigned __int64)(unsigned int)v76 - 12) >> 2; i; --i )
              *v50++ = *v51++;
            v22 += 3 * (unsigned int)v76;
          }
          if ( v15 )
          {
            memmove(v22, Src, (unsigned int)(4 * v15));
            v22 = (int *)((char *)v22 + v48);
          }
          v9 = v75;
          v21 = v85;
          *v22 = v49 | v75 & *v22;
          v53 = &v23[v85];
          v54 = v25 - 1;
          if ( !v54 )
            goto LABEL_87;
          v47 = v85;
          do
          {
            memmove(v53, v23, Size);
            *(_DWORD *)&v53[4 * v91] = v49 | v75 & *(_DWORD *)&v53[4 * v91];
            v53 += v85;
            --v54;
          }
          while ( v54 );
        }
        else
        {
          if ( v12 != 3 )
          {
            if ( v12 == 8 )
            {
              v39 = v32 & v33;
              v40 = v80 & *(_DWORD *)&Src[4];
              do
              {
                *v22 = v39 | v8 & *v22;
                v22[1] = v40 | v9 & v22[1];
                v22 = (int *)((char *)v22 + v21);
                --v25;
              }
              while ( v25 );
            }
            goto LABEL_87;
          }
          if ( v76 > 0 )
          {
            v41 = *(_DWORD *)&Src[8];
            v42 = v22 + 3;
            v43 = v22;
            *(_QWORD *)v22 = *(_QWORD *)Src;
            v22[2] = v41;
            for ( j = (12 * (unsigned __int64)(unsigned int)v76 - 12) >> 2; j; --j )
              *v42++ = *v43++;
            v22 += 3 * (unsigned int)v76;
          }
          if ( v15 )
            memmove(v22, Src, (unsigned int)(4 * v15));
          v21 = v85;
          v45 = &v23[v85];
          v46 = v25 - 1;
          if ( !v46 )
            goto LABEL_87;
          v47 = v85;
          do
          {
            memmove(v45, v23, Size);
            v45 += v85;
            --v46;
          }
          while ( v46 );
        }
        v21 = v47;
LABEL_87:
        v2 = a1;
        v14 = v84 + 8;
        v84 = v14;
        if ( v14 == v94 )
        {
          v14 = (_BYTE *)*((_QWORD *)a1 + 1);
          v84 = v14;
        }
        v16 = v87;
        v8 = v74;
        v12 = Size_4;
        v15 = v88;
        v3 = v89;
        v17 = v95;
        v19 = v82;
      }
      while ( v87 );
    }
    v3 += 4;
    v69 = a2-- == 1;
    v89 = v3;
  }
  while ( !v69 );
}
