/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgs@@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x18000DC3C
 * Callers:
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18000DAD0 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180036E90 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18027592C (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgs,ViewEventArgs,enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &,Windows::Foundation::Collections::IPropertySet * &>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3)
{
  _QWORD *v6; // rbx
  __int64 *v7; // rsi
  LPUNKNOWN v8; // rdi
  __int64 v9; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  LPUNKNOWN v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  signed __int64 v16; // rax
  signed __int32 v17; // ecx
  signed __int64 v18; // rtt
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-30h]
  LPUNKNOWN ppunkMarshal; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v23; // [rsp+78h] [rbp+20h]

  *a1 = 0LL;
  v21 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v21;
  if ( !v21 )
    return 2147942414LL;
  ppunkMarshal = 0LL;
  v21[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v7 = v6 + 4;
  v6[4] = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v8 = ppunkMarshal;
    v9 = *v7;
    QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
    if ( *v7 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
      v8,
      &GUID_00000003_0000_0000_c000_000000000046,
      v6 + 4);
  }
  v11 = ppunkMarshal;
  if ( ppunkMarshal )
  {
    ppunkMarshal = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
  }
  v6[7] = 0LL;
  *v6 = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  v6[10] = 1LL;
  v6[1] = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v6[8] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  v23 = v6;
  *v6 = &ViewEventArgs::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  v6[1] = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v6[8] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable';
  v12 = *a3;
  *((_DWORD *)v6 + 12) = *a2;
  v13 = v6[7];
  if ( v13 != v12 )
  {
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = v6[7];
    }
    v20 = v13;
    v6[7] = v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
  v14 = v6[10];
  while ( v14 >= 0 )
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange64(v6 + 10, v14 + 1, v14);
    if ( v15 == v14 )
      goto LABEL_14;
  }
  _InterlockedAdd((volatile signed __int32 *)(2 * v14 + 16), 1u);
LABEL_14:
  *a1 = v23;
  v16 = v6[10];
  while ( v16 >= 0 )
  {
    v17 = v16 - 1;
    v18 = v16;
    v16 = _InterlockedCompareExchange64(v6 + 10, v16 - 1, v16);
    if ( v18 == v16 )
      goto LABEL_17;
  }
  v17 = _InterlockedDecrement((volatile signed __int32 *)(2 * v16 + 16));
LABEL_17:
  result = 0LL;
  if ( !v17 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*v23 + 64LL))(v23, 1LL);
    result = 0LL;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      return 0LL;
    }
  }
  return result;
}
