/*
 * XREFs of ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x18021D710
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18009266C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B9D4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::ClipWithRect(const struct CShape *a1, const struct tagRECT *a2, struct CShape **a3)
{
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct tagRECT v10; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-29h] BYREF
  int v12; // [rsp+58h] [rbp-11h] BYREF
  __int64 v13; // [rsp+98h] [rbp+2Fh]

  v11[1] = 0LL;
  v12 = 0;
  v13 = 0LL;
  v11[0] = &CRegionShape::`vftable';
  v11[2] = &v12;
  v10 = *a2;
  CRegionShape::BuildFromRects((__int64)v11, (__int64)&v10, 1);
  v6 = CShape::Combine(a1, v5, (CShape *)v11, 0LL, 1, a3);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xCEu);
  CRegionShape::~CRegionShape((CRegionShape *)v11);
  return v8;
}
