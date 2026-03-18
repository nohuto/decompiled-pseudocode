/*
 * XREFs of ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18000B3E0
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000AC3C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801D1980 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 * Callees:
 *     ??1?$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B484 (--1-$com_ptr_t@UID2D1Geometry@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x18000B4A4 (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18006CD24 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BF920 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2600 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x18025C878 (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@.c)
 */

__int64 __fastcall CRegionShape::GetD2DGeometry(
        FastRegion::Internal::CRgnData **this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  CD3DDeviceManager *v7; // rcx
  unsigned int v8; // ebx
  struct ID2D1Geometry *v9; // rdi
  int D2DFactoryNoRef; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  struct ID2D1Geometry *v15; // rbx
  __int64 (__fastcall *v16)(struct ID2D1Geometry *, struct ID2D1GeometrySink **); // r14
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  struct ID2D1Geometry *v24; // [rsp+30h] [rbp-39h] BYREF
  struct ID2D1GeometrySink *v25; // [rsp+38h] [rbp-31h] BYREF
  struct CD2DFactory *v26; // [rsp+40h] [rbp-29h] BYREF
  int v27; // [rsp+48h] [rbp-21h]
  int v28; // [rsp+4Ch] [rbp-1Dh]
  __int64 v29; // [rsp+50h] [rbp-19h] BYREF
  char v30[8]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-9h]
  _DWORD *v32; // [rsp+68h] [rbp-1h]
  __int64 v33; // [rsp+70h] [rbp+7h]
  int v34; // [rsp+78h] [rbp+Fh]
  _DWORD v35[4]; // [rsp+88h] [rbp+1Fh] BYREF

  v29 = 0LL;
  v6 = CRegionShape::EnsureD2DGeometry((CRegionShape *)this);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, v6, 0x93u, 0LL);
    goto LABEL_6;
  }
  if ( !a2 )
  {
    v9 = this[11];
    if ( v9 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v9 + 8LL))(v9);
    goto LABEL_5;
  }
  v26 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v7, &v26);
  v8 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, D2DFactoryNoRef, 0xA7u, 0LL);
    goto LABEL_23;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**((_QWORD **)v26 + 3) + 80LL))(
          *((_QWORD *)v26 + 3),
          &v24);
  v8 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xA9u, 0LL);
    goto LABEL_23;
  }
  v15 = v24;
  v16 = *(__int64 (__fastcall **)(struct ID2D1Geometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v24 + 136LL);
  if ( v25 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v25 + 16LL))(v25);
  v17 = v16(v15, &v25);
  v8 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xAAu, 0LL);
    goto LABEL_23;
  }
  FastRegion::Internal::CRgnData::BeginIterator(this[2], (struct FastRegion::CRegion::Iterator *)v30);
  while ( (unsigned __int64)v32 < v31 )
  {
    HIDWORD(v26) = *v32;
    v28 = v32[2];
    v19 = 2 * v34;
    LODWORD(v26) = *(_DWORD *)(v33 + 4 * v19);
    v27 = *(_DWORD *)(v33 + 4 * v19 + 4);
    for ( i = 0LL; i < 4; ++i )
      *(float *)&v35[i] = (float)*(int *)((char *)&v26 + i * 4);
    AddTransformedRectToD2DRgnGeometrySink((const struct MilRectF *)v35, a2, v25);
    FastRegion::Internal::CRgnData::StepIterator(v21, (struct FastRegion::CRegion::Iterator *)v30);
  }
  v22 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v25 + 72LL))(v25);
  v8 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xB9u, 0LL);
LABEL_23:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v24);
    goto LABEL_6;
  }
  v9 = v24;
  v24 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v25);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v24);
LABEL_5:
  v29 = 0LL;
  *a3 = v9;
LABEL_6:
  wil::com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>::~com_ptr_t<ID2D1Geometry,wil::err_returncode_policy>(&v29);
  return v8;
}
