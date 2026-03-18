/*
 * XREFs of ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00F6560
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00F5AF8 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00F5B7C (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

void __fastcall vStrWrite32(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v5; // r12
  struct SURFACE *v6; // rbx
  struct _XRUNLEN *v7; // rdi
  __int64 v9; // r14
  __int64 v11; // rdx
  unsigned int v12; // r10d
  _DWORD *v13; // r9
  _DWORD *v14; // r8
  int *v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  int v18; // edi
  char *v19; // rbx
  bool v20; // zf
  LONG top; // ecx
  unsigned __int64 v22; // xmm0_8
  LONG left; // r15d
  LONG v24; // ebp
  int v25; // ebp
  __int64 v26; // r13
  int v27; // r8d
  int v28; // eax
  int v29; // edx
  LONG v30; // r10d
  LONG v31; // ecx
  int v32; // r11d
  _DWORD *v33; // r9
  _DWORD *v34; // rdx
  int v35; // r10d
  __int64 v36; // r8
  int *v37; // rcx
  int v38; // eax
  size_t v39; // rsi
  __int64 v40; // rdi
  char *v41; // rbx
  LONG v42; // r13d
  LONG v43; // r8d
  int v44; // esi
  LONG right; // ecx
  LONG v46; // edx
  __int64 v47; // r9
  struct _XRUNLEN *v48; // r14
  __int64 v49; // rbx
  int v50; // r8d
  _DWORD *v51; // rsi
  int v52; // ebp
  _DWORD *v53; // rdi
  __int64 i; // [rsp+30h] [rbp-58h]
  int v55; // [rsp+30h] [rbp-58h]
  __int64 v56; // [rsp+38h] [rbp-50h]
  struct _RECTL rclBounds; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 )
  {
    v5 = (struct _STRRUN *)((char *)a1 + 8);
    v6 = a3;
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
            if ( v5 != a2 )
            {
              do
              {
                v27 = *(_DWORD *)v5;
                v28 = *((_DWORD *)v5 + 1);
                v29 = v28 + *(_DWORD *)v5;
                if ( v29 >= left )
                {
                  if ( v27 >= (int)v22 )
                    return;
                  v30 = left;
                  v31 = v22;
                  if ( v27 >= left )
                    v30 = *(_DWORD *)v5;
                  if ( v29 < (int)v22 )
                    v31 = v28 + *(_DWORD *)v5;
                  v32 = v31 - v30;
                  v33 = (_DWORD *)(v26 + 4LL * v30);
                  v34 = v33;
                  if ( v30 < v31 )
                  {
                    v35 = v30 - v27;
                    v36 = v32;
                    v37 = (int *)((char *)v5 + 4 * v35 + 8);
                    do
                    {
                      v38 = *v37++;
                      *v34++ = v38;
                      --v36;
                    }
                    while ( v36 );
                  }
                  if ( v25 > 1 )
                  {
                    v39 = 4 * v32;
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
                  v28 = *((_DWORD *)v5 + 1);
                }
                v5 = (struct _XRUNLEN *)((char *)v5 + 4 * v28 + 8);
              }
              while ( v5 != v7 );
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v42 = *(_DWORD *)a1;
        v43 = *(_DWORD *)a1;
        v44 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v43);
        if ( v44 )
        {
          right = rclBounds.right;
          v46 = rclBounds.left;
          do
          {
            v55 = --v44;
            if ( v42 >= rclBounds.top && v42 < rclBounds.bottom )
            {
              v47 = *((_QWORD *)v6 + 10) + v42 * *((_DWORD *)v6 + 22);
              v56 = v47;
              if ( v5 != v7 )
              {
                v48 = v5;
                do
                {
                  v49 = *(int *)v48;
                  v50 = *((_DWORD *)v48 + 1);
                  v51 = (_DWORD *)(v47 + 4 * v49);
                  v52 = v50 + v49;
                  if ( (int)v49 < v50 + (int)v49 )
                  {
                    v53 = (_DWORD *)((char *)v48 + 8);
                    do
                    {
                      if ( (int)v49 < v46 || (int)v49 >= right )
                      {
                        XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v49);
                        v46 = rclBounds.left;
                        right = rclBounds.right;
                      }
                      if ( (int)v49 >= v46 && (int)v49 < right )
                        *v51 = *v53;
                      ++v51;
                      ++v53;
                      LODWORD(v49) = v49 + 1;
                    }
                    while ( (int)v49 < v52 );
                    v50 = *((_DWORD *)v48 + 1);
                    v47 = v56;
                    v7 = a2;
                  }
                  v48 = (struct _XRUNLEN *)((char *)v48 + 4 * v50 + 8);
                }
                while ( v48 != v7 );
                v6 = a3;
                v44 = v55;
              }
            }
            if ( ++v42 < rclBounds.top || v42 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v42);
              right = rclBounds.right;
              v46 = rclBounds.left;
            }
          }
          while ( v44 );
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      for ( i = v9; v5 != a2; v5 = (struct _XRUNLEN *)((char *)v5 + 4 * *((int *)v5 + 1) + 8) )
      {
        v11 = *(int *)v5;
        v12 = *((_DWORD *)v5 + 1);
        v13 = (_DWORD *)(v9 + 4 * v11);
        v14 = v13;
        if ( (int)v11 < (int)(v12 + v11) )
        {
          v15 = (int *)((char *)v5 + 8);
          v16 = v12;
          do
          {
            v17 = *v15++;
            *v14++ = v17;
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
            memmove(v19, v13, 4 * *((_DWORD *)v5 + 1));
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
