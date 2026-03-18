/*
 * XREFs of ??$AppendRects@UMilRectF@@@CRegion@@QEAAJPEBUMilRectF@@I@Z @ 0x1802076DC
 * Callers:
 *     ?ClampRegionToBounds@CHwFullScreenRenderTarget@@AEBAJPEAVCRegion@@@Z @ 0x180207FB8 (-ClampRegionToBounds@CHwFullScreenRenderTarget@@AEBAJPEAVCRegion@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::AppendRects<MilRectF>(const struct FastRegion::Internal::CRgnData **this, float *a2)
{
  unsigned int v2; // edi
  int v3; // r11d
  int v4; // esi
  int v5; // r9d
  int v6; // r10d
  int v7; // r14d
  _DWORD *v9; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v10[18]; // [rsp+50h] [rbp-71h] BYREF

  v2 = 0;
  v9 = v10;
  v10[0] = 0;
  v3 = (int)*a2;
  v4 = (int)a2[2];
  v5 = (int)a2[1];
  v6 = (int)a2[3];
  if ( v3 >= v4 || v5 >= v6 )
  {
    v10[0] = 0;
  }
  else
  {
    v10[0] = 2;
    v10[1] = v3;
    v10[2] = v4;
    v10[3] = v5;
    v10[4] = 16;
    v10[7] = v3;
    v10[8] = v4;
    v10[5] = v6;
    v10[6] = 16;
  }
  v7 = FastRegion::CRegion::Union(this, (const struct FastRegion::Internal::CRgnData **)&v9);
  if ( v7 < 0 )
    v2 = v7;
  FastRegion::CRegion::FreeMemory((void **)&v9);
  return v2;
}
