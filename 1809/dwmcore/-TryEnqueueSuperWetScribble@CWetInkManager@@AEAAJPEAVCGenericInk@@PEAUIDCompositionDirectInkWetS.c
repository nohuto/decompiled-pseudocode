/*
 * XREFs of ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAVIRenderTargetDisplay@@AEBUDCompWetInkStrokeRenderState@@PEA_N@Z @ 0x180178110
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V?$com_ptr_t@UIDCompositionDirectInkWetStrokePartner@@Uerr_returncode_policy@wil@@@wil@@_NPEA_N@Z @ 0x180177F14 (-TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V-$com_ptr_t@UI.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180089DE8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingK.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     ?Create@CSuperWetInkScribble@@SAJPEAUIDCompositionDirectInkWetStrokePartner@@AEBUDCompWetInkStrokeRenderState@@PEAVCGenericInkTipPointSource@@IPEAUIDCompositionDirectInkFactoryPartner@@PEAPEAV1@@Z @ 0x180183E24 (-Create@CSuperWetInkScribble@@SAJPEAUIDCompositionDirectInkWetStrokePartner@@AEBUDCompWetInkStro.c)
 */

__int64 __fastcall CWetInkManager::TryEnqueueSuperWetScribble(
        CWetInkManager *this,
        struct CGenericInk *a2,
        struct IDCompositionDirectInkWetStrokePartner *a3,
        struct IRenderTargetDisplay *a4,
        const struct DCompWetInkStrokeRenderState *a5,
        bool *a6)
{
  bool *v6; // r15
  struct CGenericInkTipPointSource *v11; // r12
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  unsigned int v19; // r9d
  int v20; // eax
  CMILRefCountBase *v21; // rbx
  __int64 v22; // rdx
  struct IDCompositionDirectInkFactoryPartner *v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  CMILRefCountBase *v25; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v6 = a6;
  *a6 = 0;
  wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService((__int64)this, (__int64)a2, (__int64)a3);
  v11 = (struct CGenericInkTipPointSource *)*((_QWORD *)a2 + 27);
  if ( v11 && *(_QWORD *)(*(_QWORD *)this + 368LL) - *((_QWORD *)a2 + 8) <= 5uLL )
  {
    v12 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *, bool **))(*(_QWORD *)a4 + 536LL))(a4, &a6);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x105,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
        (const char *)(unsigned int)v12);
      return v13;
    }
    if ( (_BYTE)a6 )
    {
      v15 = *(_QWORD *)a4;
      v24 = 0LL;
      v16 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *, __int64 *))(v15 + 40))(a4, &v24);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10D,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
          (const char *)(unsigned int)v16);
LABEL_23:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v24);
        return v17;
      }
      v23 = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64, struct IDCompositionDirectInkFactoryPartner **))(*(_QWORD *)v24 + 168LL))(
              v24,
              &v23);
      v17 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x110,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
          (const char *)(unsigned int)v18);
LABEL_22:
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v23);
        goto LABEL_23;
      }
      if ( !(*(unsigned int (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *))(*(_QWORD *)v23 + 40LL))(
              v23,
              a3,
              a5) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 3LL);
        v17 = 0;
        goto LABEL_22;
      }
      v19 = *((_DWORD *)a2 + 52);
      v25 = 0LL;
      v20 = CSuperWetInkScribble::Create(a3, a5, v11, v19, v23, &v25);
      v21 = v25;
      v17 = v20;
      if ( v20 >= 0 )
      {
        v20 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *, CMILRefCountBase *))(*(_QWORD *)a4 + 544LL))(
                a4,
                v25);
        v17 = v20;
        if ( v20 >= 0 )
        {
          *v6 = 1;
          v17 = 0;
LABEL_20:
          if ( v21 )
            CMILRefCountBase::Release(v21);
          goto LABEL_22;
        }
        v22 = 287LL;
      }
      else
      {
        v22 = 285LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
        (const char *)(unsigned int)v20);
      goto LABEL_20;
    }
  }
  return 0LL;
}
