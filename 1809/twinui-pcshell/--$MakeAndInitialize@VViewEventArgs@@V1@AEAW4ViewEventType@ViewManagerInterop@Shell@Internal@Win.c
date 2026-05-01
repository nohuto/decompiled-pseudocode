/*
 * XREFs of ??$MakeAndInitialize@VViewEventArgs@@V1@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAVViewEventArgs@@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@AEAPEAUIPropertySet@Collections@Foundation@8@@Z @ 0x180028338
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180023A10 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1800281C0 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1802204F8 (-_RaiseViewEventWithPropertySet@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180088C30 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgs,ViewEventArgs,enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &,Windows::Foundation::Collections::IPropertySet * &>(
        _QWORD *a1,
        _DWORD *a2,
        __int64 *a3)
{
  _QWORD *v6; // rbx
  __int64 result; // rax
  __int64 *v8; // rdi
  volatile int *v9; // rdx
  __int64 v10; // rcx
  LPUNKNOWN v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  signed __int64 v14; // rax
  int v15; // r10d
  signed __int64 v16; // rtt
  signed __int64 v17; // rax
  unsigned int v18; // ecx
  signed __int64 v19; // rtt
  __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-20h]
  LPUNKNOWN ppunkMarshal; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v23; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v21 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v21;
  if ( !v21 )
    return 2147942414LL;
  ppunkMarshal = 0LL;
  v21[1] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v8 = v6 + 4;
  v6[4] = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
  {
    v10 = *v8;
    if ( *v8 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))ppunkMarshal->lpVtbl->QueryInterface)(
      ppunkMarshal,
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
  v6[1] = &ViewEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v6[8] = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase>::`vftable';
  v6[10] = 1LL;
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
  v15 = 0x7FFFFFFF;
  while ( v14 >= 0 )
  {
    if ( (_DWORD)v14 != 0x7FFFFFFF )
    {
      v16 = v14;
      v14 = _InterlockedCompareExchange64(v6 + 10, v14 + 1, v14);
      if ( v16 != v14 )
        continue;
    }
    goto LABEL_21;
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v14 + 16));
LABEL_21:
  *a1 = v23;
  v17 = v6[10];
  while ( v17 >= 0 )
  {
    if ( (_DWORD)v17 == v15 )
      return 0LL;
    v18 = v17 - 1;
    v19 = v17;
    v17 = _InterlockedCompareExchange64(v6 + 10, v17 - 1, v17);
    if ( v19 == v17 )
      goto LABEL_27;
  }
  v18 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v17 + 16), v9);
LABEL_27:
  result = 0LL;
  if ( !v18 )
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
