/*
 * XREFs of ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@@Z @ 0x180214290
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1802140B4 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStroke.c)
 */

char __fastcall CGenericInk::IsSuperWetCompatible(
        CGenericInk *this,
        struct ID2DContext *a2,
        const struct DCompWetInkStrokeRenderState *a3)
{
  char v3; // bl
  int DirectInkWetStroke; // eax
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v12; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 20) && *(_QWORD *)(*((_QWORD *)this - 6) + 384LL) - *((_QWORD *)this + 1) <= 5uLL )
  {
    v12 = 0LL;
    DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke((CGenericInk *)((char *)this - 64), a2, &v12);
    if ( DirectInkWetStroke < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16D,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)DirectInkWetStroke);
      v3 = 1;
LABEL_9:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v12);
      return v3;
    }
    v7 = *(_QWORD *)a2;
    v11 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64 *))(v7 + 168))(a2, &v11);
    if ( v8 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(__int64, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *))(*(_QWORD *)v11 + 40LL))(
              v11,
              v12,
              a3) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, 3LL);
        goto LABEL_8;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x170,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v8);
    }
    v3 = 1;
LABEL_8:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v11);
    goto LABEL_9;
  }
  return 0;
}
