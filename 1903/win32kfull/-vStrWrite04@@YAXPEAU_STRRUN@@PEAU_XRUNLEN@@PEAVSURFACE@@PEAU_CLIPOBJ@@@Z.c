/*
 * XREFs of ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BC460
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00F5AF8 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00F5B7C (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

void __fastcall vStrWrite04(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  XCLIPOBJ *v4; // rbx
  int *v5; // r12
  LONG *v7; // r15
  __int64 v8; // r13
  int v9; // r11d
  int v10; // ecx
  int *v11; // r9
  int *v12; // r8
  char v13; // r10
  int v14; // ebx
  __int64 v15; // rsi
  int *v16; // r12
  int v17; // r13d
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // r8d
  int v22; // r10d
  int v23; // esi
  int v24; // edx
  int v25; // esi
  __int64 v26; // rcx
  __int64 v27; // rbx
  int v28; // r11d
  int v29; // edx
  int v30; // r8d
  int v31; // r11d
  int v32; // edx
  int v33; // ecx
  int v34; // r9d
  char *v35; // rdx
  int v36; // r13d
  size_t v37; // r12
  char *v38; // rbx
  int v39; // r8d
  int *v40; // rcx
  int v41; // r10d
  int v42; // edx
  LONG v43; // esi
  LONG v44; // r15d
  int *v45; // r10
  __int64 v46; // rcx
  int *v47; // r15
  int v48; // ebx
  __int64 v49; // rax
  int v50; // edx
  char v51; // r8
  unsigned int v52; // r8d
  int *v53; // r9
  int v54; // r13d
  char v55; // al
  __int64 v56; // r10
  int *v57; // r11
  char v58; // [rsp+30h] [rbp-39h]
  int v59; // [rsp+34h] [rbp-35h]
  LONG v60; // [rsp+34h] [rbp-35h]
  unsigned int v61; // [rsp+38h] [rbp-31h]
  __int64 i; // [rsp+40h] [rbp-29h]
  LONG v63; // [rsp+40h] [rbp-29h]
  struct _RECTL si128; // [rsp+48h] [rbp-21h] BYREF
  int *v65; // [rsp+58h] [rbp-11h]
  int *v66; // [rsp+60h] [rbp-9h]
  int v67; // [rsp+68h] [rbp-1h]
  __int64 v68; // [rsp+70h] [rbp+7h]
  int *v69; // [rsp+78h] [rbp+Fh]
  __int64 v70; // [rsp+80h] [rbp+17h]
  struct _XRUNLEN *v72; // [rsp+D8h] [rbp+6Fh]

  if ( a2 )
  {
    v72 = a2;
    v4 = (XCLIPOBJ *)a4;
    v5 = (int *)((char *)a1 + 8);
    v65 = (int *)((char *)a1 + 8);
    v7 = (LONG *)a1;
    if ( a4 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
      v43 = *v7;
      v44 = v7[1];
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v60 = v43;
      XCLIPOBJ::vFindScan(v4, &si128, v43);
      while ( v44 )
      {
        v63 = --v44;
        if ( v43 >= si128.top && v43 < si128.bottom )
        {
          v45 = (int *)v72;
          v46 = *((_QWORD *)a3 + 10) + v43 * *((_DWORD *)a3 + 22);
          v70 = v46;
          if ( v5 != (int *)v72 )
          {
            v47 = v5;
            do
            {
              v48 = *v47;
              v49 = (__int64)*v47 >> 3;
              v50 = *v47 + v47[1];
              v51 = *v47;
              v67 = v50;
              v52 = v51 & 7;
              v61 = v52;
              v53 = (int *)(v46 + 4 * v49);
              v66 = v53;
              if ( v48 < 0 || v48 >= *((_DWORD *)a3 + 14) )
              {
                v55 = 0;
                v54 = 0;
              }
              else
              {
                v54 = *v53;
                v55 = 1;
              }
              v58 = v55;
              if ( v48 < v50 )
              {
                v56 = v52;
                v57 = v47 + 2;
                v68 = v52;
                v69 = v47 + 2;
                do
                {
                  if ( v48 < si128.left || v48 >= si128.right )
                  {
                    XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &si128, v48);
                    v52 = v61;
                    v53 = v66;
                    v56 = v68;
                    v57 = v69;
                  }
                  if ( v48 >= si128.left && v48 < si128.right )
                    v54 = v54 & ~dword_1C02E4238[v56] | dword_1C02E4238[v56] & (*v57 << dword_1C02E4218[v56]);
                  ++v52;
                  ++v56;
                  ++v57;
                  v61 = v52;
                  ++v48;
                  v68 = v56;
                  v69 = v57;
                  if ( (v52 & 8) != 0 )
                  {
                    if ( v58 )
                      *v53 = v54;
                    ++v53;
                    v52 = 0;
                    v56 = 0LL;
                    v66 = v53;
                    v61 = 0;
                    v68 = 0LL;
                    if ( v48 < 0 || v48 >= *((_DWORD *)a3 + 14) )
                    {
                      v55 = 0;
                      v58 = 0;
                      v54 = 0;
                    }
                    else
                    {
                      v54 = *v53;
                      v55 = 1;
                      v58 = 1;
                    }
                  }
                  else
                  {
                    v55 = v58;
                  }
                }
                while ( v48 < v67 );
                v46 = v70;
                v45 = (int *)v72;
              }
              if ( v55 )
                *v53 = v54;
              v47 += v47[1] + 2;
            }
            while ( v47 != v45 );
            v43 = v60;
            v5 = v65;
            v4 = (XCLIPOBJ *)a4;
            v44 = v63;
          }
        }
        v60 = ++v43;
        if ( v43 < si128.top || v43 >= si128.bottom )
          XCLIPOBJ::vFindScan(v4, &si128, v43);
      }
    }
    else
    {
      v8 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v8; v5 != (int *)a2; v65 = v5 )
      {
        v9 = *v5;
        v10 = *v5 + v5[1];
        v11 = (int *)(v8 + 4 * ((__int64)*v5 >> 3));
        v12 = v11;
        if ( *v5 < v10 )
        {
          v13 = v9 & 7;
          v14 = *v11;
          if ( (unsigned __int64)v11 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) )
          {
            v15 = v9 & 7;
            v16 = v5 + 2;
            v17 = v10;
            do
            {
              v18 = dword_1C02E4238[v15];
              ++v13;
              v19 = *v16;
              ++v9;
              v20 = dword_1C02E4218[v15];
              ++v16;
              ++v15;
              v14 = v14 & ~v18 | v18 & (v19 << v20);
              if ( v9 >= v17 )
                break;
              if ( (v13 & 8) != 0 )
              {
                *v12 = v14;
                v13 = 0;
                ++v12;
                v15 = 0LL;
                v14 = *v12;
              }
            }
            while ( (unsigned __int64)v12 < *((_QWORD *)a3 + 9) + (unsigned __int64)*((unsigned int *)a3 + 16) );
            v7 = (LONG *)a1;
            v5 = v65;
            v8 = i;
            a2 = v72;
          }
          *v12 = v14;
          v21 = v7[1];
          if ( v21 > 1 )
          {
            v22 = *v5 >> 3;
            v23 = *v5 + v5[1];
            v24 = v23 & 7;
            v25 = v23 >> 3;
            v26 = 4 * (*v5 & 7u);
            v27 = (unsigned int)(4 * v24);
            v59 = 4 * v24;
            if ( v22 == v25 )
            {
              v28 = 1;
              v29 = dword_1C02E4260[v26] & ~dword_1C02E4260[v27];
              v30 = *v11;
              do
              {
                ++v28;
                v11 = (int *)((char *)v11 + *((int *)a3 + 22));
                v30 = v29 & v30 | *v11 & ~v29;
                *v11 = v30;
              }
              while ( v28 < v7[1] );
            }
            else
            {
              if ( (_DWORD)v26 )
              {
                v31 = 1;
                v32 = ~dword_1C02E4260[(unsigned int)v26];
                v33 = *v11 & dword_1C02E4260[(unsigned int)v26];
                do
                {
                  ++v31;
                  v11 = (int *)((char *)v11 + *((int *)a3 + 22));
                  *v11 = v33 | v32 & *v11;
                  v21 = v7[1];
                }
                while ( v31 < v21 );
                ++v22;
              }
              v34 = v21;
              if ( v22 != v25 )
              {
                v35 = (char *)(v8 + 4LL * v22);
                v36 = 1;
                if ( v21 > 1 )
                {
                  v37 = 4 * (v25 - v22);
                  do
                  {
                    v38 = &v35[*((int *)a3 + 22)];
                    memmove(v38, v35, v37);
                    v34 = v7[1];
                    ++v36;
                    v35 = v38;
                  }
                  while ( v36 < v34 );
                  v5 = v65;
                  LODWORD(v27) = v59;
                }
                v8 = i;
              }
              if ( (_DWORD)v27 )
              {
                v39 = 1;
                v40 = (int *)(v8 + 4LL * v25);
                v41 = dword_1C02E4260[(unsigned int)v27];
                v42 = *v40 & ~v41;
                if ( v34 > 1 )
                {
                  do
                  {
                    ++v39;
                    v40 = (int *)((char *)v40 + *((int *)a3 + 22));
                    *v40 = v42 | v41 & *v40;
                  }
                  while ( v39 < v7[1] );
                }
              }
            }
            a2 = v72;
          }
        }
        v5 += v5[1] + 2;
      }
    }
  }
}
