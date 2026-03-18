/*
 * XREFs of ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00F1D20
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00F21E4 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00F2268 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

void __fastcall vStrWrite01(struct _STRRUN *a1, LONG *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  LONG *v4; // r15
  XCLIPOBJ *v5; // r12
  struct SURFACE *v6; // rbx
  __int64 v8; // r10
  LONG v9; // ecx
  int v10; // esi
  int *v11; // r8
  int *v12; // r9
  char v13; // dl
  int v14; // r10d
  __int64 v15; // r11
  _DWORD *v16; // r12
  int v18; // ecx
  int v19; // edx
  int v20; // r12d
  __int64 v21; // r9
  __int64 v22; // r13
  int v23; // r12d
  int v24; // r10d
  int v25; // r11d
  int v26; // r9d
  int v27; // r10d
  int v28; // r11d
  int v29; // r9d
  int v30; // r8d
  int v31; // esi
  char *v32; // r9
  size_t v33; // r13
  char *v34; // rbx
  int v35; // r9d
  int *v36; // rcx
  int v37; // r10d
  int v38; // edx
  LONG v39; // esi
  int v40; // r14d
  struct _XRUNLEN *v41; // rdx
  __int64 v42; // rcx
  LONG v43; // ebx
  __int64 v44; // rax
  int v45; // r8d
  char v46; // r12
  unsigned int v47; // r12d
  int *v48; // r13
  int v49; // r14d
  char v50; // al
  int *v51; // rdx
  __int64 v52; // rcx
  char v53; // [rsp+30h] [rbp-39h]
  __int64 i; // [rsp+38h] [rbp-31h]
  int v55; // [rsp+38h] [rbp-31h]
  int v56; // [rsp+40h] [rbp-29h]
  LONG v57; // [rsp+40h] [rbp-29h]
  struct _RECTL si128; // [rsp+48h] [rbp-21h] BYREF
  int v59; // [rsp+58h] [rbp-11h]
  __int64 v60; // [rsp+60h] [rbp-9h]
  int *v61; // [rsp+68h] [rbp-1h]
  LONG *v62; // [rsp+70h] [rbp+7h]
  __int64 v63; // [rsp+78h] [rbp+Fh]
  LONG *v64; // [rsp+80h] [rbp+17h]

  if ( a2 )
  {
    v4 = (LONG *)((char *)a1 + 8);
    v5 = (XCLIPOBJ *)a4;
    v64 = (LONG *)((char *)a1 + 8);
    v6 = a3;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v39 = *(_DWORD *)a1;
      v40 = *((_DWORD *)a1 + 1);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v57 = v39;
      XCLIPOBJ::vFindScan(v5, &si128, v39);
      while ( v40 )
      {
        v55 = --v40;
        if ( v39 >= si128.top && v39 < si128.bottom )
        {
          v41 = (struct _XRUNLEN *)a2;
          v42 = *((_QWORD *)v6 + 10) + v39 * *((_DWORD *)v6 + 22);
          v63 = v42;
          if ( v4 != a2 )
          {
            v62 = v4;
            do
            {
              v43 = *v4;
              v44 = (__int64)*v4 >> 5;
              v45 = *v4 + v4[1];
              v46 = *v4;
              v59 = v45;
              v47 = v46 & 0x1F;
              v48 = (int *)(v42 + 4 * v44);
              if ( v43 < 0 || v43 >= *((_DWORD *)a3 + 14) )
              {
                v50 = 0;
                v49 = 0;
              }
              else
              {
                v49 = *v48;
                v50 = 1;
              }
              v53 = v50;
              if ( v43 < v45 )
              {
                v51 = v4 + 2;
                v52 = v47;
                v60 = v47;
                v61 = v4 + 2;
                do
                {
                  if ( v43 < si128.left || v43 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v43, -1073741824);
                    v51 = v61;
                    v45 = v59;
                    v52 = v60;
                  }
                  if ( v43 >= si128.left && v43 < si128.right )
                  {
                    if ( *v51 )
                      v49 |= dword_1C02D2C40[v52];
                    else
                      v49 &= ~dword_1C02D2C40[v52];
                  }
                  ++v52;
                  ++v51;
                  ++v47;
                  v60 = v52;
                  ++v43;
                  v61 = v51;
                  if ( (v47 & 0x20) != 0 )
                  {
                    if ( v53 )
                      *v48 = v49;
                    v52 = 0LL;
                    ++v48;
                    v47 = 0;
                    v60 = 0LL;
                    if ( v43 < 0 || v43 >= *((_DWORD *)a3 + 14) )
                    {
                      v50 = 0;
                      v53 = 0;
                      v49 = 0;
                    }
                    else
                    {
                      v49 = *v48;
                      v50 = 1;
                      v53 = 1;
                    }
                  }
                  else
                  {
                    v50 = v53;
                  }
                }
                while ( v43 < v45 );
                v4 = v62;
                v42 = v63;
                v41 = (struct _XRUNLEN *)a2;
              }
              if ( v50 )
                *v48 = v49;
              v4 += v4[1] + 2;
              v62 = v4;
            }
            while ( v4 != (LONG *)v41 );
            v39 = v57;
            v6 = a3;
            v4 = v64;
            v5 = (XCLIPOBJ *)a4;
            v40 = v55;
          }
        }
        v57 = ++v39;
        if ( v39 < si128.top || v39 >= si128.bottom )
          XCLIPOBJ::vFindScan(v5, &si128, v39);
      }
    }
    else
    {
      v8 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v8; v4 != a2; v4 += v4[1] + 2 )
      {
        v9 = *v4;
        v10 = *v4 + v4[1];
        v11 = (int *)(v8 + 4 * ((__int64)*v4 >> 5));
        v12 = v11;
        if ( *v4 < v10 )
        {
          v13 = v9 & 0x1F;
          v14 = *v11;
          if ( (unsigned __int64)v11 < *((_QWORD *)v6 + 9) + (unsigned __int64)*((unsigned int *)v6 + 16) )
          {
            v15 = v9 & 0x1F;
            v16 = v4 + 2;
            do
            {
              if ( *v16++ )
                v14 |= dword_1C02D2C40[v15];
              else
                v14 &= ~dword_1C02D2C40[v15];
              ++v13;
              ++v15;
              if ( ++v9 >= v10 )
                break;
              if ( (v13 & 0x20) != 0 )
              {
                *v12 = v14;
                v13 = 0;
                ++v12;
                v15 = 0LL;
                v14 = *v12;
              }
            }
            while ( (unsigned __int64)v12 < *((_QWORD *)v6 + 9) + (unsigned __int64)*((unsigned int *)v6 + 16) );
          }
          *v12 = v14;
          v18 = *((_DWORD *)a1 + 1);
          if ( v18 > 1 )
          {
            v19 = *v4 >> 5;
            v20 = *v4 + v4[1];
            v21 = *v4 & 0x1F;
            v22 = v20 & 0x1F;
            v23 = v20 >> 5;
            v56 = v22;
            if ( v19 == v23 )
            {
              v24 = dword_1C02D2000[v21] & ~dword_1C02D2000[v22];
              v25 = 1;
              v26 = *v11;
              do
              {
                ++v25;
                v11 = (int *)((char *)v11 + *((int *)v6 + 22));
                v26 = v24 & v26 | *v11 & ~v24;
                *v11 = v26;
              }
              while ( v25 < *((_DWORD *)a1 + 1) );
              v8 = i;
              continue;
            }
            if ( (_DWORD)v21 )
            {
              v27 = 1;
              v28 = ~dword_1C02D2000[v21];
              v29 = *v11 & dword_1C02D2000[v21];
              do
              {
                ++v27;
                v11 = (int *)((char *)v11 + *((int *)v6 + 22));
                *v11 = v29 | v28 & *v11;
                v18 = *((_DWORD *)a1 + 1);
              }
              while ( v27 < v18 );
              ++v19;
            }
            v8 = i;
            v30 = v18;
            if ( v19 != v23 )
            {
              v31 = 1;
              v32 = (char *)(i + 4LL * v19);
              if ( v18 > 1 )
              {
                v33 = 4 * (v23 - v19);
                do
                {
                  v34 = &v32[*((int *)v6 + 22)];
                  memmove(v34, v32, v33);
                  v30 = *((_DWORD *)a1 + 1);
                  ++v31;
                  v32 = v34;
                  v6 = a3;
                }
                while ( v31 < v30 );
                LODWORD(v22) = v56;
                v8 = i;
              }
            }
            if ( !(_DWORD)v22 )
              continue;
            v35 = 1;
            v36 = (int *)(v8 + 4LL * v23);
            v37 = dword_1C02D2000[(unsigned int)v22];
            v38 = *v36 & ~v37;
            if ( v30 > 1 )
            {
              do
              {
                ++v35;
                v36 = (int *)((char *)v36 + *((int *)v6 + 22));
                *v36 = v38 | v37 & *v36;
              }
              while ( v35 < *((_DWORD *)a1 + 1) );
            }
          }
          v8 = i;
        }
      }
    }
  }
}
