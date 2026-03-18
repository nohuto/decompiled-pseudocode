/*
 * XREFs of ?CreateScribble@CGenericInk@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1802137B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@I@Z @ 0x1801B0E44 (--0CSuperWetInkScribbleBase@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@I@Z.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1802140B4 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStroke.c)
 */

__int64 __fastcall CGenericInk::CreateScribble(
        CGenericInk *this,
        struct ID2DContext *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  int DirectInkWetStroke; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  CSuperWetInkScribbleBase *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  struct IDCompositionDirectInkWetStrokePartner *v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IDCompositionDirectInkSuperWetStrokePartner *v21; // [rsp+70h] [rbp+20h] BYREF

  v18 = 0LL;
  DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke((CGenericInk *)((char *)this - 64), a2, &v18);
  v9 = DirectInkWetStroke;
  if ( DirectInkWetStroke >= 0 )
  {
    v10 = *(_QWORD *)a2;
    v17 = 0LL;
    v11 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64 *))(v10 + 168))(a2, &v17);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v21 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, struct IDCompositionDirectInkWetStrokePartner *, const struct DCompWetInkStrokeRenderState *, struct IDCompositionDirectInkSuperWetStrokePartner **))(*(_QWORD *)v17 + 48LL))(
              v17,
              v18,
              a3,
              &v21);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v13 = (CSuperWetInkScribbleBase *)operator new(0x28uLL);
        v14 = (__int64)v13;
        if ( v13 )
        {
          v15 = *((_QWORD *)this + 20);
          CSuperWetInkScribbleBase::CSuperWetInkScribbleBase(v13, v21, *((_DWORD *)this + 38));
          *(_QWORD *)v14 = &CSuperWetInkScribble::`vftable';
          *(_QWORD *)(v14 + 32) = v15;
          if ( v15 )
            _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        }
        else
        {
          v14 = 0LL;
        }
        v19 = v14;
        if ( v14 )
        {
          (**(void (__fastcall ***)(__int64))v14)(v14);
          v19 = 0LL;
          *a4 = (struct CComputeScribble *)v14;
          v9 = 0;
        }
        else
        {
          v9 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x191,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
            (const char *)0x8007000ELL);
        }
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v19);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x188,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
          (const char *)(unsigned int)v12);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v21);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x185,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
        (const char *)(unsigned int)v11);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x182,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
      (const char *)(unsigned int)DirectInkWetStroke);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v18);
  return v9;
}
