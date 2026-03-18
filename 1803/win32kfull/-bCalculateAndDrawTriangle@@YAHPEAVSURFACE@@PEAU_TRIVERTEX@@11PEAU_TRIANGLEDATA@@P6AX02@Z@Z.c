/*
 * XREFs of ?bCalculateAndDrawTriangle@@YAHPEAVSURFACE@@PEAU_TRIVERTEX@@11PEAU_TRIANGLEDATA@@P6AX02@Z@Z @ 0x1C0124164
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0123F9C (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C0124354 (-vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C0124710 (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C01249C4 (-bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bCalculateAndDrawTriangle(
        struct SURFACE *a1,
        struct _TRIVERTEX *a2,
        struct _TRIVERTEX *a3,
        struct _TRIVERTEX *a4,
        struct _TRIANGLEDATA *a5,
        void (*a6)(struct SURFACE *, struct _TRIANGLEDATA *))
{
  struct _TRIVERTEX *v7; // r9
  struct _TRIVERTEX *v8; // rbx
  struct _TRIVERTEX *v9; // rdx
  int v10; // eax
  struct _TRIVERTEX *v11; // rdx
  struct _TRIANGLEDATA *v12; // r9
  struct _TRIVERTEX *v13; // rdi
  LONG y; // edx
  LONG v15; // ecx
  int v16; // r8d
  _DWORD *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx

  v7 = a2;
  if ( !a6 )
    return 0LL;
  if ( a2->y <= a3->y )
  {
    a2 = a3;
    a3 = v7;
  }
  v8 = a4;
  if ( a2->y <= a4->y )
    a4 = a2;
  else
    v8 = a2;
  v9 = a3;
  if ( a3->y <= a4->y )
  {
    v9 = a4;
    a4 = a3;
  }
  v10 = lCalculateTriangleArea(a4, v9, v8, a5);
  if ( !v10 )
    return 0LL;
  v13 = v11;
  if ( v10 < 0 )
  {
    v13 = v8;
    v8 = v11;
    if ( (int)lCalculateTriangleArea(a4, v13, v11, v12) <= 0 )
      return 0LL;
  }
  y = a4->y;
  if ( y <= *((_DWORD *)a5 + 1) )
    y = *((_DWORD *)a5 + 1);
  *((_DWORD *)a5 + 28) = y;
  v15 = v13->y;
  if ( v15 <= v8->y )
    v15 = v8->y;
  if ( v15 >= *((_DWORD *)a5 + 3) )
    v15 = *((_DWORD *)a5 + 3);
  *((_DWORD *)a5 + 29) = v15;
  v16 = 0;
  if ( v15 - y > 0 )
  {
    v17 = (_DWORD *)((char *)a5 + 172);
    do
    {
      *(v17 - 1) = 0x7FFFFFFF;
      *v17 = 0x80000000;
      ++v16;
      v17 += 10;
    }
    while ( v16 < *((_DWORD *)a5 + 29) - *((_DWORD *)a5 + 28) );
  }
  if ( a4->Red > 0xFF00u )
    a4->Red = -256;
  if ( a4->Green > 0xFF00u )
    a4->Green = -256;
  if ( a4->Blue > 0xFF00u )
    a4->Blue = -256;
  if ( v13->Red > 0xFF00u )
    v13->Red = -256;
  if ( v13->Green > 0xFF00u )
    v13->Green = -256;
  if ( v13->Blue > 0xFF00u )
    v13->Blue = -256;
  if ( v8->Red > 0xFF00u )
    v8->Red = -256;
  if ( v8->Green > 0xFF00u )
    v8->Green = -256;
  if ( v8->Blue > 0xFF00u )
    v8->Blue = -256;
  bCalulateColorGradient(a4, v13, v8, a5);
  vCalculateLine(a4, v13, a5);
  vCalculateLine(v13, v8, a5);
  vCalculateLine(v8, a4, a5);
  if ( bUMPDSecurityGateEx(v19, v18)
    && !*((_QWORD *)a5 + 19)
    && ((char *)a6 == (char *)vGradientFill4 || (char *)a6 == (char *)vGradientFill8) )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\trimesh.cxx:%d:bCalculateAndDrawTriangle:pfnG references NULL ptData->pxlo.\n",
        1008);
  }
  else
  {
    _guard_dispatch_icall_fptr();
  }
  return 1LL;
}
