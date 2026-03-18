/*
 * XREFs of ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x1802203C8
 * Callers:
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18021E000 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18021F9A0 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z @ 0x180016694 (--4-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18003E3F0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x18019E4E4 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180220200 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CTransformedGeometryHelper::TransformGeometry(
        const struct CMILMatrix *a1,
        struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v3; // ebx
  int v7; // xmm0_4
  int v8; // xmm1_4
  int (__fastcall **v9)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  __m128 v10; // xmm2
  int (__fastcall *v11)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  __m128 v12; // xmm1
  CD3DDeviceManager *v13; // rcx
  __int64 v14; // rbx
  int D2DFactoryNoRef; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int D2DGeometry; // eax
  __int64 v22; // rcx
  struct ID2D1Geometry *v23; // rax
  __int64 v25; // [rsp+30h] [rbp-99h] BYREF
  struct ID2D1Geometry *v26; // [rsp+38h] [rbp-91h] BYREF
  struct ID2D1Geometry *v27; // [rsp+40h] [rbp-89h] BYREF
  struct CD2DFactory *v28; // [rsp+48h] [rbp-81h] BYREF
  __int64 v29; // [rsp+50h] [rbp-79h] BYREF
  void **v30; // [rsp+60h] [rbp-69h] BYREF
  int v31; // [rsp+68h] [rbp-61h]
  void **v32; // [rsp+70h] [rbp-59h]
  const struct CMILMatrix *v33; // [rsp+78h] [rbp-51h]
  __int128 v34; // [rsp+80h] [rbp-49h]
  __int128 v35; // [rsp+90h] [rbp-39h]
  __int64 v36; // [rsp+A0h] [rbp-29h]
  __int128 v37; // [rsp+B0h] [rbp-19h] BYREF
  unsigned __int64 v38; // [rsp+C0h] [rbp-9h]
  __int128 v39; // [rsp+C8h] [rbp-1h] BYREF
  unsigned __int64 v40; // [rsp+D8h] [rbp+Fh]
  __int128 v41; // [rsp+E0h] [rbp+17h] BYREF
  unsigned __int64 v42; // [rsp+F0h] [rbp+27h]

  v3 = 0;
  v26 = 0LL;
  if ( !a2 )
    goto LABEL_24;
  if ( !a1 )
  {
    Microsoft::WRL::ComPtr<ID2D1Geometry>::operator=((__int64 *)&v26, (__int64)a2);
LABEL_24:
    v23 = v26;
    v26 = 0LL;
    *a3 = v23;
    goto LABEL_25;
  }
  if ( CMILMatrix::Is2DAffine<1>((__int64)a1, 1) )
  {
    v27 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *(_DWORD *)a1;
    v8 = *((_DWORD *)a1 + 1);
    v9 = *(int (__fastcall ***)(struct ID2D1Geometry *, GUID *, __int64 *))a2;
    v10 = (__m128)*((unsigned int *)a1 + 13);
    v25 = 0LL;
    DWORD1(v39) = v8;
    v11 = *v9;
    HIDWORD(v39) = *((_DWORD *)a1 + 5);
    v12 = (__m128)*((unsigned int *)a1 + 12);
    LODWORD(v39) = v7;
    DWORD2(v39) = *((_DWORD *)a1 + 4);
    v41 = v39;
    v42 = _mm_unpacklo_ps(v12, v10).m128_u64[0];
    if ( v11(a2, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v25) >= 0 )
    {
      v14 = v25;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
      (*(void (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v14 + 136LL))(v14, &v27);
      v39 = _xmm;
      v40 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 144LL))(v25, &v39);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v37,
        (const struct D2D1::Matrix3x2F *)&v39,
        (const struct D2D1::Matrix3x2F *)&v41);
      v41 = v37;
      v42 = v38;
    }
    v28 = 0LL;
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v13, &v28);
    v3 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, D2DFactoryNoRef, 0x2Du);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry *, __int128 *, __int64 *))(**((_QWORD **)v28 + 3)
                                                                                             + 72LL))(
              *((_QWORD *)v28 + 3),
              v27,
              &v41,
              &v29);
      v3 = v17;
      if ( v17 >= 0 )
      {
        Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((__int64 *)&v26, v29);
        v19 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
        goto LABEL_24;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x34u);
    }
    v20 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v27);
  }
  else
  {
    v31 = 0;
    v36 = 0LL;
    v30 = &CTransformedGeometryHelper::`vftable'{for `CMILCOMBase'};
    v33 = a1;
    v32 = &CTransformedGeometryHelper::`vftable'{for `ID2D1SimplifiedGeometrySink'};
    v34 = 0LL;
    v35 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26);
    D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry((CTransformedGeometryHelper *)&v30, a2, &v26);
    v3 = D2DGeometry;
    if ( D2DGeometry >= 0 )
    {
      if ( (_QWORD)v35 )
        std::_Deallocate<16,0>((void *)v35, (v36 - v35) & 0xFFFFFFFFFFFFFFF8uLL);
      goto LABEL_24;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, D2DGeometry, 0x3Cu);
    if ( (_QWORD)v35 )
      std::_Deallocate<16,0>((void *)v35, (v36 - v35) & 0xFFFFFFFFFFFFFFF8uLL);
  }
LABEL_25:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26);
  return v3;
}
