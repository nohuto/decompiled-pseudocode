/*
 * XREFs of ?EnableRemoteSuperWet@CCompositionSurfaceBitmap@@QEAAJ_N@Z @ 0x1801C80B8
 * Callers:
 *     ?ProcessEnableRemoteSuperWet@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_ENABLEREMOTESUPERWET@@@Z @ 0x1801C3ED4 (-ProcessEnableRemoteSuperWet@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_ENABLEREMOTE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@Z @ 0x180073680 (--0-$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCRenderingEffect@@@.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique@VCRemoteSuperWetSource@@PEAVCRemoteSuperWetSharedSection@@PEAVCCompositionSurfaceBitmap@@$0A@@std@@YA?AV?$unique_ptr@VCRemoteSuperWetSource@@U?$default_delete@VCRemoteSuperWetSource@@@std@@@0@$$QEAPEAVCRemoteSuperWetSharedSection@@$$QEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x1801C7BE0 (--$make_unique@VCRemoteSuperWetSource@@PEAVCRemoteSuperWetSharedSection@@PEAVCCompositionSurface.c)
 *     ??4?$unique_ptr@VCRemoteSuperWetSource@@U?$default_delete@VCRemoteSuperWetSource@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801C7D10 (--4-$unique_ptr@VCRemoteSuperWetSource@@U-$default_delete@VCRemoteSuperWetSource@@@std@@@std@@QE.c)
 *     ?RemoveSource@CWetInkManager@@QEAAXPEAVISuperWetSource@@@Z @ 0x180251C84 (-RemoveSource@CWetInkManager@@QEAAXPEAVISuperWetSource@@@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::EnableRemoteSuperWet(CCompositionSurfaceBitmap *this, char a2)
{
  __int64 *v2; // rdi
  _DWORD *v4; // rax
  __int64 *v6; // rax
  __int64 *v7; // rbx
  struct ISuperWetSource *v8; // rdx
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD); // [rsp+20h] [rbp-18h] BYREF
  struct ISuperWetSource *v11; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void (__fastcall ***v13)(_QWORD); // [rsp+50h] [rbp+18h] BYREF
  CCompositionSurfaceBitmap *v14; // [rsp+58h] [rbp+20h] BYREF

  v2 = (__int64 *)((char *)this + 144);
  if ( a2 )
  {
    if ( !*v2 )
    {
      v4 = DefaultHeap::Alloc(0x58uLL);
      if ( v4 )
      {
        v4[2] = 0;
        *(_QWORD *)v4 = &CRemoteSuperWetSharedSection::`vftable';
        *((_QWORD *)v4 + 2) = 0LL;
        *((_QWORD *)v4 + 3) = 0LL;
        *((_QWORD *)v4 + 4) = 0LL;
        *((_QWORD *)v4 + 5) = 0LL;
        v4[12] = 0;
        *((_QWORD *)v4 + 7) = 0LL;
        *((_QWORD *)v4 + 8) = 0LL;
        *((_QWORD *)v4 + 9) = 0LL;
        v4[20] = 0;
      }
      else
      {
        v4 = 0LL;
      }
      wil::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>::com_ptr_t<CRenderingEffect,wil::err_returncode_policy>(
        &v13,
        (void (__fastcall ***)(_QWORD))v4);
      if ( !v13 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x502,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionsurfacebitmap.cpp",
          (const char *)0x8007000ELL);
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v13);
        return 2147942414LL;
      }
      v14 = this;
      v10 = v13;
      v6 = std::make_unique<CRemoteSuperWetSource,CRemoteSuperWetSharedSection *,CCompositionSurfaceBitmap *,0>(
             &v11,
             &v10,
             (__int64 *)&v14);
      std::unique_ptr<CRemoteSuperWetSource>::operator=(v2, v6);
      v7 = (__int64 *)v11;
      if ( v11 )
      {
        v8 = v11;
        *(_QWORD *)v11 = &CRemoteSuperWetSource::`vftable';
        CWetInkManager::RemoveSource(*(CWetInkManager **)(*(_QWORD *)(v7[2] + 16) + 104LL), v8);
        Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v7 + 1);
        operator delete(v7);
      }
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v13);
    }
  }
  else
  {
    v9 = *v2;
    *v2 = 0LL;
    if ( v9 )
    {
      *(_QWORD *)v9 = &CRemoteSuperWetSource::`vftable';
      CWetInkManager::RemoveSource(
        *(CWetInkManager **)(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL) + 104LL),
        (struct ISuperWetSource *)v9);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)(v9 + 8));
      operator delete((void *)v9);
    }
  }
  return 0LL;
}
