/*
 * XREFs of ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00A52A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00909A8 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0090A24 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void __fastcall vStrWrite01(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  int *v4; // r12
  XCLIPOBJ *v5; // r15
  struct SURFACE *v6; // rbx
  __int64 v8; // r10
  int v9; // ecx
  int v10; // r15d
  int *v11; // r8
  int *v12; // r9
  char v13; // dl
  int v14; // r10d
  __int64 v15; // r11
  _DWORD *v16; // rsi
  int v18; // ecx
  int v19; // edx
  int v20; // r13d
  __int64 v21; // r9
  __int64 v22; // r15
  int v23; // r13d
  int v24; // r10d
  int v25; // r11d
  int v26; // r9d
  int v27; // r10d
  int v28; // r11d
  int v29; // r9d
  int v30; // r8d
  int v31; // esi
  char *v32; // r9
  size_t v33; // r15
  char *v34; // rbx
  int v35; // r9d
  int *v36; // rcx
  int v37; // r10d
  int v38; // edx
  LONG v39; // esi
  int v40; // r14d
  struct _XRUNLEN *v41; // rdx
  __int64 v42; // rcx
  int *v43; // r15
  int v44; // ebx
  __int64 v45; // rax
  int v46; // r8d
  char v47; // r12
  unsigned int v48; // r12d
  int *v49; // r13
  int v50; // r14d
  char v51; // al
  int *v52; // rdx
  __int64 v53; // rcx
  char v54; // [rsp+30h] [rbp-39h]
  __int64 i; // [rsp+38h] [rbp-31h]
  int v56; // [rsp+38h] [rbp-31h]
  int v57; // [rsp+40h] [rbp-29h]
  LONG v58; // [rsp+40h] [rbp-29h]
  struct _RECTL si128; // [rsp+48h] [rbp-21h] BYREF
  int v60; // [rsp+58h] [rbp-11h]
  __int64 v61; // [rsp+60h] [rbp-9h]
  int *v62; // [rsp+68h] [rbp-1h]
  int *v63; // [rsp+70h] [rbp+7h]
  __int64 v64; // [rsp+78h] [rbp+Fh]
  int *v65; // [rsp+80h] [rbp+17h]

  if ( a2 )
  {
    v4 = (int *)((char *)a1 + 8);
    v5 = (XCLIPOBJ *)a4;
    v65 = (int *)((char *)a1 + 8);
    v6 = a3;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v39 = *(_DWORD *)a1;
      v40 = *((_DWORD *)a1 + 1);
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v58 = v39;
      XCLIPOBJ::vFindScan(v5, &si128, v39);
      while ( v40 )
      {
        v56 = --v40;
        if ( v39 >= si128.top && v39 < si128.bottom )
        {
          v41 = a2;
          v42 = *((_QWORD *)v6 + 10) + v39 * *((_DWORD *)v6 + 22);
          v64 = v42;
          if ( v4 != (int *)a2 )
          {
            v43 = v4;
            v63 = v4;
            do
            {
              v44 = *v43;
              v45 = (__int64)*v43 >> 5;
              v46 = *v43 + v43[1];
              v47 = *v43;
              v60 = v46;
              v48 = v47 & 0x1F;
              v49 = (int *)(v42 + 4 * v45);
              if ( v44 < 0 || v44 >= *((_DWORD *)a3 + 14) )
              {
                v51 = 0;
                v50 = 0;
              }
              else
              {
                v50 = *v49;
                v51 = 1;
              }
              v54 = v51;
              if ( v44 < v46 )
              {
                v52 = v43 + 2;
                v53 = v48;
                v61 = v48;
                v62 = v43 + 2;
                do
                {
                  if ( v44 < si128.left || v44 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v44);
                    v52 = v62;
                    v46 = v60;
                    v53 = v61;
                  }
                  if ( v44 >= si128.left && v44 < si128.right )
                  {
                    if ( *v52 )
                      v50 |= dword_1C02DFCB0[v53];
                    else
                      v50 &= ~dword_1C02DFCB0[v53];
                  }
                  ++v53;
                  ++v52;
                  ++v48;
                  v61 = v53;
                  ++v44;
                  v62 = v52;
                  if ( (v48 & 0x20) != 0 )
                  {
                    if ( v54 )
                      *v49 = v50;
                    v53 = 0LL;
                    ++v49;
                    v48 = 0;
                    v61 = 0LL;
                    if ( v44 < 0 || v44 >= *((_DWORD *)a3 + 14) )
                    {
                      v51 = 0;
                      v54 = 0;
                      v50 = 0;
                    }
                    else
                    {
                      v50 = *v49;
                      v51 = 1;
                      v54 = 1;
                    }
                  }
                  else
                  {
                    v51 = v54;
                  }
                }
                while ( v44 < v46 );
                v43 = v63;
                v42 = v64;
                v41 = a2;
              }
              if ( v51 )
                *v49 = v50;
              v43 += v43[1] + 2;
              v63 = v43;
            }
            while ( v43 != (int *)v41 );
            v39 = v58;
            v6 = a3;
            v5 = (XCLIPOBJ *)a4;
            v4 = v65;
            v40 = v56;
          }
        }
        v58 = ++v39;
        if ( v39 < si128.top || v39 >= si128.bottom )
          XCLIPOBJ::vFindScan(v5, &si128, v39);
      }
    }
    else
    {
      v8 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v8; v4 != (int *)a2; v4 += v4[1] + 2 )
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
                v14 |= dword_1C02DFCB0[v15];
              else
                v14 &= ~dword_1C02DFCB0[v15];
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
            v57 = v22;
            if ( v19 == v23 )
            {
              v24 = *((_DWORD *)&aulMsk + v21) & ~*((_DWORD *)&aulMsk + v22);
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
              v28 = ~*((_DWORD *)&aulMsk + v21);
              v29 = *v11 & *((_DWORD *)&aulMsk + v21);
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
                LODWORD(v22) = v57;
                v8 = i;
              }
            }
            if ( !(_DWORD)v22 )
              continue;
            v35 = 1;
            v36 = (int *)(v8 + 4LL * v23);
            v37 = *((_DWORD *)&aulMsk + (unsigned int)v22);
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
