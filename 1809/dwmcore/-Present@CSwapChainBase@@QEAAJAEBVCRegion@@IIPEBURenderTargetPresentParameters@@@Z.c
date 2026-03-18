/*
 * XREFs of ?Present@CSwapChainBase@@QEAAJAEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x18007D0B0
 * Callers:
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@AEBVCRegion@@KIPEBURenderTargetPresentParameters@@@Z @ 0x18007CEDC (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@AEBVCRegion@@KIPEBURenderTargetPres.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A0628 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800EAB84 (-TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0pp @ 0x18014C198 (McTemplateU0pp.c)
 */

__int64 __fastcall CSwapChainBase::Present(
        CSwapChainBase *this,
        const struct CRegion *a2,
        unsigned int a3,
        unsigned int a4,
        const struct RenderTargetPresentParameters *a5)
{
  int v9; // edi
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*(unsigned __int8 (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 80LL))(this) )
  {
    FastRegion::CRegion::Copy((CSwapChainBase *)((char *)this + 272), a2);
    if ( CSwapChainBase::TryToOrderMetaData(this) )
      FastRegion::CRegion::Subtract((CSwapChainBase *)((char *)this + 200), a2);
  }
  v9 = (*(__int64 (__fastcall **)(CSwapChainBase *, const struct CRegion *, _QWORD, _QWORD))(*(_QWORD *)this + 304LL))(
         this,
         a2,
         a3,
         a4);
  **((_DWORD **)this + 25) = 0;
  **((_DWORD **)this + 34) = 0;
  *((_DWORD *)this + 92) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 344, 0x30u);
  if ( (*(unsigned __int8 (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 80LL))(this)
    && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0pp(v10, &EVTDESC_REMOTEAPP_METADATA_STATS, (char *)this + 344, *((unsigned int *)this + 92));
  }
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\swapchainbase.cpp",
      (const char *)(unsigned int)v9,
      (int)a5);
  return (unsigned int)v9;
}
