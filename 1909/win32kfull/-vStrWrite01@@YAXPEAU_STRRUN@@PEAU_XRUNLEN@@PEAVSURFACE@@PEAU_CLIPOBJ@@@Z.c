/*
 * XREFs of ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00D5740
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00D5BE8 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00D5C6C (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00D5CE8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

void __fastcall vStrWrite01(struct _STRRUN *a1, LONG *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  LONG *v4; // r15
  XCLIPOBJ *v5; // r12
  struct SURFACE *v6; // rbx
  struct _XRUNLEN *v7; // r13
  LONG *v8; // r14
  __int64 v9; // rsi
  LONG v10; // ecx
  int v11; // r12d
  int *v12; // r8
  int *v13; // r10
  char v14; // dl
  int v15; // r9d
  __int64 v16; // rsi
  int *v17; // r13
  int v18; // eax
  int v19; // r11d
  int v20; // ecx
  int v21; // edx
  int v22; // r12d
  __int64 v23; // r9
  __int64 v24; // r13
  int v25; // r12d
  int v26; // r10d
  int v27; // r11d
  int v28; // r9d
  int v29; // r10d
  int v30; // r11d
  int v31; // r9d
  int v32; // r8d
  char *v33; // r9
  int v34; // esi
  size_t v35; // r13
  char *v36; // rbx
  int v37; // r9d
  int *v38; // rcx
  int v39; // r10d
  int v40; // edx
  LONG v41; // esi
  LONG v42; // r14d
  __int64 v43; // rdx
  XCLIPOBJ *v44; // rcx
  LONG v45; // ebx
  __int64 v46; // rax
  int v47; // r9d
  char v48; // r12
  unsigned int v49; // r12d
  int *v50; // r13
  int v51; // r14d
  char v52; // al
  __int64 v53; // rdx
  int *v54; // r8
  int v55; // eax
  char v56; // [rsp+38h] [rbp-39h]
  int v57; // [rsp+3Ch] [rbp-35h]
  LONG v58; // [rsp+3Ch] [rbp-35h]
  __int64 v59; // [rsp+40h] [rbp-31h]
  LONG v60; // [rsp+40h] [rbp-31h]
  struct _RECTL si128; // [rsp+48h] [rbp-29h] BYREF
  int v62; // [rsp+58h] [rbp-19h]
  __int64 v63; // [rsp+60h] [rbp-11h]
  int *v64; // [rsp+68h] [rbp-9h]
  __int64 v65; // [rsp+70h] [rbp-1h]
  LONG *v66; // [rsp+78h] [rbp+7h]

  if ( a2 )
  {
    v4 = (LONG *)((char *)a1 + 8);
    v5 = (XCLIPOBJ *)a4;
    v66 = (LONG *)((char *)a1 + 8);
    v6 = a3;
    v7 = (struct _XRUNLEN *)a2;
    v8 = (LONG *)a1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v41 = *v8;
      v42 = v8[1];
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v58 = v41;
      XCLIPOBJ::vFindScan(v5, &si128, v41);
      while ( v42 )
      {
        v60 = --v42;
        if ( v41 >= si128.top && v41 < si128.bottom )
        {
          v43 = *((_QWORD *)v6 + 10) + v41 * *((_DWORD *)v6 + 22);
          v65 = v43;
          if ( v4 != (LONG *)v7 )
          {
            v44 = (XCLIPOBJ *)a4;
            do
            {
              v45 = *v4;
              v46 = (__int64)*v4 >> 5;
              v47 = *v4 + v4[1];
              v48 = *v4;
              v62 = v47;
              v49 = v48 & 0x1F;
              v50 = (int *)(v43 + 4 * v46);
              if ( v45 < 0 || v45 >= *((_DWORD *)a3 + 14) )
              {
                v52 = 0;
                v51 = 0;
              }
              else
              {
                v51 = *v50;
                v52 = 1;
              }
              v56 = v52;
              if ( v45 < v47 )
              {
                v53 = v49;
                v54 = v4 + 2;
                v63 = v49;
                v64 = v4 + 2;
                do
                {
                  if ( v45 < si128.left || v45 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment(v44, &si128, v45, v47);
                    v53 = v63;
                    v54 = v64;
                    v47 = v62;
                  }
                  if ( v45 >= si128.left && v45 < si128.right )
                  {
                    v55 = dword_1C02E4440[v53];
                    if ( *v54 )
                      v51 |= v55;
                    else
                      v51 &= ~v55;
                  }
                  ++v53;
                  ++v54;
                  ++v49;
                  v63 = v53;
                  ++v45;
                  v64 = v54;
                  if ( (v49 & 0x20) != 0 )
                  {
                    if ( v56 )
                      *v50 = v51;
                    v53 = 0LL;
                    ++v50;
                    v49 = 0;
                    v63 = 0LL;
                    if ( v45 < 0 || v45 >= *((_DWORD *)a3 + 14) )
                    {
                      v52 = 0;
                      v56 = 0;
                      v51 = 0;
                    }
                    else
                    {
                      v51 = *v50;
                      v52 = 1;
                      v56 = 1;
                    }
                  }
                  else
                  {
                    v52 = v56;
                  }
                }
                while ( v45 < v47 );
                v43 = v65;
              }
              if ( v52 )
                *v50 = v51;
              v7 = (struct _XRUNLEN *)a2;
              v4 += v4[1] + 2;
            }
            while ( v4 != a2 );
            v41 = v58;
            v6 = a3;
            v4 = v66;
            v5 = (XCLIPOBJ *)a4;
            v42 = v60;
          }
        }
        v58 = ++v41;
        if ( v41 < si128.top || v41 >= si128.bottom )
          XCLIPOBJ::vFindScan(v5, &si128, v41);
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      v59 = v9;
      if ( v4 != a2 )
      {
        do
        {
          v10 = *v4;
          v11 = *v4 + v4[1];
          v12 = (int *)(v9 + 4 * ((__int64)*v4 >> 5));
          v13 = v12;
          if ( *v4 < v11 )
          {
            v14 = v10 & 0x1F;
            v15 = *v12;
            if ( (unsigned __int64)v12 < *((_QWORD *)v6 + 9) + (unsigned __int64)*((unsigned int *)v6 + 16) )
            {
              v16 = v10 & 0x1F;
              v17 = v4 + 2;
              do
              {
                v18 = *v17++;
                v19 = dword_1C02E4440[v16];
                if ( v18 )
                  v15 |= v19;
                else
                  v15 &= ~v19;
                ++v14;
                ++v16;
                if ( ++v10 >= v11 )
                  break;
                if ( (v14 & 0x20) != 0 )
                {
                  *v13 = v15;
                  v14 = 0;
                  ++v13;
                  v16 = 0LL;
                  v15 = *v13;
                }
              }
              while ( (unsigned __int64)v13 < *((_QWORD *)v6 + 9) + (unsigned __int64)*((unsigned int *)v6 + 16) );
              v8 = (LONG *)a1;
              v9 = v59;
              v7 = (struct _XRUNLEN *)a2;
            }
            *v13 = v15;
            v20 = v8[1];
            if ( v20 > 1 )
            {
              v21 = *v4 >> 5;
              v22 = *v4 + v4[1];
              v23 = *v4 & 0x1F;
              v24 = v22 & 0x1F;
              v25 = v22 >> 5;
              v57 = v24;
              if ( v21 == v25 )
              {
                v26 = dword_1C02E3820[v23] & ~dword_1C02E3820[v24];
                v27 = 1;
                v28 = *v12;
                do
                {
                  ++v27;
                  v12 = (int *)((char *)v12 + *((int *)v6 + 22));
                  v28 = v26 & v28 | *v12 & ~v26;
                  *v12 = v28;
                }
                while ( v27 < v8[1] );
              }
              else
              {
                if ( (_DWORD)v23 )
                {
                  v29 = 1;
                  v30 = ~dword_1C02E3820[v23];
                  v31 = *v12 & dword_1C02E3820[v23];
                  do
                  {
                    ++v29;
                    v12 = (int *)((char *)v12 + *((int *)v6 + 22));
                    *v12 = v31 | v30 & *v12;
                    v20 = v8[1];
                  }
                  while ( v29 < v20 );
                  ++v21;
                }
                v32 = v20;
                if ( v21 != v25 )
                {
                  v33 = (char *)(v9 + 4LL * v21);
                  v34 = 1;
                  if ( v20 > 1 )
                  {
                    v35 = 4 * (v25 - v21);
                    do
                    {
                      v36 = &v33[*((int *)v6 + 22)];
                      memmove(v36, v33, v35);
                      v32 = v8[1];
                      ++v34;
                      v33 = v36;
                      v6 = a3;
                    }
                    while ( v34 < v32 );
                    LODWORD(v24) = v57;
                  }
                }
                v9 = v59;
                if ( (_DWORD)v24 )
                {
                  v37 = 1;
                  v38 = (int *)(v59 + 4LL * v25);
                  v39 = dword_1C02E3820[(unsigned int)v24];
                  v40 = *v38 & ~v39;
                  if ( v32 > 1 )
                  {
                    do
                    {
                      ++v37;
                      v38 = (int *)((char *)v38 + *((int *)v6 + 22));
                      *v38 = v40 | v39 & *v38;
                    }
                    while ( v37 < v8[1] );
                  }
                }
              }
              v7 = (struct _XRUNLEN *)a2;
            }
          }
          v4 += v4[1] + 2;
        }
        while ( v4 != (LONG *)v7 );
      }
    }
  }
}
