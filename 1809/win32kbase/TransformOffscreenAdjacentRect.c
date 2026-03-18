/*
 * XREFs of TransformOffscreenAdjacentRect @ 0x1C00EBB48
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0038C50 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C0038E90 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     FindAdjacentMonitor @ 0x1C00EBA54 (FindAdjacentMonitor.c)
 */

__int64 __fastcall TransformOffscreenAdjacentRect(
        LONG *a1,
        int *a2,
        struct tagRECT *a3,
        unsigned int a4,
        unsigned int a5)
{
  LONG left; // r8d
  LONG top; // ecx
  LONG right; // ecx
  LONG bottom; // ecx
  __int64 AdjacentMonitor; // rax
  unsigned int v14; // r8d
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  bool v20; // cc
  int v21; // eax
  int v22; // ecx
  __int64 result; // rax
  int v24; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+34h] [rbp-44h]
  int v26; // [rsp+38h] [rbp-40h]
  int v27; // [rsp+3Ch] [rbp-3Ch]

  left = *a1;
  if ( *a1 >= a3->left )
    left = a3->left;
  *a1 = left;
  top = a1[1];
  if ( top >= a3->top )
    top = a3->top;
  a1[1] = top;
  right = a1[2];
  if ( right <= a3->right )
    right = a3->right;
  a1[2] = right;
  bottom = a1[3];
  if ( bottom <= a3->bottom )
    bottom = a3->bottom;
  a1[3] = bottom;
  AdjacentMonitor = FindAdjacentMonitor(a3, a5);
  v14 = TransformRectBetweenCoordinateSpacesPerMonitor((__int64)&v24, (__int64)a3, a4, a5, AdjacentMonitor);
  v15 = a2[2];
  v16 = v24;
  if ( *a2 < v24 )
    v16 = *a2;
  v17 = a2[1];
  *a2 = v16;
  v18 = v25;
  if ( v17 < v25 )
    v18 = v17;
  v19 = v26;
  v20 = v15 <= v26;
  a2[1] = v18;
  if ( !v20 )
    v19 = v15;
  v21 = a2[3];
  a2[2] = v19;
  v22 = v27;
  if ( v21 > v27 )
    v22 = v21;
  result = v14;
  a2[3] = v22;
  return result;
}
