/*
 * XREFs of ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0292180
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00909A8 (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C0090A24 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void __fastcall vStrWrite08(struct _STRRUN *a1, struct _XRUNLEN *a2, struct SURFACE *a3, struct _CLIPOBJ *a4)
{
  struct _XRUNLEN *v4; // rbx
  struct SURFACE *v6; // r13
  struct _XRUNLEN *v7; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  char *v12; // rdi
  _BYTE *v13; // rdx
  char *v14; // rcx
  char v15; // al
  int v16; // r15d
  __int64 v17; // rax
  LONG top; // ecx
  unsigned __int64 v19; // xmm0_8
  LONG v20; // r9d
  LONG left; // r15d
  LONG v22; // edi
  int v23; // edi
  __int64 v24; // r10
  LONG v25; // ecx
  int v26; // eax
  LONG v27; // r8d
  LONG v28; // eax
  LONG v29; // edx
  _BYTE *v30; // rsi
  _BYTE *v31; // r8
  int v32; // r9d
  __int64 v33; // rcx
  __int64 v34; // rdx
  int *v35; // rcx
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // r14
  size_t v39; // r12
  LONG v40; // edi
  int v41; // esi
  __int64 v42; // rcx
  struct _XRUNLEN *v43; // r14
  __int64 v44; // rsi
  int v45; // eax
  _BYTE *v46; // r12
  int v47; // edx
  int *v48; // rcx
  int v49; // [rsp+30h] [rbp-30h]
  int v50; // [rsp+38h] [rbp-28h]
  __int64 v51; // [rsp+40h] [rbp-20h]
  int *v52; // [rsp+40h] [rbp-20h]
  __int64 v53; // [rsp+48h] [rbp-18h]
  struct _RECTL rclBounds; // [rsp+50h] [rbp-10h] BYREF

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
        v19 = _mm_srli_si128((__m128i)rclBounds, 8).m128i_u64[0];
        v20 = v19;
        if ( top < SHIDWORD(v19) )
        {
          left = rclBounds.left;
          v22 = top + *((_DWORD *)a1 + 1);
          if ( v22 > rclBounds.top )
          {
            if ( top < rclBounds.top )
              top = rclBounds.top;
            if ( v22 >= SHIDWORD(v19) )
              v22 = HIDWORD(v19);
            v23 = v22 - top;
            v24 = *((_QWORD *)a3 + 10) + top * *((_DWORD *)a3 + 22);
            v51 = v24;
            while ( v4 != v7 )
            {
              v25 = *(_DWORD *)v4;
              v26 = *((_DWORD *)v4 + 1);
              v27 = v26 + *(_DWORD *)v4;
              if ( v27 >= left )
              {
                if ( v25 >= v20 )
                  return;
                v28 = v20;
                v29 = left;
                if ( v25 >= left )
                  v29 = *(_DWORD *)v4;
                if ( v27 < v20 )
                  v28 = v27;
                v30 = (_BYTE *)(v24 + v29);
                v31 = v30;
                v32 = v28 - v29;
                if ( v29 < v28 )
                {
                  v33 = v29 - v25;
                  v34 = v32;
                  v35 = (int *)((char *)v4 + 4 * v33 + 8);
                  do
                  {
                    v36 = *(_BYTE *)v35++;
                    *v31++ = v36;
                    --v34;
                  }
                  while ( v34 );
                }
                if ( v23 > 1 )
                {
                  v37 = *((int *)v6 + 22);
                  v38 = (unsigned int)(v23 - 1);
                  v39 = v32;
                  do
                  {
                    memmove(&v30[v37], v30, v39);
                    v37 = *((int *)v6 + 22);
                    v30 += v37;
                    --v38;
                  }
                  while ( v38 );
                  v7 = a2;
                  v24 = v51;
                }
                v26 = *((_DWORD *)v4 + 1);
                v20 = v19;
              }
              v4 = (struct _XRUNLEN *)((char *)v4 + 4 * v26 + 8);
            }
          }
        }
      }
      else
      {
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)a4, 0, 0, 4u, 0x64u);
        v40 = *(_DWORD *)a1;
        v41 = *((_DWORD *)a1 + 1);
        rclBounds = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
LABEL_57:
        XCLIPOBJ::vFindScan((XCLIPOBJ *)a4, &rclBounds, v40);
        while ( v41 )
        {
          v50 = --v41;
          if ( v40 >= rclBounds.top && v40 < rclBounds.bottom )
          {
            v42 = *((_QWORD *)v6 + 10) + v40 * *((_DWORD *)v6 + 22);
            v53 = v42;
            if ( v4 != v7 )
            {
              v43 = v4;
              do
              {
                v44 = *(int *)v43;
                v45 = *((_DWORD *)v43 + 1);
                v46 = (_BYTE *)(v42 + v44);
                v47 = v45 + v44;
                v49 = v45 + v44;
                if ( (int)v44 < v45 + (int)v44 )
                {
                  v48 = (int *)((char *)v43 + 8);
                  v52 = (int *)((char *)v43 + 8);
                  do
                  {
                    if ( (int)v44 < rclBounds.left || (int)v44 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v44);
                      v47 = v49;
                      v48 = v52;
                    }
                    if ( (int)v44 >= rclBounds.left && (int)v44 < rclBounds.right )
                      *v46 = *(_BYTE *)v48;
                    ++v48;
                    ++v46;
                    LODWORD(v44) = v44 + 1;
                    v52 = v48;
                  }
                  while ( (int)v44 < v47 );
                  v45 = *((_DWORD *)v43 + 1);
                  v42 = v53;
                }
                v43 = (struct _XRUNLEN *)((char *)v43 + 4 * v45 + 8);
              }
              while ( v43 != a2 );
              v6 = a3;
              v7 = a2;
              v41 = v50;
            }
          }
          if ( ++v40 < rclBounds.top || v40 >= rclBounds.bottom )
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
        v11 = *((unsigned int *)v4 + 1);
        v12 = (char *)(v9 + v10);
        v13 = (_BYTE *)(v9 + v10);
        if ( (int)v10 < (int)v11 + (int)v10 )
        {
          v14 = (char *)v4 + 8;
          do
          {
            v15 = *v14;
            v14 += 4;
            *v13++ = v15;
            --v11;
          }
          while ( v11 );
        }
        v16 = 1;
        if ( *((int *)a1 + 1) > 1 )
        {
          v17 = *((int *)v6 + 22);
          do
          {
            memmove(&v12[v17], v12, *((int *)v4 + 1));
            v17 = *((int *)v6 + 22);
            ++v16;
            v12 += v17;
          }
          while ( v16 < *((_DWORD *)a1 + 1) );
        }
        v4 = (struct _XRUNLEN *)((char *)v4 + 4 * *((int *)v4 + 1) + 8);
      }
    }
  }
}
