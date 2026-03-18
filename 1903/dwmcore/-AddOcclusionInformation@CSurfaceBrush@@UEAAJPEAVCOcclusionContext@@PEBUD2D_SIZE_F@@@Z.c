/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180051B90
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800144B0 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18002E650 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?GetNonVisualSurfaceImageSourceNoRef@CSurfaceBrush@@AEBAPEAVIImageSource@@XZ @ 0x180051D98 (-GetNonVisualSurfaceImageSourceNoRef@CSurfaceBrush@@AEBAPEAVIImageSource@@XZ.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x180066F20 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CSurfaceBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v4; // rcx
  unsigned int v7; // ebx
  struct IImageSource *NonVisualSurfaceImageSourceNoRef; // rsi
  struct CShape *v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rdx
  int v11; // eax
  __int64 v12; // r8
  int (__fastcall **v13)(struct IImageSource *, GUID *, int *); // rax
  int v15; // r9d
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // [rsp+20h] [rbp-99h]
  void *v20; // [rsp+30h] [rbp-89h] BYREF
  int v21[2]; // [rsp+38h] [rbp-81h] BYREF
  int v22[6]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v23; // [rsp+58h] [rbp-61h]
  __int64 v24; // [rsp+60h] [rbp-59h]
  int v25; // [rsp+68h] [rbp-51h]
  int v26; // [rsp+6Ch] [rbp-4Dh]
  int v27; // [rsp+70h] [rbp-49h]
  int v28; // [rsp+74h] [rbp-45h]
  int v29; // [rsp+78h] [rbp-41h]
  __int64 v30; // [rsp+7Ch] [rbp-3Dh]
  _DWORD v31[10]; // [rsp+90h] [rbp-29h] BYREF
  void **v32; // [rsp+B8h] [rbp-1h] BYREF
  struct CShape *v33; // [rsp+C0h] [rbp+7h] BYREF
  char v34; // [rsp+C8h] [rbp+Fh]

  v4 = *((_QWORD *)this + 12);
  v7 = 0;
  if ( !v4 )
    return v7;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 194LL) )
    return v7;
  NonVisualSurfaceImageSourceNoRef = CSurfaceBrush::GetNonVisualSurfaceImageSourceNoRef(this);
  if ( (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)this + 232LL))(this)
    || !a3
    || a3->width <= 0.0
    || a3->height <= 0.0 )
  {
    return v7;
  }
  v20 = 0LL;
  v32 = &v20;
  v33 = 0LL;
  v34 = 1;
  v7 = CSurfaceBrush::ComputeLayout(this, a3, 0, (struct CContent::LayoutData *)v31, &v33);
  if ( v34 )
  {
    v9 = v33;
    v10 = (__int64 (__fastcall ***)(_QWORD, __int64))*v32;
    *v32 = v33;
    if ( v10 )
      std::default_delete<CShape>::operator()((__int64)v9, v10);
  }
  if ( v7 == -2003304441 )
  {
    v7 = 0;
    goto LABEL_33;
  }
  if ( (v7 & 0x80000000) != 0 )
  {
    v15 = v7;
    v19 = 291;
    goto LABEL_32;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(void *, int *))(*(_QWORD *)v20 + 40LL))(v20, v21)
    || v21[0] != 1
    || !NonVisualSurfaceImageSourceNoRef )
  {
    goto LABEL_21;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IImageSource *))(*(_QWORD *)NonVisualSurfaceImageSourceNoRef + 104LL))(NonVisualSurfaceImageSourceNoRef) )
  {
    v11 = (*(__int64 (__fastcall **)(void *, void ***, _QWORD))(*(_QWORD *)v20 + 32LL))(v20, &v32, 0LL);
    v7 = v11;
    if ( v11 < 0 )
    {
      v19 = 302;
    }
    else
    {
      v11 = COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (float *)&v32, v12, 0LL);
      v7 = v11;
      if ( v11 >= 0 )
        goto LABEL_18;
      v19 = 304;
    }
    v15 = v11;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, v15, v19, 0LL);
LABEL_33:
    if ( v20 )
      std::default_delete<CShape>::operator()((__int64)v9, (__int64 (__fastcall ***)(_QWORD, __int64))v20);
    return v7;
  }
LABEL_18:
  v13 = *(int (__fastcall ***)(struct IImageSource *, GUID *, int *))NonVisualSurfaceImageSourceNoRef;
  *(_QWORD *)v21 = 0LL;
  if ( (*v13)(NonVisualSurfaceImageSourceNoRef, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, v21) >= 0 )
  {
    if ( *((_BYTE *)a2 + 825) )
    {
      v16 = *((_QWORD *)a2 + 102);
      v22[2] = 0;
      v22[3] = 0;
      v26 = 0;
      v29 = 0;
      v22[0] = v31[0];
      v22[1] = v31[1];
      v22[4] = v31[2];
      v22[5] = v31[3];
      v27 = v31[4];
      v28 = v31[5];
      v30 = 1065353216LL;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 1065353216;
      v17 = COcclusionContext::CheckAndRecordOverlayCandidate((__int64)a2, v16, *(__int64 *)v21, (__int64)v22, v20, 0);
      v7 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x13Du, 0LL);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)v21);
        goto LABEL_33;
      }
    }
  }
  if ( *(_QWORD *)v21 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v21 + 16LL))(*(_QWORD *)v21);
LABEL_21:
  if ( v20 )
    (**(void (__fastcall ***)(void *, __int64))v20)(v20, 1LL);
  return v7;
}
