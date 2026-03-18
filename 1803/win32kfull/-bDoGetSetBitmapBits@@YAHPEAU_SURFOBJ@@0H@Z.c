/*
 * XREFs of ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C0076738
 * Callers:
 *     GreSetBitmapBits @ 0x1C0076A30 (GreSetBitmapBits.c)
 *     GreGetBitmapBits @ 0x1C0102420 (GreGetBitmapBits.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall bDoGetSetBitmapBits(struct _SURFOBJ *a1, struct _SURFOBJ *a2, int a3)
{
  char *pvBits; // r14
  char *pvScan0; // rdi
  LONG lDelta; // r8d
  unsigned int v8; // r12d
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int cjBits; // ebx
  unsigned int v12; // edx
  char *v13; // rdi
  int v14; // esi
  unsigned int v15; // ebx
  char *v18; // rdi
  LONG cx; // r8d
  LONG cy; // edx
  __int64 iBitmapFormat; // rax
  char *v22; // rsi
  LONG v23; // r12d
  unsigned int v24; // r15d
  unsigned int v25; // edx
  unsigned int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // rdx
  char *v29; // rsi
  int v30; // r14d
  unsigned int v31; // ebx
  unsigned int v33; // r14d
  unsigned int v34; // esi
  HDEV v35; // [rsp+40h] [rbp-38h] BYREF
  HDEV hdev; // [rsp+48h] [rbp-30h] BYREF
  LONG v37; // [rsp+90h] [rbp+18h]

  if ( !a3 )
  {
    SURFOBJ_TO_SURFACE(a1);
    hdev = a1->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, a1, 0LL, 0);
    pvBits = (char *)a2->pvBits;
    pvScan0 = (char *)a1->pvScan0;
    lDelta = a1->lDelta;
    v37 = lDelta;
    v8 = ((unsigned int)(a1->sizlBitmap.cx * *((_DWORD *)&galBitsPerPixel + a1->iBitmapFormat) + 15) >> 3) & 0x1FFFFFFE;
    v9 = v8 * a1->sizlBitmap.cy;
    v10 = a2->lDelta;
    if ( (v10 & 0x80000000) != 0 || v10 >= v9 )
    {
      a2->cjBits = 0;
    }
    else
    {
      cjBits = v9 - v10;
      if ( a2->cjBits + v10 <= v9 )
        cjBits = a2->cjBits;
      a2->cjBits = cjBits;
      v12 = v10 % v8;
      v13 = &pvScan0[lDelta * (v10 / v8)];
      if ( v10 % v8 )
      {
        v34 = v8 - v12;
        if ( v8 - v12 >= cjBits )
          v34 = cjBits;
        memmove(&v13[v12], pvBits, v34);
        pvBits += v34;
        v13 += v37;
        cjBits -= v34;
      }
      v14 = cjBits / v8;
      v15 = cjBits % v8;
      while ( v14-- )
      {
        memmove(v13, pvBits, v8);
        pvBits += v8;
        v13 += v37;
      }
      if ( v15 )
        memmove(v13, pvBits, v15);
    }
    return 1LL;
  }
  SURFOBJ_TO_SURFACE(a2);
  v35 = a2->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&v35, a2, 0LL, 0);
  v18 = (char *)a1->pvBits;
  cx = a2->sizlBitmap.cx;
  cy = a2->sizlBitmap.cy;
  iBitmapFormat = a2->iBitmapFormat;
  if ( !v18 )
  {
    a1->cjBits = cy * (((unsigned int)(cx * *((_DWORD *)&galBitsPerPixel + iBitmapFormat) + 15) >> 3) & 0x1FFFFFFE);
    return 1LL;
  }
  v22 = (char *)a2->pvScan0;
  v23 = a2->lDelta;
  v24 = ((unsigned int)(cx * *((_DWORD *)&galBitsPerPixel + iBitmapFormat) + 15) >> 3) & 0x1FFFFFFE;
  v25 = v24 * cy;
  v26 = a1->lDelta;
  if ( (v26 & 0x80000000) == 0 && v26 < v25 )
  {
    v27 = v25 - v26;
    if ( a1->cjBits + v26 <= v25 )
      v27 = a1->cjBits;
    a1->cjBits = v27;
    v28 = v26 % v24;
    v29 = &v22[v23 * (v26 / v24)];
    if ( v26 % v24 )
    {
      v33 = v24 - v28;
      if ( v24 - (unsigned int)v28 >= v27 )
        v33 = v27;
      memmove(v18, &v29[v28], v33);
      v18 += v33;
      v29 += v23;
      v27 -= v33;
    }
    v30 = v27 / v24;
    v31 = v27 % v24;
    while ( v30-- )
    {
      memmove(v18, v29, v24);
      v18 += v24;
      v29 += v23;
    }
    if ( v31 )
      memmove(v18, v29, v31);
    return 1LL;
  }
  a1->cjBits = 0;
  return 0LL;
}
