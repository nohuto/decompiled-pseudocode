/*
 * XREFs of ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18019A570
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180026D0C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180026DE0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18005C51C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18005C55C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800AEDD0 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1800B1E70 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800B40E0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndBitmap::GenerateDrawList(
        CHwndBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // ecx
  int v8; // eax
  int DrawList; // eax
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64, CSurfaceDrawListBrush **); // rax
  CSurfaceDrawListBrush *v14; // rcx
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-E0h]
  __int16 v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+32h] [rbp-CEh]
  CSurfaceDrawListBrush *v20; // [rsp+40h] [rbp-C0h] BYREF
  CSurfaceDrawListBrush *v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h]
  CSurfaceDrawListBrush **v24; // [rsp+60h] [rbp-A0h]
  CSurfaceDrawListBrush *v25; // [rsp+68h] [rbp-98h] BYREF
  char v26; // [rsp+70h] [rbp-90h]
  __int128 v27; // [rsp+78h] [rbp-88h] BYREF
  char v28; // [rsp+88h] [rbp-78h]
  __int128 v29; // [rsp+90h] [rbp-70h] BYREF
  int v30; // [rsp+A0h] [rbp-60h]
  __int16 v31; // [rsp+ECh] [rbp-14h]
  char v32; // [rsp+EEh] [rbp-12h]
  struct CDrawingContext *v33; // [rsp+F0h] [rbp-10h] BYREF
  int v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+FCh] [rbp-4h]
  int v36; // [rsp+100h] [rbp+0h]
  __int128 v37; // [rsp+104h] [rbp+4h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  __int64 v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  __int64 v41; // [rsp+130h] [rbp+30h]
  int v42; // [rsp+138h] [rbp+38h]
  char v43; // [rsp+13Ch] [rbp+3Ch]
  struct CDrawListEntry **v44[288]; // [rsp+140h] [rbp+40h] BYREF

  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v44);
  v22 = 0LL;
  v7 = 0;
  v23 = 0LL;
  v8 = *((_DWORD *)a2 + 62);
  v21 = 0LL;
  if ( v8 == 1 )
  {
    v7 = 1;
  }
  else
  {
    if ( v8 <= 1 )
      goto LABEL_11;
    if ( v8 <= 3 )
    {
      v7 = 2;
    }
    else
    {
      if ( v8 == 4 )
      {
LABEL_7:
        v7 = 3;
        goto LABEL_11;
      }
      if ( v8 != 5 )
      {
        if ( v8 != 6 )
          goto LABEL_11;
        goto LABEL_7;
      }
      v7 = 4;
    }
  }
LABEL_11:
  v34 = 0;
  v35 = 0;
  LOBYTE(v18) = InterpolationMode::FromD2D1InterpolationMode(v7);
  HIBYTE(v18) = 1;
  v37 = _xmm;
  v33 = a2;
  v36 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  v29 = 0LL;
  v30 = 0;
  v31 = 1;
  v32 = 0;
  v27 = 0LL;
  v28 = 0;
  DrawList = CDrawListBitmap::FromImageSource(
               (struct IImageSource **)&v27,
               (struct IImageSource *)(((unsigned __int64)this - 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 16) >> 64)),
               a2,
               0);
  v11 = DrawList;
  if ( DrawList < 0 )
  {
    v17 = 316;
  }
  else
  {
    v12 = *((_QWORD *)&v27 + 1);
    (*(void (__fastcall **)(_QWORD, CSurfaceDrawListBrush **))(**((_QWORD **)&v27 + 1) + 40LL))(
      *((_QWORD *)&v27 + 1),
      &v20);
    v13 = *(void (__fastcall **)(__int64, CSurfaceDrawListBrush **))(*(_QWORD *)v12 + 40LL);
    *(float *)&v23 = (float)(int)v20;
    v13(v12, &v20);
    v19 = 1;
    v25 = 0LL;
    v26 = 1;
    v24 = &v21;
    *((float *)&v23 + 1) = (float)SHIDWORD(v20);
    v11 = CSurfaceDrawListBrush::CreateWithContentRect((__int64 *)&v27, &v18, (float *)&v22, (__int64 *)&v25);
    if ( v26 )
    {
      v14 = *v24;
      *v24 = v25;
      if ( v14 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v14, 1);
    }
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v11, 0x145u);
      goto LABEL_24;
    }
    v20 = v21;
    v21 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)&v33, 0, &v20);
    if ( v20 )
      std::default_delete<CShape>::operator()(v15, (__int64 (__fastcall ***)(_QWORD, __int64))v20);
    v36 = 512;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&v33,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v29,
                 (struct CDrawListEntryBuilder *)v44);
    v11 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(a4, a2, v44);
      v11 = 0;
      goto LABEL_24;
    }
    v17 = 329;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, DrawList, v17);
LABEL_24:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v33);
  if ( v21 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v44);
  return (unsigned int)v11;
}
