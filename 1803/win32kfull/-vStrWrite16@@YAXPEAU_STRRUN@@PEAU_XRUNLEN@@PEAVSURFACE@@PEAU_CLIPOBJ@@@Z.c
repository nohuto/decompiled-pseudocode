/*
 * XREFs of ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02924A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00909A8 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0090A24 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void __fastcall vStrWrite16(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v4; // rdi
  struct SURFACE *v6; // r14
  struct _XRUNLEN *v7; // r12
  __int64 v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // r10d
  _WORD *v12; // r9
  _WORD *v13; // r8
  __int16 *v14; // rcx
  __int64 v15; // rdx
  __int16 v16; // ax
  int v17; // r15d
  char *v18; // rbx
  LONG top; // ecx
  unsigned __int64 v20; // xmm0_8
  LONG v21; // r10d
  LONG left; // r13d
  LONG v23; // esi
  int v24; // esi
  __int64 v25; // r11
  LONG v26; // edx
  int v27; // eax
  LONG v28; // r9d
  LONG v29; // ecx
  LONG v30; // r8d
  int v31; // r10d
  _WORD *v32; // r11
  _WORD *v33; // r9
  int v34; // r8d
  __int64 v35; // rdx
  int *v36; // rcx
  __int16 v37; // ax
  size_t v38; // r12
  __int64 v39; // r15
  char *v40; // rbx
  LONG v41; // ebx
  int v42; // r13d
  __int64 v43; // rdx
  struct _XRUNLEN *v44; // r14
  __int64 v45; // rsi
  int v46; // ecx
  _WORD *v47; // r8
  int v48; // r9d
  int *v49; // rcx
  __int64 v50; // [rsp+30h] [rbp-30h]
  _WORD *v51; // [rsp+30h] [rbp-30h]
  int *v52; // [rsp+38h] [rbp-28h]
  __int64 v53; // [rsp+40h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-18h] BYREF
  int v56; // [rsp+A8h] [rbp+48h]

  if ( a2 )
  {
    v4 = (struct _STRRUN *)((char *)a1 + 8);
    v6 = a3;
    v7 = a2;
    if ( a4 )
    {
      if ( a4->iDComplexity == 1 )
      {
        top = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v20 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v21 = v20;
        if ( top < SHIDWORD(v20) )
        {
          left = rclBounds.left;
          v23 = top + *((_DWORD *)a1 + 1);
          if ( v23 > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( v23 >= SHIDWORD(v20) )
              v23 = HIDWORD(v20);
            v24 = v23 - top;
            v25 = *((_QWORD *)a3 + 10) + top * *((_DWORD *)a3 + 22);
            v50 = v25;
            while ( v4 != v7 )
            {
              v26 = *(_DWORD *)v4;
              v27 = *((_DWORD *)v4 + 1);
              v28 = v27 + *(_DWORD *)v4;
              if ( v28 >= left )
              {
                if ( v26 >= v21 )
                  return;
                v29 = v21;
                v30 = left;
                if ( v26 >= left )
                  v30 = *(_DWORD *)v4;
                if ( v28 < v21 )
                  v29 = v27 + *(_DWORD *)v4;
                v31 = v29 - v30;
                v32 = (_WORD *)(v25 + 2LL * v30);
                v33 = v32;
                if ( v30 < v29 )
                {
                  v34 = v30 - v26;
                  v35 = v31;
                  v36 = (int *)((char *)v4 + 4 * v34 + 8);
                  do
                  {
                    v37 = *(_WORD *)v36++;
                    *v33++ = v37;
                    --v35;
                  }
                  while ( v35 );
                }
                if ( v24 > 1 )
                {
                  v38 = 2 * v31;
                  v39 = (unsigned int)(v24 - 1);
                  do
                  {
                    v40 = (char *)v32 + *((int *)v6 + 22);
                    memmove(v40, v32, v38);
                    v32 = v40;
                    --v39;
                  }
                  while ( v39 );
                  v7 = a2;
                }
                v27 = *((_DWORD *)v4 + 1);
                v21 = v20;
                v25 = v50;
              }
              v4 = (struct _XRUNLEN *)((char *)v4 + 4 * v27 + 8);
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
LABEL_57:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v41);
        while ( v42 )
        {
          --v42;
          if ( v41 >= rclBounds.top && v41 < rclBounds.bottom )
          {
            v43 = *((_QWORD *)v6 + 10) + v41 * *((_DWORD *)v6 + 22);
            v53 = v43;
            if ( v4 != v7 )
            {
              v44 = v4;
              do
              {
                v45 = *(int *)v44;
                v46 = *((_DWORD *)v44 + 1);
                v47 = (_WORD *)(v43 + 2 * v45);
                v48 = v46 + v45;
                v51 = v47;
                v56 = v46 + v45;
                if ( (int)v45 < v46 + (int)v45 )
                {
                  v49 = (int *)((char *)v44 + 8);
                  v52 = (int *)((char *)v44 + 8);
                  do
                  {
                    if ( (int)v45 < rclBounds.left || (int)v45 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v45);
                      v47 = v51;
                      v48 = v56;
                      v49 = v52;
                    }
                    if ( (int)v45 >= rclBounds.left && (int)v45 < rclBounds.right )
                      *v47 = *(_WORD *)v49;
                    ++v47;
                    ++v49;
                    LODWORD(v45) = v45 + 1;
                    v51 = v47;
                    v52 = v49;
                  }
                  while ( (int)v45 < v48 );
                  v46 = *((_DWORD *)v44 + 1);
                  v43 = v53;
                }
                v44 = (struct _XRUNLEN *)((char *)v44 + 4 * v46 + 8);
              }
              while ( v44 != v7 );
              v6 = a3;
            }
          }
          if ( ++v41 < rclBounds.top || v41 >= rclBounds.bottom )
            goto LABEL_57;
        }
      }
    }
    else
    {
      v9 = *((_QWORD *)a3 + 10) + *(_DWORD *)a1 * *((_DWORD *)a3 + 22);
      while ( v4 != v7 )
      {
        v10 = *(int *)v4;
        v11 = *((_DWORD *)v4 + 1);
        v12 = (_WORD *)(v9 + 2 * v10);
        v13 = v12;
        if ( (int)v10 < (int)(v11 + v10) )
        {
          v14 = (__int16 *)((char *)v4 + 8);
          v15 = v11;
          do
          {
            v16 = *v14;
            v14 += 2;
            *v13++ = v16;
            --v15;
          }
          while ( v15 );
        }
        v17 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          do
          {
            v18 = (char *)v12 + *((int *)a3 + 22);
            memmove(v18, v12, 2 * *((_DWORD *)v4 + 1));
            ++v17;
            v12 = v18;
          }
          while ( v17 < *((_DWORD *)a1 + 1) );
          v7 = a2;
        }
        v4 = (struct _XRUNLEN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
