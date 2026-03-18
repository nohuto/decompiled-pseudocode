/*
 * XREFs of ?TryRegisterSuperWetForDraw@CWetInkManager@@QEAAJPEAVISuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180250860
 * Callers:
 *     ?Draw@CRemoteSuperWetSource@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801B1100 (-Draw@CRemoteSuperWetSource@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180213960 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802147AC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingK.c)
 *     ??$emplace_back@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAAEAUSuperWetStroke@CWetInkManager@@XZ @ 0x1802503BC (--$emplace_back@$$V@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetIn.c)
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180250550 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 *     TryFillRenderState @ 0x1802506D8 (TryFillRenderState.c)
 *     ?erase@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@@Z @ 0x180250AEC (-erase@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetInkManager@@@st.c)
 */

__int64 __fastcall CWetInkManager::TryRegisterSuperWetForDraw(
        CWetInkManager *this,
        struct ISuperWetSource *a2,
        struct CDrawingContext *a3,
        unsigned __int8 a4,
        bool *a5)
{
  bool *v5; // r13
  unsigned int v6; // edi
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // rsi
  __int64 *v13; // r14
  __int64 i; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int v23; // eax
  int v24; // esi
  __int64 v26[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v27; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v28[3]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v29; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v5 = a5;
  v6 = 0;
  *a5 = 0;
  wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService((__int64)this, (__int64)a2, (__int64)a3);
  v11 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a3 + 44);
  v26[0] = 0LL;
  if ( (**v11)(v11, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, v26) < 0
    || !TryFillRenderState(a3, v26[0], a4, (__int64)v28) )
  {
    goto LABEL_22;
  }
  v12 = v26[0];
  v13 = (__int64 *)((char *)this + 8);
  v26[1] = (__int64)a2;
  v27 = v26[0];
  if ( v26[0] )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26[0] + 8LL))(v26[0]);
  for ( i = *v13;
        i != *((_QWORD *)this + 2) && (*(struct ISuperWetSource **)i != a2 || *(_QWORD *)(i + 8) != v12);
        i += 80LL )
  {
    ;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v27);
  if ( i == *((_QWORD *)this + 2) )
  {
    wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService(v16, v15, v17);
    if ( *v13 == *((_QWORD *)this + 2) )
    {
      std::vector<CWetInkManager::SuperWetStroke>::emplace_back<>((__int64 *)this + 1);
      v18 = *((_QWORD *)this + 2);
      *(_QWORD *)(v18 - 80) = a2;
      v19 = v26[0];
      v20 = *(_QWORD *)(v18 - 72);
      *(_QWORD *)(v18 - 72) = v26[0];
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      i = *((_QWORD *)this + 2) - 80LL;
      goto LABEL_17;
    }
LABEL_22:
    v24 = 0;
    goto LABEL_23;
  }
LABEL_17:
  v21 = v28[1];
  *(_OWORD *)(i + 16) = v28[0];
  v22 = v28[2];
  *(_OWORD *)(i + 32) = v21;
  *(_QWORD *)&v21 = v29;
  *(_OWORD *)(i + 48) = v22;
  *(_QWORD *)(i + 64) = v21;
  v23 = CWetInkManager::TryEnqueueSuperWetScribble(this, (const struct CWetInkManager::SuperWetStroke *)i, (bool *)&a5);
  v24 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF5,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
      (const char *)(unsigned int)v23);
LABEL_23:
    v6 = v24;
    goto LABEL_24;
  }
  if ( (_BYTE)a5 )
  {
    *(_BYTE *)(i + 72) = 1;
    *v5 = 1;
  }
  else
  {
    std::vector<CWetInkManager::SuperWetStroke>::erase((char *)this + 8, &a5, i);
  }
LABEL_24:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v26);
  return v6;
}
