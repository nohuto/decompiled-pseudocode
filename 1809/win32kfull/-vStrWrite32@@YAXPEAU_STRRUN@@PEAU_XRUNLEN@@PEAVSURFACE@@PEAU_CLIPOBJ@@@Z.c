/*
 * XREFs of ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00E77E0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00F21E4 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00F2268 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F22E4 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
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
  LONG top; // ecx
  unsigned __int64 v21; // xmm0_8
  LONG left; // r15d
  LONG v23; // ebp
  int v24; // ebp
  __int64 v25; // r13
  int v26; // r8d
  int v27; // eax
  int v28; // edx
  LONG v29; // r10d
  LONG v30; // ecx
  int v31; // r11d
  _DWORD *v32; // r9
  _DWORD *v33; // rdx
  int v34; // r10d
  __int64 v35; // r8
  int *v36; // rcx
  int v37; // eax
  size_t v38; // rsi
  __int64 v39; // rdi
  char *v40; // rbx
  LONG v41; // r13d
  int v42; // r8d
  int v43; // esi
  LONG right; // ecx
  LONG v45; // edx
  __int64 v46; // r9
  struct _XRUNLEN *v47; // r14
  __int64 v48; // rbx
  int v49; // r8d
  _DWORD *v50; // rsi
  int v51; // ebp
  _DWORD *v52; // rdi
  __int64 i; // [rsp+30h] [rbp-58h]
  int v54; // [rsp+30h] [rbp-58h]
  __int64 v55; // [rsp+38h] [rbp-50h]
  struct _RECTL rclBounds; // [rsp+40h] [rbp-48h] BYREF

  if ( a2 )
  {
    v5 = (struct _STRRUN *)((char *)a1 + 8);
    v6 = a3;
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
            if ( v5 != a2 )
            {
              do
              {
                v26 = *(_DWORD *)v5;
                v27 = *((_DWORD *)v5 + 1);
                v28 = v27 + *(_DWORD *)v5;
                if ( v28 >= left )
                {
                  if ( v26 >= (int)v21 )
                    return;
                  v29 = left;
                  v30 = v21;
                  if ( v26 >= left )
                    v29 = *(_DWORD *)v5;
                  if ( v28 < (int)v21 )
                    v30 = v27 + *(_DWORD *)v5;
                  v31 = v30 - v29;
                  v32 = (_DWORD *)(v25 + 4LL * v29);
                  v33 = v32;
                  if ( v29 < v30 )
                  {
                    v34 = v29 - v26;
                    v35 = v31;
                    v36 = (int *)((char *)v5 + 4 * v34 + 8);
                    do
                    {
                      v37 = *v36++;
                      *v33++ = v37;
                      --v35;
                    }
                    while ( v35 );
                  }
                  if ( v24 > 1 )
                  {
                    v38 = 4 * v31;
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
                  v27 = *((_DWORD *)v5 + 1);
                }
                v5 = (struct _XRUNLEN *)((char *)v5 + 4 * v27 + 8);
              }
              while ( v5 != v7 );
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v41 = *(_DWORD *)a1;
        v42 = *(_DWORD *)a1;
        v43 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v42);
        if ( v43 )
        {
          right = rclBounds.right;
          v45 = rclBounds.left;
          do
          {
            v54 = --v43;
            if ( v41 >= rclBounds.top && v41 < rclBounds.bottom )
            {
              v46 = *((_QWORD *)v6 + 10) + v41 * *((_DWORD *)v6 + 22);
              v55 = v46;
              if ( v5 != v7 )
              {
                v47 = v5;
                do
                {
                  v48 = *(int *)v47;
                  v49 = *((_DWORD *)v47 + 1);
                  v50 = (_DWORD *)(v46 + 4 * v48);
                  v51 = v49 + v48;
                  if ( (int)v48 < v49 + (int)v48 )
                  {
                    v52 = (_DWORD *)((char *)v47 + 8);
                    do
                    {
                      if ( (int)v48 < v45 || (int)v48 >= right )
                      {
                        XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v48, v46);
                        v45 = rclBounds.left;
                        right = rclBounds.right;
                      }
                      if ( (int)v48 >= v45 && (int)v48 < right )
                        *v50 = *v52;
                      ++v50;
                      ++v52;
                      LODWORD(v48) = v48 + 1;
                    }
                    while ( (int)v48 < v51 );
                    v49 = *((_DWORD *)v47 + 1);
                    v46 = v55;
                    v7 = a2;
                  }
                  v47 = (struct _XRUNLEN *)((char *)v47 + 4 * v49 + 8);
                }
                while ( v47 != v7 );
                v6 = a3;
                v43 = v54;
              }
            }
            if ( ++v41 < rclBounds.top || v41 >= rclBounds.bottom )
            {
              XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v41);
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
