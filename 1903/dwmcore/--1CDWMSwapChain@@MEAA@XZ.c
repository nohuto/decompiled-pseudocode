/*
 * XREFs of ??1CDWMSwapChain@@MEAA@XZ @ 0x1800D9700
 * Callers:
 *     ??_GCDWMSwapChain@@MEAAPEAXI@Z @ 0x1800D96C0 (--_GCDWMSwapChain@@MEAAPEAXI@Z.c)
 *     ??_GCDWMSwapChainDDA@@UEAAPEAXI@Z @ 0x180164C90 (--_GCDWMSwapChainDDA@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1800D983C (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMSwapChain::~CDWMSwapChain(CDWMSwapChain *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &CDWMSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 55);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 54);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 53);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 59);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (void *)*((_QWORD *)this + 58);
  if ( v6 )
    CloseHandle(v6);
  CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(this);
  CSwapChainBase::~CSwapChainBase(this);
}
