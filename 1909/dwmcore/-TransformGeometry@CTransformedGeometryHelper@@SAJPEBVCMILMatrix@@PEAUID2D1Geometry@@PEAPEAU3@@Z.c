/*
 * XREFs of ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x18024CB78
 * Callers:
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18024A7D0 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18024C0F0 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z @ 0x180016844 (--4-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18008B5C0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2600 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAnimation@@@Z @ 0x1801D7A54 (-Attach@-$ComPtr@VCScrollScaleKeyframeAnimation@@@WRL@Microsoft@@QEAAXPEAVCScrollScaleKeyframeAn.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x18024C988 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 */

__int64 __fastcall CTransformedGeometryHelper::TransformGeometry(
        const struct CMILMatrix *a1,
        struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v6; // ebx
  int v7; // xmm0_4
  int (__fastcall **v8)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  __m128 v9; // xmm2
  int (__fastcall *v10)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  __m128 v11; // xmm1
  CD3DDeviceManager *v12; // rcx
  __int64 v13; // rbx
  void (__fastcall *v14)(__int64, struct ID2D1Geometry **); // rdi
  signed int D2DFactoryNoRef; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  signed int D2DGeometry; // eax
  __int64 v22; // rcx
  __int64 v24; // [rsp+30h] [rbp-99h] BYREF
  struct ID2D1Geometry *v25; // [rsp+38h] [rbp-91h] BYREF
  struct ID2D1Geometry *v26; // [rsp+40h] [rbp-89h] BYREF
  struct CD2DFactory *v27; // [rsp+48h] [rbp-81h] BYREF
  __int64 v28; // [rsp+50h] [rbp-79h] BYREF
  void **v29; // [rsp+60h] [rbp-69h] BYREF
  int v30; // [rsp+68h] [rbp-61h]
  void **v31; // [rsp+70h] [rbp-59h]
  const struct CMILMatrix *v32; // [rsp+78h] [rbp-51h]
  __int128 v33; // [rsp+80h] [rbp-49h]
  __int128 v34; // [rsp+90h] [rbp-39h]
  __int64 v35; // [rsp+A0h] [rbp-29h]
  __int128 v36; // [rsp+B0h] [rbp-19h] BYREF
  unsigned __int64 v37; // [rsp+C0h] [rbp-9h]
  __int128 v38; // [rsp+C8h] [rbp-1h] BYREF
  unsigned __int64 v39; // [rsp+D8h] [rbp+Fh]
  __int128 v40; // [rsp+E0h] [rbp+17h] BYREF
  unsigned __int64 v41; // [rsp+F0h] [rbp+27h]

  v25 = 0LL;
  v6 = 0;
  if ( !a2 )
    goto LABEL_24;
  if ( !a1 )
  {
    Microsoft::WRL::ComPtr<ID2D1Geometry>::operator=((__int64 *)&v25, (__int64)a2);
LABEL_24:
    *a3 = v25;
    v25 = 0LL;
    goto LABEL_25;
  }
  if ( CMILMatrix::Is2DAffine<1>((__int64)a1, 1) )
  {
    v26 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *(_DWORD *)a1;
    v8 = *(int (__fastcall ***)(struct ID2D1Geometry *, GUID *, __int64 *))a2;
    v9 = (__m128)*((unsigned int *)a1 + 13);
    DWORD1(v38) = *((_DWORD *)a1 + 1);
    v10 = *v8;
    HIDWORD(v38) = *((_DWORD *)a1 + 5);
    v11 = (__m128)*((unsigned int *)a1 + 12);
    LODWORD(v38) = v7;
    DWORD2(v38) = *((_DWORD *)a1 + 4);
    v24 = 0LL;
    v40 = v38;
    v41 = _mm_unpacklo_ps(v11, v9).m128_u64[0];
    if ( v10(a2, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v24) >= 0 )
    {
      v13 = v24;
      v14 = *(void (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v24 + 136LL);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26);
      v14(v13, &v26);
      v38 = _xmm;
      v39 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 144LL))(v24, &v38);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v36,
        (const struct D2D1::Matrix3x2F *)&v38,
        (const struct D2D1::Matrix3x2F *)&v40);
      v40 = v36;
      v41 = v37;
    }
    v27 = 0LL;
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v12, &v27);
    v6 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, D2DFactoryNoRef, 0x2Du, 0LL);
    }
    else
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry *, __int128 *, __int64 *))(**((_QWORD **)v27 + 3)
                                                                                             + 72LL))(
              *((_QWORD *)v27 + 3),
              v26,
              &v40,
              &v28);
      v6 = v17;
      if ( v17 >= 0 )
      {
        Microsoft::WRL::ComPtr<CScrollScaleKeyframeAnimation>::Attach((__int64 *)&v25, v28);
        v19 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26);
        goto LABEL_24;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x34u, 0LL);
    }
    v20 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v26);
  }
  else
  {
    v30 = 0;
    v29 = &CTransformedGeometryHelper::`vftable'{for `CMILCOMBase'};
    v32 = a1;
    v31 = &CTransformedGeometryHelper::`vftable'{for `ID2D1SimplifiedGeometrySink'};
    v33 = 0LL;
    v34 = 0LL;
    v35 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v25);
    D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry((CTransformedGeometryHelper *)&v29, a2, &v25);
    v6 = D2DGeometry;
    if ( D2DGeometry >= 0 )
    {
      if ( (_QWORD)v34 )
        std::_Deallocate<16,0>((void *)v34, (v35 - v34) & 0xFFFFFFFFFFFFFFF8uLL);
      goto LABEL_24;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, D2DGeometry, 0x3Cu, 0LL);
    if ( (_QWORD)v34 )
      std::_Deallocate<16,0>((void *)v34, (v35 - v34) & 0xFFFFFFFFFFFFFFF8uLL);
  }
LABEL_25:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v25);
  return v6;
}
