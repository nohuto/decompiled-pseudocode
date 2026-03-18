/*
 * XREFs of ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BCC70
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00F5AF8 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00F5B7C (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00F5BF8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
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
  bool v19; // zf
  LONG top; // ecx
  unsigned __int64 v21; // xmm0_8
  LONG v22; // r10d
  LONG left; // r13d
  LONG v24; // esi
  int v25; // esi
  __int64 v26; // r11
  LONG v27; // edx
  int v28; // eax
  LONG v29; // r9d
  LONG v30; // ecx
  LONG v31; // r8d
  int v32; // r10d
  _WORD *v33; // r11
  _WORD *v34; // r9
  int v35; // r8d
  __int64 v36; // rdx
  int *v37; // rcx
  __int16 v38; // ax
  size_t v39; // r12
  __int64 v40; // r15
  char *v41; // rbx
  LONG v42; // ebx
  int v43; // r13d
  __int64 v44; // rdx
  struct _XRUNLEN *v45; // r14
  __int64 v46; // rsi
  int v47; // ecx
  _WORD *v48; // r8
  int v49; // r9d
  int *v50; // rcx
  __int64 v51; // [rsp+30h] [rbp-30h]
  _WORD *v52; // [rsp+30h] [rbp-30h]
  int *v53; // [rsp+38h] [rbp-28h]
  __int64 v54; // [rsp+40h] [rbp-20h]
  struct _RECTL rclBounds; // [rsp+48h] [rbp-18h] BYREF
  int v57; // [rsp+A8h] [rbp+48h]

  if ( a2 )
  {
    v4 = (struct _STRRUN *)((char *)a1 + 8);
    v6 = a3;
    v7 = a2;
    if ( a4 )
    {
      v19 = a4->iDComplexity == 1;
      *(_QWORD *)&rclBounds.left = 0LL;
      *(_QWORD *)&rclBounds.right = 0LL;
      if ( v19 )
      {
        top = *(_DWORD *)a1;
        rclBounds = a4->rclBounds;
        v21 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v22 = v21;
        if ( top < SHIDWORD(v21) )
        {
          left = rclBounds.left;
          v24 = top + *((_DWORD *)a1 + 1);
          if ( v24 > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( v24 >= SHIDWORD(v21) )
              v24 = HIDWORD(v21);
            v25 = v24 - top;
            v26 = *((_QWORD *)a3 + 10) + top * *((_DWORD *)a3 + 22);
            v51 = v26;
            while ( v4 != v7 )
            {
              v27 = *(_DWORD *)v4;
              v28 = *((_DWORD *)v4 + 1);
              v29 = v28 + *(_DWORD *)v4;
              if ( v29 >= left )
              {
                if ( v27 >= v22 )
                  return;
                v30 = v22;
                v31 = left;
                if ( v27 >= left )
                  v31 = *(_DWORD *)v4;
                if ( v29 < v22 )
                  v30 = v28 + *(_DWORD *)v4;
                v32 = v30 - v31;
                v33 = (_WORD *)(v26 + 2LL * v31);
                v34 = v33;
                if ( v31 < v30 )
                {
                  v35 = v31 - v27;
                  v36 = v32;
                  v37 = (int *)((char *)v4 + 4 * v35 + 8);
                  do
                  {
                    v38 = *(_WORD *)v37++;
                    *v34++ = v38;
                    --v36;
                  }
                  while ( v36 );
                }
                if ( v25 > 1 )
                {
                  v39 = 2 * v32;
                  v40 = (unsigned int)(v25 - 1);
                  do
                  {
                    v41 = (char *)v33 + *((int *)v6 + 22);
                    memmove(v41, v33, v39);
                    v33 = v41;
                    --v40;
                  }
                  while ( v40 );
                  v7 = a2;
                }
                v28 = *((_DWORD *)v4 + 1);
                v22 = v21;
                v26 = v51;
              }
              v4 = (struct _XRUNLEN *)((char *)v4 + 4 * v28 + 8);
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
LABEL_57:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v42);
        while ( v43 )
        {
          --v43;
          if ( v42 >= rclBounds.top && v42 < rclBounds.bottom )
          {
            v44 = *((_QWORD *)v6 + 10) + v42 * *((_DWORD *)v6 + 22);
            v54 = v44;
            if ( v4 != v7 )
            {
              v45 = v4;
              do
              {
                v46 = *(int *)v45;
                v47 = *((_DWORD *)v45 + 1);
                v48 = (_WORD *)(v44 + 2 * v46);
                v49 = v47 + v46;
                v52 = v48;
                v57 = v47 + v46;
                if ( (int)v46 < v47 + (int)v46 )
                {
                  v50 = (int *)((char *)v45 + 8);
                  v53 = (int *)((char *)v45 + 8);
                  do
                  {
                    if ( (int)v46 < rclBounds.left || (int)v46 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v46);
                      v48 = v52;
                      v49 = v57;
                      v50 = v53;
                    }
                    if ( (int)v46 >= rclBounds.left && (int)v46 < rclBounds.right )
                      *v48 = *(_WORD *)v50;
                    ++v48;
                    ++v50;
                    LODWORD(v46) = v46 + 1;
                    v52 = v48;
                    v53 = v50;
                  }
                  while ( (int)v46 < v49 );
                  v47 = *((_DWORD *)v45 + 1);
                  v44 = v54;
                }
                v45 = (struct _XRUNLEN *)((char *)v45 + 4 * v47 + 8);
              }
              while ( v45 != v7 );
              v6 = a3;
            }
          }
          if ( ++v42 < rclBounds.top || v42 >= rclBounds.bottom )
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
