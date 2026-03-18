/*
 * XREFs of ?bIsTriangleInBounds@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C0124C90
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0123F9C (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bIsTriangleInBounds(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIANGLEDATA *a4)
{
  LONG x; // edi
  LONG v5; // eax
  LONG y; // r11d
  LONG v7; // ecx
  LONG v8; // ebx
  LONG v9; // r10d
  LONG v10; // edx
  LONG v11; // r8d
  bool v12; // zf
  LONG v13; // ebp
  LONG v14; // ecx
  LONG v15; // esi
  LONG v16; // eax
  LONG v17; // eax
  LONG v18; // eax
  bool v19; // sf
  bool v20; // of

  x = a1->x;
  v5 = x;
  y = a1->y;
  v7 = a1->x;
  v8 = a2->x;
  v9 = a2->y;
  v10 = a3->x;
  if ( x <= v8 )
    v5 = v8;
  v11 = a3->y;
  if ( x <= v8 )
    v7 = v8;
  v20 = __OFSUB__(v7, v10);
  v12 = v7 == v10;
  v19 = v7 - v10 < 0;
  v13 = v10;
  v14 = y;
  v15 = v11;
  if ( !(v19 ^ v20 | v12) )
    v13 = v5;
  v16 = y;
  if ( y >= v9 )
  {
    v16 = v9;
    v14 = v9;
  }
  if ( v14 < v11 )
    v15 = v16;
  v17 = y;
  if ( y <= v9 )
  {
    v17 = v9;
    y = v9;
  }
  v20 = __OFSUB__(v17, v11);
  v12 = v17 == v11;
  v19 = v17 - v11 < 0;
  v18 = x;
  if ( !(v19 ^ v20 | v12) )
    v11 = y;
  v20 = __OFSUB__(x, v8);
  v19 = x - v8 < 0;
  if ( x >= v8 )
    x = v8;
  if ( v19 == v20 )
    v18 = v8;
  if ( v18 < v10 )
    v10 = x;
  return v10 < *((_DWORD *)a4 + 2) && v13 > *(_DWORD *)a4 && v15 < *((_DWORD *)a4 + 3) && v11 > *((_DWORD *)a4 + 1);
}
