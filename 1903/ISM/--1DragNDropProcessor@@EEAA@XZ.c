/*
 * XREFs of ??1DragNDropProcessor@@EEAA@XZ @ 0x18006A7A8
 * Callers:
 *     ??_EDragNDropProcessor@@EEAAPEAXI@Z @ 0x18006AAC0 (--_EDragNDropProcessor@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$list@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@2@@std@@QEAAXXZ @ 0x18005675C (-clear@-$list@U-$pair@$$CBKUPointerState@InputInfoValidator@@@std@@V-$allocator@U-$pair@$$CBKUPo.c)
 *     ?clear@?$list@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@@2@@std@@QEAAXXZ @ 0x18006DE88 (-clear@-$list@U-$pair@$$CBKUVelocityData@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKUVe.c)
 *     ?clear@?$list@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXXZ @ 0x18006DED8 (-clear@-$list@U-$pair@$$CBKV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V-$allocator@U-.c)
 *     ?clear@?$list@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@2@@std@@QEAAXXZ @ 0x18006DF5C (-clear@-$list@U-$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@V-$allocator@U-$pair@$$CBKVMes.c)
 */

void __fastcall DragNDropProcessor::~DragNDropProcessor(DragNDropProcessor *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  *(_QWORD *)this = &DragNDropProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &DragNDropProcessor::`vftable'{for `RefCountedObject'};
  v2 = (void *)*((_QWORD *)this + 42);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 44) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 42) = 0LL;
    *((_QWORD *)this + 43) = 0LL;
    *((_QWORD *)this + 44) = 0LL;
  }
  std::list<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>::clear((char *)this + 320);
  std::_Deallocate<16,0>(*((void **)this + 40), (const struct std::nothrow_t *)0x20);
  v3 = (void *)*((_QWORD *)this + 34);
  if ( v3 )
  {
    std::_Deallocate<16,0>(
      v3,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 36) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
  }
  std::list<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>::clear((char *)this + 256);
  std::_Deallocate<16,0>(*((void **)this + 32), (const struct std::nothrow_t *)0x30);
  v4 = *((_QWORD *)this + 29);
  if ( v4 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = (void *)*((_QWORD *)this + 24);
  if ( v5 )
  {
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 26) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  std::list<std::pair<unsigned long const,InputInfoValidator::PointerState>>::clear((__int64)this + 176);
  std::_Deallocate<16,0>(*((void **)this + 22), (const struct std::nothrow_t *)0x20);
  v6 = (void *)*((_QWORD *)this + 16);
  if ( v6 )
  {
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 18) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
  }
  std::list<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>::clear((char *)this + 112);
  std::_Deallocate<16,0>(*((void **)this + 14), (const struct std::nothrow_t *)0x50);
  v7 = (void *)*((_QWORD *)this + 8);
  if ( v7 )
  {
    std::_Deallocate<16,0>(
      v7,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 10) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  std::list<std::pair<unsigned long const,DragNDropProcessor::VelocityData>>::clear((char *)this + 48);
  std::_Deallocate<16,0>(*((void **)this + 6), (const struct std::nothrow_t *)0x30);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
