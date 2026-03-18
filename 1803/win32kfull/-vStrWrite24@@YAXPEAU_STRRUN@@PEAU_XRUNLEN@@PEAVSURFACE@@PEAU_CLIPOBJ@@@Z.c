/*
 * XREFs of ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0115FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00909A8 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0090A24 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void __fastcall vStrWrite24(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct SURFACE *v5; // rbx
  struct _XRUNLEN *v6; // r15
  struct _XRUNLEN *v7; // rdi
  __int64 v9; // r14
  __int64 v11; // rdx
  unsigned int v12; // r10d
  _WORD *v13; // r9
  _WORD *v14; // r8
  _WORD *v15; // rcx
  __int64 v16; // rdx
  __int16 v17; // ax
  int v18; // edi
  char *v19; // rbx
  LONG top; // ecx
  unsigned __int64 v21; // xmm1_8
  LONG left; // r12d
  LONG v23; // ebp
  int v24; // ebp
  __int64 v25; // r13
  int v26; // r8d
  int v27; // eax
  int v28; // edx
  LONG v29; // r10d
  LONG v30; // ecx
  int v31; // r11d
  _WORD *v32; // r9
  _WORD *v33; // rdx
  int v34; // r10d
  __int64 v35; // r8
  int *v36; // rcx
  __int16 v37; // ax
  size_t v38; // rsi
  __int64 v39; // rdi
  char *v40; // rbx
  LONG v41; // r13d
  int v42; // esi
  LONG right; // ecx
  LONG v44; // edx
  struct _XRUNLEN *v45; // r14
  __int64 v46; // r15
  __int64 v47; // rbx
  int v48; // r8d
  __int64 v49; // rdi
  int v50; // ebp
  int *v51; // rsi
  LONG v52; // [rsp+30h] [rbp-68h]
  __int64 i; // [rsp+38h] [rbp-60h]
  int v54; // [rsp+38h] [rbp-60h]
  struct _XRUNLEN *v55; // [rsp+48h] [rbp-50h]
  struct _RECTL rclBounds; // [rsp+50h] [rbp-48h] BYREF

  if ( a2 )
  {
    v5 = a3;
    v6 = (struct _STRRUN *)((char *)a1 + 8);
    v55 = (struct _STRRUN *)((char *)a1 + 8);
    v7 = a2;
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        top = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v21 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        if ( top < SHIDWORD(v21) )
        {
          left = rclBounds.left;
          v23 = top + *((_DWORD *)a1 + 1);
          if ( v23 > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( v23 >= SHIDWORD(v21) )
              v23 = HIDWORD(v21);
            v24 = v23 - top;
            v25 = *((_QWORD *)a3 + 10) + top * *((_DWORD *)a3 + 22);
            if ( v6 != a2 )
            {
              do
              {
                v26 = *(_DWORD *)v6;
                v27 = *((_DWORD *)v6 + 1);
                v28 = v27 + *(_DWORD *)v6;
                if ( v28 >= left )
                {
                  if ( v26 >= (int)v21 )
                    return;
                  v29 = left;
                  v30 = v21;
                  if ( v26 >= left )
                    v29 = *(_DWORD *)v6;
                  if ( v28 < (int)v21 )
                    v30 = v27 + *(_DWORD *)v6;
                  v31 = v30 - v29;
                  v32 = (_WORD *)(v25 + 2LL * v29 + v29);
                  v33 = v32;
                  if ( v29 < v30 )
                  {
                    v34 = v29 - v26;
                    v35 = v31;
                    v36 = (int *)((char *)v6 + 4 * v34 + 8);
                    do
                    {
                      v37 = *(_WORD *)v36++;
                      *v33 = v37;
                      v33 = (_WORD *)((char *)v33 + 3);
                      *((_BYTE *)v33 - 1) = *((_BYTE *)v36 - 2);
                      --v35;
                    }
                    while ( v35 );
                  }
                  if ( v24 > 1 )
                  {
                    v38 = 3 * v31;
                    v39 = (unsigned int)(v24 - 1);
                    do
                    {
                      v40 = (char *)v32 + *((int *)a3 + 22);
                      memmove(v40, v32, v38);
                      v32 = v40;
                      --v39;
                    }
                    while ( v39 );
                    left = rclBounds.left;
                    v7 = a2;
                  }
                  v27 = *((_DWORD *)v6 + 1);
                }
                v6 = (struct _XRUNLEN *)((char *)v6 + 4 * v27 + 8);
              }
              while ( v6 != v7 );
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v41 = *(_DWORD *)a1;
        v42 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        v52 = v41;
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v41);
        if ( v42 )
        {
          right = rclBounds.right;
          v44 = rclBounds.left;
          do
          {
            v54 = --v42;
            if ( v41 >= rclBounds.top && v41 < rclBounds.bottom && v6 != v7 )
            {
              v45 = v6;
              v46 = *((_QWORD *)v5 + 10) + v41 * *((_DWORD *)v5 + 22);
              do
              {
                v47 = *(int *)v45;
                v48 = *((_DWORD *)v45 + 1);
                v49 = v47 + v46 + 2 * v47;
                v50 = v48 + v47;
                if ( (int)v47 < v48 + (int)v47 )
                {
                  v51 = (int *)((char *)v45 + 8);
                  do
                  {
                    if ( (int)v47 < v44 || (int)v47 >= right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v47);
                      v44 = rclBounds.left;
                      right = rclBounds.right;
                    }
                    if ( (int)v47 >= v44 && (int)v47 < right )
                    {
                      *(_WORD *)v49 = *(_WORD *)v51;
                      *(_BYTE *)(v49 + 2) = *((_BYTE *)v51 + 2);
                    }
                    v49 += 3LL;
                    ++v51;
                    LODWORD(v47) = v47 + 1;
                  }
                  while ( (int)v47 < v50 );
                  v48 = *((_DWORD *)v45 + 1);
                }
                v45 = (struct _XRUNLEN *)((char *)v45 + 4 * v48 + 8);
              }
              while ( v45 != a2 );
              v6 = v55;
              v41 = v52;
              v5 = a3;
              v7 = a2;
              v42 = v54;
            }
            v52 = ++v41;
            if ( v41 < rclBounds.top || v41 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v41);
              right = rclBounds.right;
              v44 = rclBounds.left;
            }
          }
          while ( v42 );
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v9; v6 != a2; v6 = (struct _XRUNLEN *)((char *)v6 + 4 * *((int *)v6 + 1) + 8) )
      {
        v11 = *(int *)v6;
        v12 = *((_DWORD *)v6 + 1);
        v13 = (_WORD *)(v11 + v9 + 2 * v11);
        v14 = v13;
        if ( (int)v11 < (int)(v12 + v11) )
        {
          v15 = (_WORD *)((char *)v6 + 8);
          v16 = v12;
          do
          {
            v17 = *v15;
            v15 += 2;
            *v14 = v17;
            v14 = (_WORD *)((char *)v14 + 3);
            *((_BYTE *)v14 - 1) = *((_BYTE *)v15 - 2);
            --v16;
          }
          while ( v16 );
        }
        v18 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          do
          {
            v19 = (char *)v13 + *((int *)a3 + 22);
            memmove(v19, v13, 3 * *((_DWORD *)v6 + 1));
            ++v18;
            v13 = v19;
          }
          while ( v18 < *((_DWORD *)a1 + 1) );
          v9 = i;
        }
      }
    }
  }
}
