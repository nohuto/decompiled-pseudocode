/*
 * XREFs of ?CreateScribble@CRemoteSuperWetSource@@UEAAJPEAVID2DContext@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801B27F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800C1634 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CRemoteSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCRemoteSuperWetSharedSection@@I@Z @ 0x1801B26C0 (--0CRemoteSuperWetInkScribble@@QEAA@PEAUIDCompositionDirectInkSuperWetStrokePartner@@PEAVCRemote.c)
 *     ?LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1801BC724 (-LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV-$vector@EV-$allocator@E@std@@@std@@.c)
 */

__int64 __fastcall CRemoteSuperWetSource::CreateScribble(
        CRemoteSuperWetSource *this,
        struct ID2DContext *a2,
        const struct DCompWetInkStrokeRenderState *a3,
        struct CComputeScribble **a4)
{
  __int64 v4; // rax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // xmm1_4
  int v14; // eax
  CRemoteSuperWetInkScribble *v15; // rax
  CRemoteSuperWetInkScribble *v16; // rbx
  struct IDCompositionDirectInkSuperWetStrokePartner *v18; // [rsp+30h] [rbp-29h] BYREF
  __int64 v19; // [rsp+38h] [rbp-21h] BYREF
  CRemoteSuperWetInkScribble *v20; // [rsp+40h] [rbp-19h] BYREF
  __int128 v21; // [rsp+48h] [rbp-11h] BYREF
  __int64 v22; // [rsp+58h] [rbp-1h]
  __int128 v23; // [rsp+60h] [rbp+7h] BYREF
  int v24; // [rsp+70h] [rbp+17h]
  int v25; // [rsp+74h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = *(_QWORD *)a2;
  v19 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64 *))(v4 + 168))(a2, &v19);
  v9 = v8;
  if ( v8 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 88LL) + 224LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 88LL));
    v10 = *((_QWORD *)this + 1);
    v22 = 0LL;
    v21 = 0LL;
    v9 = CRemoteSuperWetSharedSection::LookupPerFrameData(v10, v11, &v21);
    if ( v9 >= 0 )
    {
      v18 = 0LL;
      v12 = v21;
      v13 = *((_DWORD *)a3 + 5);
      v23 = _xmm;
      v24 = *((_DWORD *)a3 + 4);
      v25 = v13;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *, struct IDCompositionDirectInkSuperWetStrokePartner **))(*(_QWORD *)v19 + 56LL))(
              v19,
              v21 + 12,
              *(unsigned int *)(v21 + 8),
              &v23,
              &v18);
      v9 = v14;
      if ( v14 >= 0 )
      {
        v15 = (CRemoteSuperWetInkScribble *)DefaultHeap::Alloc(0x28uLL);
        if ( v15 )
          v16 = CRemoteSuperWetInkScribble::CRemoteSuperWetInkScribble(
                  v15,
                  v18,
                  *((struct CRemoteSuperWetSharedSection **)this + 1),
                  *(_DWORD *)(v12 + 4));
        else
          v16 = 0LL;
        v20 = v16;
        if ( v16 )
        {
          (**(void (__fastcall ***)(CRemoteSuperWetInkScribble *))v16)(v16);
          v20 = 0LL;
          *a4 = v16;
          v9 = 0;
        }
        else
        {
          v9 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x34,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\remotesuperwetsource.cpp",
            (const char *)0x8007000ELL);
        }
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v20);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2B,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\remotesuperwetsource.cpp",
          (const char *)(unsigned int)v14);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v18);
    }
    std::vector<unsigned char>::_Tidy((__int64 *)&v21);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\remotesuperwetsource.cpp",
      (const char *)(unsigned int)v8);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v19);
  return (unsigned int)v9;
}
