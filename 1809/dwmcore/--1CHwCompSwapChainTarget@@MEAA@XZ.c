/*
 * XREFs of ??1CHwCompSwapChainTarget@@MEAA@XZ @ 0x180200388
 * Callers:
 *     ??_ECHwCompSwapChainTarget@@MEAAPEAXI@Z @ 0x180200450 (--_ECHwCompSwapChainTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ @ 0x180201024 (-ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ.c)
 */

void __fastcall CHwCompSwapChainTarget::~CHwCompSwapChainTarget(CHwCompSwapChainTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CHwCompSwapChainTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CHwCompSwapChainTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 26) = &CHwCompSwapChainTarget::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 33) = &CHwCompSwapChainTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 34) = &CHwCompSwapChainTarget::`vftable'{for `ISwapChain'};
  CHwCompSwapChainTarget::ReleaseBufferResources(this);
  FastRegion::CRegion::FreeMemory((void **)this + 56);
  FastRegion::CRegion::FreeMemory((void **)this + 47);
  FastRegion::CRegion::FreeMemory((void **)this + 38);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 36);
  v2 = *((_QWORD *)this + 35);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 27);
  CHwSurfaceRenderTarget::~CHwSurfaceRenderTarget(this);
}
