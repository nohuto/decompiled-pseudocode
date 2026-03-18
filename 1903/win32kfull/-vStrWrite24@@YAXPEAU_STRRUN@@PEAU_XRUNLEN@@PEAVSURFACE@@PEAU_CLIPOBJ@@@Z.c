/*
 * XREFs of ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0142DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00F5AF8 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00F5B7C (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
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
  bool v20; // zf
  LONG top; // ecx
  unsigned __int64 v22; // xmm0_8
  LONG left; // r12d
  LONG v24; // ebp
  int v25; // ebp
  __int64 v26; // r13
  int v27; // r8d
  int v28; // eax
  int v29; // edx
  LONG v30; // r10d
  LONG v31; // ecx
  int v32; // r11d
  _WORD *v33; // r9
  _WORD *v34; // rdx
  int v35; // r10d
  __int64 v36; // r8
  int *v37; // rcx
  __int16 v38; // ax
  size_t v39; // rsi
  __int64 v40; // rdi
  char *v41; // rbx
  LONG v42; // r13d
  int v43; // esi
  LONG right; // ecx
  LONG v45; // edx
  struct _XRUNLEN *v46; // r14
  __int64 v47; // r15
  __int64 v48; // rbx
  int v49; // r8d
  __int64 v50; // rdi
  int v51; // ebp
  int *v52; // rsi
  LONG v53; // [rsp+30h] [rbp-68h]
  __int64 i; // [rsp+38h] [rbp-60h]
  int v55; // [rsp+38h] [rbp-60h]
  struct _XRUNLEN *v56; // [rsp+48h] [rbp-50h]
  struct _RECTL rclBounds; // [rsp+50h] [rbp-48h] BYREF

  if ( a2 )
  {
    v5 = a3;
    v6 = (struct _STRRUN *)((char *)a1 + 8);
    v56 = (struct _STRRUN *)((char *)a1 + 8);
    v7 = a2;
    if ( a4 )
    {
      v20 = a4->iDComplexity == 1;
      *(_QWORD *)&rclBounds.left = 0LL;
      *(_QWORD *)&rclBounds.right = 0LL;
      if ( v20 )
      {
        top = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v22 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        if ( top < SHIDWORD(v22) )
        {
          left = rclBounds.left;
          v24 = top + *((_DWORD *)a1 + 1);
          if ( v24 > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( v24 >= SHIDWORD(v22) )
              v24 = HIDWORD(v22);
            v25 = v24 - top;
            v26 = *((_QWORD *)a3 + 10) + top * *((_DWORD *)a3 + 22);
            if ( v6 != a2 )
            {
              do
              {
                v27 = *(_DWORD *)v6;
                v28 = *((_DWORD *)v6 + 1);
                v29 = v28 + *(_DWORD *)v6;
                if ( v29 >= left )
                {
                  if ( v27 >= (int)v22 )
                    return;
                  v30 = left;
                  v31 = v22;
                  if ( v27 >= left )
                    v30 = *(_DWORD *)v6;
                  if ( v29 < (int)v22 )
                    v31 = v28 + *(_DWORD *)v6;
                  v32 = v31 - v30;
                  v33 = (_WORD *)(v26 + 2LL * v30 + v30);
                  v34 = v33;
                  if ( v30 < v31 )
                  {
                    v35 = v30 - v27;
                    v36 = v32;
                    v37 = (int *)((char *)v6 + 4 * v35 + 8);
                    do
                    {
                      v38 = *(_WORD *)v37++;
                      *v34 = v38;
                      v34 = (_WORD *)((char *)v34 + 3);
                      *((_BYTE *)v34 - 1) = *((_BYTE *)v37 - 2);
                      --v36;
                    }
                    while ( v36 );
                  }
                  if ( v25 > 1 )
                  {
                    v39 = 3 * v32;
                    v40 = (unsigned int)(v25 - 1);
                    do
                    {
                      v41 = (char *)v33 + *((int *)a3 + 22);
                      memmove(v41, v33, v39);
                      v33 = v41;
                      --v40;
                    }
                    while ( v40 );
                    left = rclBounds.left;
                    v7 = a2;
                  }
                  v28 = *((_DWORD *)v6 + 1);
                }
                v6 = (struct _XRUNLEN *)((char *)v6 + 4 * v28 + 8);
              }
              while ( v6 != v7 );
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v42 = *(_DWORD *)a1;
        v43 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        v53 = v42;
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v42);
        if ( v43 )
        {
          right = rclBounds.right;
          v45 = rclBounds.left;
          do
          {
            v55 = --v43;
            if ( v42 >= rclBounds.top && v42 < rclBounds.bottom && v6 != v7 )
            {
              v46 = v6;
              v47 = *((_QWORD *)v5 + 10) + v42 * *((_DWORD *)v5 + 22);
              do
              {
                v48 = *(int *)v46;
                v49 = *((_DWORD *)v46 + 1);
                v50 = v48 + v47 + 2 * v48;
                v51 = v49 + v48;
                if ( (int)v48 < v49 + (int)v48 )
                {
                  v52 = (int *)((char *)v46 + 8);
                  do
                  {
                    if ( (int)v48 < v45 || (int)v48 >= right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v48);
                      v45 = rclBounds.left;
                      right = rclBounds.right;
                    }
                    if ( (int)v48 >= v45 && (int)v48 < right )
                    {
                      *(_WORD *)v50 = *(_WORD *)v52;
                      *(_BYTE *)(v50 + 2) = *((_BYTE *)v52 + 2);
                    }
                    v50 += 3LL;
                    ++v52;
                    LODWORD(v48) = v48 + 1;
                  }
                  while ( (int)v48 < v51 );
                  v49 = *((_DWORD *)v46 + 1);
                }
                v46 = (struct _XRUNLEN *)((char *)v46 + 4 * v49 + 8);
              }
              while ( v46 != a2 );
              v6 = v56;
              v42 = v53;
              v5 = a3;
              v7 = a2;
              v43 = v55;
            }
            v53 = ++v42;
            if ( v42 < rclBounds.top || v42 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v42);
              right = rclBounds.right;
              v45 = rclBounds.left;
            }
          }
          while ( v43 );
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
