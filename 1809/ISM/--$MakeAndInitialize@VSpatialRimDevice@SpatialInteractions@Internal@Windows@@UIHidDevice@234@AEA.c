/*
 * XREFs of ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x180064404
 * Callers:
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180062694 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18004F154 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevice@@PEAX@Z @ 0x1800699D4 (-RuntimeClassInitialize@SpatialRimDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAVHIDDevic.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialRimDevice,Windows::Internal::SpatialInteractions::IHidDevice,HIDDevice * &,void * &>(
        _QWORD *a1,
        struct HIDDevice **a2,
        void **a3)
{
  char *v6; // rax
  char *v7; // rbx
  int v8; // edi
  _QWORD *v9; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx

  *a1 = 0LL;
  v6 = (char *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v9 = v6 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 8));
    v10 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::SpatialInteractions::IHidDevice,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::SpatialInteractions::IHidDevice'};
    *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::SpatialInteractions::IHidDevice,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_DWORD *)v7 + 11) = 1;
    if ( v10 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v10 + 8LL))(v10);
    *(_QWORD *)v7 = &Windows::Internal::SpatialInteractions::SpatialRimDevice::`vftable'{for `Windows::Internal::SpatialInteractions::IHidDevice'};
    *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::SpatialInteractions::IHidDevice,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_DWORD *)v7 + 13) = 0;
    *((_WORD *)v7 + 28) = 0;
    *((_QWORD *)v7 + 8) = 0LL;
    memset_0(v7 + 72, 0, 0x40uLL);
    *((_QWORD *)v7 + 17) = 0LL;
    *((_QWORD *)v7 + 19) = 0LL;
    *((_QWORD *)v7 + 18) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
    *((_QWORD *)v7 + 21) = 0LL;
    *((_QWORD *)v7 + 20) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
    v8 = Windows::Internal::SpatialInteractions::SpatialRimDevice::RuntimeClassInitialize(
           (Windows::Internal::SpatialInteractions::SpatialRimDevice *)v7,
           *a2,
           *a3);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(char *, GUID *, _QWORD *))v7)(
             v7,
             &GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f,
             a1);
    if ( v7 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
