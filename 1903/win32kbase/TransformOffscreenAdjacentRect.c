/*
 * XREFs of TransformOffscreenAdjacentRect @ 0x1C00B3278
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C003F670 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C003F61C (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     FindAdjacentMonitor @ 0x1C00B3378 (FindAdjacentMonitor.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall TransformOffscreenAdjacentRect(int *a1, int *a2, int *a3, unsigned int a4, unsigned int a5)
{
  int v8; // r8d
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
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
  __int128 v24; // [rsp+30h] [rbp-48h] BYREF

  v8 = *a1;
  if ( *a1 >= *a3 )
    v8 = *a3;
  *a1 = v8;
  v10 = a1[1];
  if ( v10 >= a3[1] )
    v10 = a3[1];
  a1[1] = v10;
  v11 = a1[2];
  if ( v11 <= a3[2] )
    v11 = a3[2];
  a1[2] = v11;
  v12 = a1[3];
  if ( v12 <= a3[3] )
    v12 = a3[3];
  a1[3] = v12;
  v24 = 0uLL;
  AdjacentMonitor = FindAdjacentMonitor(a3, a5);
  v14 = TransformRectBetweenCoordinateSpacesPerMonitor(&v24, a3, a4, a5, AdjacentMonitor);
  v15 = a2[2];
  v16 = v24;
  if ( *a2 < (int)v24 )
    v16 = *a2;
  v17 = a2[1];
  *a2 = v16;
  v18 = DWORD1(v24);
  if ( v17 < SDWORD1(v24) )
    v18 = v17;
  v19 = DWORD2(v24);
  v20 = v15 <= SDWORD2(v24);
  a2[1] = v18;
  if ( !v20 )
    v19 = v15;
  v21 = a2[3];
  a2[2] = v19;
  v22 = HIDWORD(v24);
  if ( v21 > SHIDWORD(v24) )
    v22 = v21;
  result = v14;
  a2[3] = v22;
  return result;
}
