/*
 * XREFs of ??$MakeAndInitialize@VClientWindowReadyForPresentationEventArgs@@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEB_N@Details@WRL@Microsoft@@YAJPEAPEAUIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEB_N@Z @ 0x18023EDD0
 * Callers:
 *     _lambda_090b60ecbc000c40c228d38e9a1199bb_::operator() @ 0x180240328 (_lambda_090b60ecbc000c40c228d38e9a1199bb_--operator().c)
 * Callees:
 *     ?Attach@?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@QEAAXPEAVClientWindowReadyForPresentationEventArgs@@@Z @ 0x18003B10C (-Attach@-$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@QEAAXPEAVClientWind.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18023FDA8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationChan.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ClientWindowReadyForPresentationEventArgs,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,bool const &>(
        _QWORD *a1,
        _BYTE *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>(v4);
    v10 = 0LL;
    *v5 = &ClientWindowReadyForPresentationEventArgs::`vftable';
    v5[1] = &ClientWindowReadyForPresentationEventArgs::`vftable'{for `IWeakReferenceSource'};
    v5[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    Microsoft::WRL::ComPtr<ClientWindowReadyForPresentationEventArgs>::Attach(&v10, (__int64)v5);
    v7 = v10;
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v10;
    *(_BYTE *)(v10 + 64) = *a2;
    v6 = (**v8)(v8, &GUID_593ed2db_a1ee_4997_b822_f3fb111c012e, a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
