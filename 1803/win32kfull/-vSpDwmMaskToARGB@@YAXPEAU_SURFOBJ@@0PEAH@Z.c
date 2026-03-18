/*
 * XREFs of ?vSpDwmMaskToARGB@@YAXPEAU_SURFOBJ@@0PEAH@Z @ 0x1C023BD84
 * Callers:
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C023B814 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall vSpDwmMaskToARGB(struct _SURFOBJ *a1, struct _SURFOBJ *a2, int *lDelta)
{
  __int64 cx; // rcx
  char *v6; // rdx
  char *pvScan0; // rdi
  LONG v8; // r9d
  char *v9; // r10
  __int64 v10; // r13
  int v11; // ebx
  __int64 v12; // r14
  __int32 *v13; // r8
  __int64 v14; // r12
  __int32 *v15; // rax
  __int32 v16; // ecx
  char *v17; // rdi
  __int64 v18; // r10
  char *v19; // r8
  unsigned int *v20; // r10
  __int64 v21; // r12
  unsigned int *v22; // rdx
  char *v23; // r9
  __int64 v24; // rbp
  unsigned int *v25; // rax
  __int32 v26; // ecx
  __int64 v27; // rax
  int *v28; // [rsp+0h] [rbp-58h]
  __m128i si128; // [rsp+8h] [rbp-50h]

  v28 = lDelta;
  cx = a1->sizlBitmap.cx;
  v6 = 0LL;
  LODWORD(lDelta) = a1->lDelta;
  pvScan0 = (char *)a1->pvScan0;
  v8 = a1->sizlBitmap.cy >> 1;
  v9 = &pvScan0[v8 * (int)lDelta];
  if ( a2 )
    v6 = (char *)a2->pvScan0;
  v10 = cx;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffff0000000000ffffffff000000);
  v11 = a2 == 0LL;
  if ( v8 > 0 )
  {
    v12 = (unsigned int)v8;
    do
    {
      if ( v10 > 0 )
      {
        v13 = (__int32 *)v9;
        v14 = v10;
        do
        {
          if ( v6 )
            v15 = (__int32 *)((char *)v13 + v6 - v9);
          else
            v15 = v13;
          v16 = si128.m128i_i32[2 * (*(__int32 *)((char *)v13 + pvScan0 - v9) & 1) + (*v15 & 1)];
          *v13++ = v16;
          v11 |= v16 == -1;
          --v14;
        }
        while ( v14 );
      }
      if ( v6 )
        v6 += a2->lDelta;
      lDelta = (int *)a1->lDelta;
      pvScan0 = &pvScan0[(_QWORD)lDelta];
      v9 = &v9[(_QWORD)lDelta];
      --v12;
    }
    while ( v12 );
  }
  if ( !v11 )
  {
    if ( a2 )
    {
      v17 = (char *)a1->pvScan0;
      v18 = v8 * (int)lDelta;
      v19 = (char *)a2->pvScan0;
      v20 = (unsigned int *)&v17[v18];
      if ( v8 > 0 )
      {
        v21 = (unsigned int)v8;
        while ( v10 <= 0 )
        {
LABEL_27:
          v19 += a2->lDelta;
          v27 = a1->lDelta;
          v17 += v27;
          v20 = (unsigned int *)((char *)v20 + v27);
          if ( !--v21 )
            goto LABEL_28;
        }
        v22 = v20;
        v23 = (char *)(v19 - (char *)v20);
        v24 = v10;
        while ( 1 )
        {
          v25 = (unsigned int *)((char *)v22 + (_QWORD)v23);
          if ( !v19 )
            v25 = v22;
          v26 = si128.m128i_i32[2 * (*(_DWORD *)&v17[(char *)v22 - (char *)v20] & 1) + (*v25 & 1)];
          switch ( v26 )
          {
            case -16777216:
              goto LABEL_25;
            case 0:
              *v22 = 0;
              break;
            case 16777215:
LABEL_25:
              *v22 = *(unsigned int *)((char *)v22 + (_QWORD)v23) | 0xFF000000;
              break;
          }
          ++v22;
          if ( !--v24 )
            goto LABEL_27;
        }
      }
    }
  }
LABEL_28:
  *v28 = v11;
}
