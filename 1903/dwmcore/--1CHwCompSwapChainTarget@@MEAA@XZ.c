/*
 * XREFs of ??1CHwCompSwapChainTarget@@MEAA@XZ @ 0x18023F6F0
 * Callers:
 *     ??_ECHwCompSwapChainTarget@@MEAAPEAXI@Z @ 0x18023F7C0 (--_ECHwCompSwapChainTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800223B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ @ 0x180240364 (-ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ.c)
 */

void __fastcall CHwCompSwapChainTarget::~CHwCompSwapChainTarget(CHwCompSwapChainTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CHwCompSwapChainTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 12) = &CHwCompSwapChainTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 18) = &CHwCompSwapChainTarget::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 25) = &CHwCompSwapChainTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 26) = &CHwCompSwapChainTarget::`vftable'{for `ISwapChain'};
  CHwCompSwapChainTarget::ReleaseBufferResources(this);
  FastRegion::CRegion::FreeMemory((void **)this + 48);
  FastRegion::CRegion::FreeMemory((void **)this + 39);
  FastRegion::CRegion::FreeMemory((void **)this + 30);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 28);
  v2 = *((_QWORD *)this + 27);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 152);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
