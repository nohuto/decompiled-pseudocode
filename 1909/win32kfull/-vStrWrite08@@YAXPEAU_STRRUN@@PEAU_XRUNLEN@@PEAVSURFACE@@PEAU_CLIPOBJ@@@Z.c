/*
 * XREFs of ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BC4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00D5BE8 (-vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z.c)
 *     ?vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z @ 0x1C00D5C6C (-vFindSegment@XCLIPOBJ@@QEBAXPEAU_RECTL@@JJ@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00D5CE8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
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
  bool v18; // zf
  LONG top; // ecx
  unsigned __int64 v20; // xmm0_8
  LONG v21; // r9d
  LONG left; // r15d
  LONG v23; // edi
  int v24; // edi
  __int64 v25; // r10
  LONG v26; // ecx
  int v27; // eax
  LONG v28; // r8d
  LONG v29; // eax
  LONG v30; // edx
  _BYTE *v31; // rsi
  _BYTE *v32; // r8
  int v33; // r9d
  __int64 v34; // rcx
  __int64 v35; // rdx
  int *v36; // rcx
  char v37; // al
  __int64 v38; // rcx
  __int64 v39; // r14
  size_t v40; // r12
  LONG v41; // edi
  int v42; // esi
  __int64 v43; // rcx
  struct _XRUNLEN *v44; // r14
  __int64 v45; // rsi
  int v46; // eax
  _BYTE *v47; // r12
  int v48; // edx
  int *v49; // rcx
  int v50; // [rsp+30h] [rbp-30h]
  int v51; // [rsp+38h] [rbp-28h]
  __int64 v52; // [rsp+40h] [rbp-20h]
  int *v53; // [rsp+40h] [rbp-20h]
  __int64 v54; // [rsp+48h] [rbp-18h]
  struct _RECTL rclBounds; // [rsp+50h] [rbp-10h] BYREF

  if ( a2 )
  {
    v4 = (struct _STRRUN *)((char *)a1 + 8);
    v6 = a3;
    v7 = a2;
    if ( a4 )
    {
      v18 = a4->iDComplexity == 1;
      *(_QWORD *)&rclBounds.left = 0LL;
      *(_QWORD *)&rclBounds.right = 0LL;
      if ( v18 )
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
            v52 = v25;
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
                  v29 = v28;
                v31 = (_BYTE *)(v25 + v30);
                v32 = v31;
                v33 = v29 - v30;
                if ( v30 < v29 )
                {
                  v34 = v30 - v26;
                  v35 = v33;
                  v36 = (int *)((char *)v4 + 4 * v34 + 8);
                  do
                  {
                    v37 = *(_BYTE *)v36++;
                    *v32++ = v37;
                    --v35;
                  }
                  while ( v35 );
                }
                if ( v24 > 1 )
                {
                  v38 = *((int *)v6 + 22);
                  v39 = (unsigned int)(v24 - 1);
                  v40 = v33;
                  do
                  {
                    memmove(&v31[v38], v31, v40);
                    v38 = *((int *)v6 + 22);
                    v31 += v38;
                    --v39;
                  }
                  while ( v39 );
                  v7 = a2;
                  v25 = v52;
                }
                v27 = *((_DWORD *)v4 + 1);
                v21 = v20;
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
          v51 = --v42;
          if ( v41 >= rclBounds.top && v41 < rclBounds.bottom )
          {
            v43 = *((_QWORD *)v6 + 10) + v41 * *((_DWORD *)v6 + 22);
            v54 = v43;
            if ( v4 != v7 )
            {
              v44 = v4;
              do
              {
                v45 = *(int *)v44;
                v46 = *((_DWORD *)v44 + 1);
                v47 = (_BYTE *)(v43 + v45);
                v48 = v46 + v45;
                v50 = v46 + v45;
                if ( (int)v45 < v46 + (int)v45 )
                {
                  v49 = (int *)((char *)v44 + 8);
                  v53 = (int *)((char *)v44 + 8);
                  do
                  {
                    if ( (int)v45 < rclBounds.left || (int)v45 >= rclBounds.right )
                    {
                      XCLIPOBJ::vFindSegment((XCLIPOBJ *)a4, &rclBounds, v45);
                      v48 = v50;
                      v49 = v53;
                    }
                    if ( (int)v45 >= rclBounds.left && (int)v45 < rclBounds.right )
                      *v47 = *(_BYTE *)v49;
                    ++v49;
                    ++v47;
                    LODWORD(v45) = v45 + 1;
                    v53 = v49;
                  }
                  while ( (int)v45 < v48 );
                  v46 = *((_DWORD *)v44 + 1);
                  v43 = v54;
                }
                v44 = (struct _XRUNLEN *)((char *)v44 + 4 * v46 + 8);
              }
              while ( v44 != a2 );
              v6 = a3;
              v7 = a2;
              v42 = v51;
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
