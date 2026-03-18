/*
 * XREFs of ?TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V?$com_ptr_t@UIDCompositionDirectInkWetStrokePartner@@Uerr_returncode_policy@wil@@@wil@@_NPEA_N@Z @ 0x180177F14
 * Callers:
 *     ?Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z @ 0x180177BFC (-Draw@CWetInkManager@@QEAAJPEAVCDrawingContext@@PEAVCGenericInk@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180089DE8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingK.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAXXZ @ 0x180177B98 (--$emplace_back@$$V@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetIn.c)
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAVIRenderTargetDisplay@@AEBUDCompWetInkStrokeRenderState@@PEA_N@Z @ 0x180178110 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetS.c)
 *     TryFillRenderState @ 0x180178338 (TryFillRenderState.c)
 *     ?erase@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@@Z @ 0x18017857C (-erase@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetInkManager@@@st.c)
 */

__int64 __fastcall CWetInkManager::TryDrawWetAsSuperWet(
        CWetInkManager *this,
        CDrawingContext *a2,
        CDrawingContext *a3,
        __int64 *a4,
        unsigned __int8 a5,
        bool *a6)
{
  int (__fastcall ***v10)(_QWORD, GUID *, struct IRenderTargetDisplay **); // rcx
  struct IRenderTargetDisplay *v11; // rdi
  __int64 i; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct IDCompositionDirectInkWetStrokePartner *v16; // r8
  int v17; // eax
  unsigned int v18; // edi
  struct IRenderTargetDisplay *v19; // rcx
  __int64 v20; // rdi
  struct IRenderTargetDisplay *v22; // [rsp+30h] [rbp-59h] BYREF
  CDrawingContext *v23[2]; // [rsp+38h] [rbp-51h] BYREF
  struct IRenderTargetDisplay *v24; // [rsp+48h] [rbp-41h] BYREF
  int v25[4]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v26; // [rsp+60h] [rbp-29h]
  __int128 v27; // [rsp+70h] [rbp-19h]
  __int64 v28; // [rsp+80h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+4Fh]

  v23[0] = a2;
  *a6 = 0;
  wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService((__int64)this, (__int64)a2, (__int64)a3);
  v10 = (int (__fastcall ***)(_QWORD, GUID *, struct IRenderTargetDisplay **))*((_QWORD *)a2 + 44);
  v22 = 0LL;
  if ( (**v10)(v10, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, &v22) < 0 )
    goto LABEL_23;
  v11 = v22;
  v23[1] = a3;
  v24 = v22;
  if ( v22 )
    (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)v22 + 8LL))(v22);
  for ( i = *((_QWORD *)this + 1);
        i != *((_QWORD *)this + 2) && (*(CDrawingContext **)i != a3 || *(struct IRenderTargetDisplay **)(i + 8) != v11);
        i += 80LL )
  {
    ;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v24);
  if ( i == *((_QWORD *)this + 2) )
  {
    wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService(v14, v13, v15);
    if ( *((_QWORD *)this + 1) != *((_QWORD *)this + 2) )
      goto LABEL_23;
  }
  if ( !(unsigned __int8)TryFillRenderState(v23[0])
    || (v16 = (struct IDCompositionDirectInkWetStrokePartner *)*a4,
        HIDWORD(v28) = a5,
        v17 = CWetInkManager::TryEnqueueSuperWetScribble(
                this,
                a3,
                v16,
                v22,
                (const struct DCompWetInkStrokeRenderState *)v25,
                a6),
        v18 = v17,
        v17 >= 0) )
  {
    if ( *a6 )
    {
      if ( i == *((_QWORD *)this + 2) )
      {
        std::vector<CWetInkManager::SuperWetStroke>::emplace_back<>((__int64)this + 8);
        i = *((_QWORD *)this + 2) - 80LL;
        *(_QWORD *)i = a3;
        v19 = v22;
        v20 = *(_QWORD *)(i + 8);
        *(_QWORD *)(i + 8) = v22;
        if ( v19 )
          (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      *(_OWORD *)(i + 16) = *(_OWORD *)v25;
      *(_OWORD *)(i + 32) = v26;
      *(_OWORD *)(i + 48) = v27;
      *(_QWORD *)(i + 64) = v28;
      *(_BYTE *)(i + 72) = 1;
    }
    else if ( i != *((_QWORD *)this + 2) )
    {
      std::vector<CWetInkManager::SuperWetStroke>::erase((char *)this + 8, v23, i);
    }
LABEL_23:
    v18 = 0;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x142,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
    (const char *)(unsigned int)v17);
LABEL_24:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(a4);
  return v18;
}
