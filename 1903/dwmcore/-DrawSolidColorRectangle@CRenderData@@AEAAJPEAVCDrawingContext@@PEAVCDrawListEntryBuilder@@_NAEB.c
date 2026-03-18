/*
 * XREFs of ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800BF870
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x1800BED68 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18004E9C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18004EA28 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180078AB8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800BFA34 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderData::DrawSolidColorRectangle(
        CRenderData *this,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        char a4,
        const struct MilRectF *a5,
        const struct _D3DCOLORVALUE *a6)
{
  struct _D3DCOLORVALUE v8; // xmm0
  int v9; // eax
  __m128 v10; // xmm2
  struct _D3DCOLORVALUE *v11; // rax
  __int128 v12; // xmm0
  CGeometryOnlyDrawListBrush *v13; // rcx
  signed int v14; // ebx
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  signed int DrawList; // eax
  __int64 v19; // rcx
  struct _D3DCOLORVALUE v21; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+50h] [rbp-B0h]
  bool v24; // [rsp+9Ch] [rbp-64h]
  __int16 v25; // [rsp+9Dh] [rbp-63h]
  struct _D3DCOLORVALUE v26; // [rsp+A0h] [rbp-60h] BYREF
  char v27; // [rsp+B0h] [rbp-50h]
  struct CDrawingContext *v28; // [rsp+C0h] [rbp-40h] BYREF
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  int v31; // [rsp+D0h] [rbp-30h]
  __int128 v32; // [rsp+D4h] [rbp-2Ch]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  __int64 v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  __int64 v36; // [rsp+100h] [rbp+0h]
  int v37; // [rsp+108h] [rbp+8h]
  char v38; // [rsp+10Ch] [rbp+Ch]

  v29 = 0;
  v30 = 0;
  v22 = 0LL;
  *(struct _D3DCOLORVALUE *)&v8.r = *(struct _D3DCOLORVALUE *)&a6->r;
  v9 = *((_DWORD *)a2 + 816);
  v28 = a2;
  v31 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  v23 = 0;
  v25 = 0;
  *(struct _D3DCOLORVALUE *)&v26.r = *(struct _D3DCOLORVALUE *)&v8.r;
  if ( v9 )
    v10 = (__m128)*(unsigned int *)(*((_QWORD *)a2 + 410) + 4LL * (unsigned int)(v9 - 1));
  else
    v10 = (__m128)(unsigned int)FLOAT_1_0;
  *(struct _D3DCOLORVALUE *)&v26.r = (struct _D3DCOLORVALUE)_mm_mul_ps(*(__m128 *)&v26.r, _mm_shuffle_ps(v10, v10, 0));
  v11 = Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v21, &v26);
  *(_QWORD *)&v26.b = 0LL;
  v27 = 1;
  v12 = *(_OWORD *)&v11->r;
  v38 = 0;
  v24 = a4 == 0;
  *(_QWORD *)&v26.r = &v21;
  v32 = v12;
  *(_QWORD *)&v21.r = 0LL;
  v14 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v26.b);
  if ( v27 )
  {
    v13 = **(CGeometryOnlyDrawListBrush ***)&v26.r;
    **(_QWORD **)&v26.r = *(_QWORD *)&v26.b;
    if ( v13 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v13, 1);
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v13, 0LL, 0, v14, 0x38Bu, 0LL);
  }
  else
  {
    v15 = *(_OWORD *)a5;
    v16 = *(_QWORD *)&v21.r;
    *(_QWORD *)&v26.b = *((_QWORD *)a5 + 1);
    *(_BYTE *)(*(_QWORD *)&v21.r + 52LL) = 1;
    *(_OWORD *)(v16 + 32) = v15;
    *(_DWORD *)(v16 + 48) = 50529027;
    *(_QWORD *)&v26.r = *(_QWORD *)&v21.r;
    *(_QWORD *)&v21.r = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)&v28, 0, &v26);
    if ( *(_QWORD *)&v26.r )
      std::default_delete<CShape>::operator()(v17, *(__int64 (__fastcall ****)(_QWORD, __int64))&v26.r);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&v28,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v22,
                 a3);
    v14 = DrawList;
    if ( DrawList < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, DrawList, 0x38Fu, 0LL);
  }
  if ( *(_QWORD *)&v21.r )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(*(CGeometryOnlyDrawListBrush **)&v21.r, 1);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v28);
  return (unsigned int)v14;
}
