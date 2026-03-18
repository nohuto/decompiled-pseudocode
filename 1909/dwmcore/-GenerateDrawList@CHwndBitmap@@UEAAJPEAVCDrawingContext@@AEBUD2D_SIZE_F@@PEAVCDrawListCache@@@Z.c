/*
 * XREFs of ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180214940
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180039FE8 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003C358 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18003C400 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18003E798 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180057610 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180066E80 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F024 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F2A8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180097560 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BB2A0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndBitmap::GenerateDrawList(
        CHwndBitmap *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v7; // eax
  int v8; // ecx
  signed int DrawList; // eax
  __int64 v10; // rcx
  signed int v11; // ebx
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64, CSurfaceDrawListBrush **); // rax
  CSurfaceDrawListBrush *v14; // rcx
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-E0h]
  __int16 v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+32h] [rbp-CEh]
  CSurfaceDrawListBrush *v20; // [rsp+40h] [rbp-C0h] BYREF
  CSurfaceDrawListBrush *v21; // [rsp+48h] [rbp-B8h] BYREF
  CSurfaceDrawListBrush **v22; // [rsp+50h] [rbp-B0h]
  CSurfaceDrawListBrush *v23; // [rsp+58h] [rbp-A8h] BYREF
  char v24; // [rsp+60h] [rbp-A0h]
  __int128 v25; // [rsp+68h] [rbp-98h] BYREF
  char v26; // [rsp+78h] [rbp-88h]
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  float v28; // [rsp+88h] [rbp-78h]
  float v29; // [rsp+8Ch] [rbp-74h]
  __int128 v30; // [rsp+90h] [rbp-70h] BYREF
  int v31; // [rsp+A0h] [rbp-60h]
  __int16 v32; // [rsp+ECh] [rbp-14h]
  char v33; // [rsp+EEh] [rbp-12h]
  struct CDrawingContext *v34; // [rsp+F0h] [rbp-10h] BYREF
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]
  int v37; // [rsp+100h] [rbp+0h]
  __int128 v38; // [rsp+104h] [rbp+4h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  __int64 v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  __int64 v42; // [rsp+130h] [rbp+30h]
  int v43; // [rsp+138h] [rbp+38h]
  char v44; // [rsp+13Ch] [rbp+3Ch]
  struct CDrawListEntry **v45[288]; // [rsp+140h] [rbp+40h] BYREF

  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v45);
  v7 = *((_DWORD *)a2 + 62);
  v21 = 0LL;
  v8 = 0;
  v27 = 0LL;
  if ( v7 == 1 )
  {
    v8 = 1;
  }
  else
  {
    if ( v7 <= 1 )
      goto LABEL_11;
    if ( v7 <= 3 )
    {
      v8 = 2;
    }
    else
    {
      if ( v7 == 4 )
      {
LABEL_7:
        v8 = 3;
        goto LABEL_11;
      }
      if ( v7 != 5 )
      {
        if ( v7 != 6 )
          goto LABEL_11;
        goto LABEL_7;
      }
      v8 = 4;
    }
  }
LABEL_11:
  v35 = 0;
  v36 = 0;
  LOBYTE(v18) = InterpolationMode::FromD2D1InterpolationMode(v8);
  HIBYTE(v18) = 1;
  v38 = _xmm;
  v34 = a2;
  v37 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0;
  v44 = 0;
  v30 = 0LL;
  v31 = 0;
  v32 = 1;
  v33 = 0;
  v25 = 0LL;
  v26 = 0;
  DrawList = CDrawListBitmap::FromImageSource(
               (struct IImageSource **)&v25,
               (struct IImageSource *)(((unsigned __int64)this - 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 16) >> 64)),
               a2,
               0);
  v11 = DrawList;
  if ( DrawList < 0 )
  {
    v17 = 315;
  }
  else
  {
    v12 = *((_QWORD *)&v25 + 1);
    (*(void (__fastcall **)(_QWORD, CSurfaceDrawListBrush **))(**((_QWORD **)&v25 + 1) + 40LL))(
      *((_QWORD *)&v25 + 1),
      &v20);
    v13 = *(void (__fastcall **)(__int64, CSurfaceDrawListBrush **))(*(_QWORD *)v12 + 40LL);
    v28 = (float)(int)v20;
    v13(v12, &v20);
    v23 = 0LL;
    v24 = 1;
    v19 = 1;
    v22 = &v21;
    v29 = (float)SHIDWORD(v20);
    v11 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)&v25, &v18, (float *)&v27, (__int64 *)&v23);
    if ( v24 )
    {
      v14 = *v22;
      *v22 = v23;
      if ( v14 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v14, 1);
    }
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, v11, 0x144u, 0LL);
      goto LABEL_24;
    }
    v20 = v21;
    v21 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)&v34, 0, &v20);
    if ( v20 )
      std::default_delete<CShape>::operator()(v15, (__int64 (__fastcall ***)(_QWORD, __int64))v20);
    v37 = 512;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&v34,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v30,
                 (struct CDrawListEntryBuilder *)v45);
    v11 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(a4, a2, v45);
      v11 = 0;
      goto LABEL_24;
    }
    v17 = 328;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, DrawList, v17, 0LL);
LABEL_24:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v25 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v25);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v34);
  if ( v21 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v21, 1);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v45);
  return (unsigned int)v11;
}
