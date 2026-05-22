/*
 * XREFs of ??1DragNDropProcessorLegacy@@EEAA@XZ @ 0x1800FE3AC
 * Callers:
 *     ??_GDragNDropProcessorLegacy@@EEAAPEAXI@Z @ 0x1800FE4B4 (--_GDragNDropProcessorLegacy@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180026E8C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027954 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?clear@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXXZ @ 0x1800564BC (-clear@-$list@U-$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V-$allocator@U-$pair@$$CBKUPo.c)
 *     ?clear@?$list@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@2@@std@@QEAAXXZ @ 0x18006DC48 (-clear@-$list@U-$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKUVe.c)
 */

void __fastcall DragNDropProcessorLegacy::~DragNDropProcessorLegacy(DragNDropProcessorLegacy *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &DragNDropProcessorLegacy::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &DragNDropProcessorLegacy::`vftable'{for `RefCountedObject'};
  v2 = (void *)*((_QWORD *)this + 21);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 23) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
  }
  std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::clear((__int64)this + 152);
  std::_Deallocate<16,0>(*((void **)this + 19), (const struct std::nothrow_t *)0x20);
  v3 = (void *)*((_QWORD *)this + 13);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 15) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  std::list<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>::clear((__int64)this + 88);
  std::_Deallocate<16,0>(*((void **)this + 11), (const struct std::nothrow_t *)0x30);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 7);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (_QWORD *)this + 5,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
