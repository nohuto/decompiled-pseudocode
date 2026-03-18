/*
 * XREFs of ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01367A0
 * Callers:
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01365DC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall bBlurCursorShadow(struct _SURFOBJ *a1)
{
  LONG cx; // eax
  struct _SURFOBJ *v2; // rbx
  unsigned int v3; // r14d
  _BYTE *v4; // r8
  char *v5; // r9
  char *v6; // r10
  char *pvScan0; // r11
  _WORD **v8; // rsi
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  _WORD *v11; // r15
  unsigned __int64 v12; // rdi
  _WORD *v13; // rax
  unsigned __int64 v14; // rdi
  char *v15; // r14
  __int16 v16; // ax
  __int16 v17; // cx
  __int64 lDelta; // rcx
  unsigned __int64 v19; // r15
  int v20; // esi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // r12
  _WORD *v25; // rdi
  __int64 v26; // r13
  unsigned int *v27; // rbx
  unsigned __int64 v28; // r8
  unsigned __int16 v29; // cx
  __int64 v30; // rcx
  _WORD *v31; // r12
  unsigned __int64 v32; // r13
  _WORD *v33; // rax
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // r8
  char *v36; // rdi
  __int16 v37; // ax
  __int16 v38; // cx
  __int64 v40; // rax
  _BYTE *v42; // [rsp+40h] [rbp-C8h] BYREF
  char *v43; // [rsp+48h] [rbp-C0h]
  char *v44; // [rsp+50h] [rbp-B8h]
  _BYTE v45[128]; // [rsp+58h] [rbp-B0h] BYREF
  char v46; // [rsp+D8h] [rbp-30h] BYREF
  char v47; // [rsp+158h] [rbp+50h] BYREF

  cx = a1->sizlBitmap.cx;
  v2 = a1;
  if ( cx < 3 || a1->sizlBitmap.cy < 3 )
    return 0LL;
  v3 = 0;
  if ( cx <= 64 )
  {
    v4 = v45;
    v42 = v45;
    v5 = &v46;
    v6 = &v47;
LABEL_5:
    v44 = v6;
    v43 = v5;
    goto LABEL_6;
  }
  v42 = PALLOCMEM2((unsigned int)(6 * cx), 1886221383LL, 1);
  v4 = v42;
  if ( v42 )
  {
    v40 = v2->sizlBitmap.cx;
    v5 = &v42[2 * v40];
    v6 = &v5[2 * v40];
    goto LABEL_5;
  }
  v6 = v44;
  v5 = v43;
LABEL_6:
  if ( !v4 )
    return 0LL;
  pvScan0 = (char *)v2->pvScan0;
  v8 = (_WORD **)&v42;
  v9 = 3LL;
  do
  {
    v10 = 0LL;
    v11 = *v8;
    v12 = v2->sizlBitmap.cx - 2;
    v13 = &(*v8)[v12];
    v14 = (v12 * 2) >> 1;
    if ( *v8 > v13 )
      v14 = 0LL;
    if ( v14 )
    {
      v15 = pvScan0 + 4;
      do
      {
        v16 = (unsigned __int8)v15[7];
        ++v10;
        v17 = (unsigned __int8)*(v15 - 1);
        v15 += 4;
        *v11++ = (unsigned __int8)*(v15 - 1) + v16 + v17;
      }
      while ( v10 < v14 );
      v3 = 0;
    }
    lDelta = v2->lDelta;
    ++v8;
    pvScan0 += lDelta;
    --v9;
  }
  while ( v9 );
  v19 = (unsigned __int64)v2->pvScan0 + lDelta + 4;
  v20 = v2->sizlBitmap.cy - 2;
  if ( v2->sizlBitmap.cy != 2 )
  {
    while ( 1 )
    {
      --v20;
      v21 = 4LL * (v2->sizlBitmap.cx - 2);
      v22 = v21 + v19;
      v23 = v21 >> 2;
      if ( v19 > v22 )
        v23 = 0LL;
      if ( v23 )
      {
        v24 = v6 - v4;
        v25 = v4;
        v26 = v5 - v4;
        v27 = (unsigned int *)v19;
        v28 = 0LL;
        do
        {
          ++v28;
          v29 = *v25 + *(_WORD *)((char *)v25 + v24) + *(_WORD *)((char *)v25 + v26);
          ++v25;
          *v27++ = (v29 << 21) & 0xFF000000;
        }
        while ( v28 < v23 );
        v4 = v42;
        v2 = a1;
      }
      v30 = v2->lDelta;
      v19 += v30;
      if ( !v20 )
        break;
      v31 = (&v42)[v3];
      v32 = v2->sizlBitmap.cx - 2;
      v33 = &v31[v32];
      v34 = (v32 * 2) >> 1;
      if ( v31 > v33 )
        v34 = 0LL;
      if ( v34 )
      {
        v35 = 0LL;
        v36 = pvScan0 + 4;
        do
        {
          v37 = (unsigned __int8)v36[7];
          ++v35;
          v38 = (unsigned __int8)*(v36 - 1);
          v36 += 4;
          *v31++ = (unsigned __int8)*(v36 - 1) + v37 + v38;
        }
        while ( v35 < v34 );
        LODWORD(v30) = v2->lDelta;
        v4 = v42;
      }
      pvScan0 += (int)v30;
      v3 = v3 + 1 < 3 ? v3 + 1 : 0;
    }
  }
  if ( v4 != v45 )
    Win32FreePool(v4);
  return 1LL;
}
