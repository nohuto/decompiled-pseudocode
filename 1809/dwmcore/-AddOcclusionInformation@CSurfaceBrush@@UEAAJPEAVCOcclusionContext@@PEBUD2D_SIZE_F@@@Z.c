/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18005E8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180012D78 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x1800457F0 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800B1484 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CSurfaceBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  struct CShape *v8; // rcx
  struct CShape *v9; // rdx
  __int64 v10; // rcx
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  int v13; // eax
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // [rsp+20h] [rbp-89h]
  __int64 (__fastcall ***v20)(_QWORD, __int64); // [rsp+30h] [rbp-79h] BYREF
  __int64 v21; // [rsp+38h] [rbp-71h] BYREF
  _DWORD v22[6]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v23; // [rsp+58h] [rbp-51h]
  __int64 v24; // [rsp+60h] [rbp-49h]
  int v25; // [rsp+68h] [rbp-41h]
  int v26; // [rsp+6Ch] [rbp-3Dh]
  int v27; // [rsp+70h] [rbp-39h]
  int v28; // [rsp+74h] [rbp-35h]
  int v29; // [rsp+78h] [rbp-31h]
  int v30; // [rsp+7Ch] [rbp-2Dh]
  int v31; // [rsp+80h] [rbp-29h]
  _DWORD v32[10]; // [rsp+90h] [rbp-19h] BYREF
  struct CShape **v33; // [rsp+B8h] [rbp+Fh] BYREF
  struct CShape *v34; // [rsp+C0h] [rbp+17h] BYREF
  char v35; // [rsp+C8h] [rbp+1Fh]

  v4 = 0;
  v5 = *((_QWORD *)this + 11);
  if ( !v5
    || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 15LL)
    || (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 192LL))(this)
    || !a3
    || a3->width <= 0.0
    || a3->height <= 0.0 )
  {
    return v4;
  }
  v20 = 0LL;
  v34 = 0LL;
  v33 = (struct CShape **)&v20;
  v35 = 1;
  v4 = CSurfaceBrush::ComputeLayout(this, a3, 0, (struct CContent::LayoutData *)v32, &v34);
  if ( v35 )
  {
    v8 = v34;
    v9 = *v33;
    *v33 = v34;
    if ( v9 )
      std::default_delete<CShape>::operator()((__int64)v8, (__int64 (__fastcall ***)(_QWORD, __int64))v9);
  }
  if ( v4 == -2003304441 )
  {
    v4 = 0;
    goto LABEL_32;
  }
  if ( (v4 & 0x80000000) != 0 )
  {
    v19 = 279;
    v15 = v4;
    goto LABEL_31;
  }
  if ( !(unsigned __int8)(*v20)[5](v20, (__int64)&v21) )
    goto LABEL_18;
  if ( (_DWORD)v21 != 1 )
    goto LABEL_18;
  v10 = *((_QWORD *)this + 12);
  if ( !v10 )
    goto LABEL_18;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 104LL))(v10) )
  {
    v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64), struct CShape ***, _QWORD))(*v20)[4])(
            v20,
            &v33,
            0LL);
    v4 = v13;
    if ( v13 < 0 )
    {
      v19 = 290;
    }
    else
    {
      v13 = COcclusionContext::CollectRectangleForOcclusion(a2, &v33, v14, 0LL);
      v4 = v13;
      if ( v13 >= 0 )
        goto LABEL_16;
      v19 = 292;
    }
    v15 = v13;
LABEL_31:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, v15, v19);
LABEL_32:
    if ( v20 )
      std::default_delete<CShape>::operator()((__int64)v8, v20);
    return v4;
  }
LABEL_16:
  v11 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 12);
  v21 = 0LL;
  if ( (**v11)(v11, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v21) >= 0 )
  {
    if ( *((_BYTE *)a2 + 817) )
    {
      v16 = *((_QWORD *)a2 + 101);
      v31 = 0;
      v22[2] = 0;
      v22[3] = 0;
      v23 = 0LL;
      v24 = 0LL;
      v26 = 0;
      v29 = 0;
      v22[0] = v32[0];
      v22[1] = v32[1];
      v22[4] = v32[2];
      v22[5] = v32[3];
      v27 = v32[4];
      v28 = v32[5];
      v25 = 1065353216;
      v30 = 1065353216;
      v17 = COcclusionContext::CheckAndRecordOverlayCandidate((__int64)a2, v16, v21, (__int64)v22, (__int64)v20, 0);
      v4 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x130u);
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v21);
        goto LABEL_32;
      }
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v21);
LABEL_18:
  if ( v20 )
    (**v20)(v20, 1LL);
  return v4;
}
