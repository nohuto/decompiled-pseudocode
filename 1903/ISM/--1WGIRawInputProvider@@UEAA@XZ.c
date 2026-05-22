/*
 * XREFs of ??1WGIRawInputProvider@@UEAA@XZ @ 0x1800A734C
 * Callers:
 *     ??_EWGIRawInputProvider@@UEAAPEAXI@Z @ 0x1800A74B0 (--_EWGIRawInputProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x1800271BC (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?Close@?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x1800A5EA4 (-Close@-$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A7B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800A7B40.c)
 *     ?StopRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800A7E8C (-StopRawGameControllerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 *     ?StopUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ @ 0x1800A7FF4 (-StopUserManagerWatcher@WGIRawInputProvider@@AEAAJXZ.c)
 */

void __fastcall WGIRawInputProvider::~WGIRawInputProvider(WGIRawInputProvider *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &WGIRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &WGIRawInputProvider::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &WGIRawInputProvider::`vftable'{for `RefCountedObject'};
  WGIRawInputProvider::StopUserManagerWatcher(this);
  WGIRawInputProvider::StopRawGameControllerWatcher(this);
  v7 = 0;
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_LISTENER_INFO, 0LL, &v7, 4LL, 0LL);
  WGIRawInputProvider::SetInputFocusProcess(this, 0, 0);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 3);
  v2 = (__int64 *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 13);
    if ( v2 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v4);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = (__int64 *)*((_QWORD *)this + 12);
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 14) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 7) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::Close((__int64)this + 56);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)this + 5);
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
