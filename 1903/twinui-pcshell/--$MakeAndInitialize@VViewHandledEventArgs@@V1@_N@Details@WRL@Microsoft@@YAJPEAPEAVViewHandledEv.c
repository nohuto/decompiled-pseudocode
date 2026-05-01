/*
 * XREFs of ??$MakeAndInitialize@VViewHandledEventArgs@@V1@_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEventArgs@@$$QEA_N@Z @ 0x180295024
 * Callers:
 *     ?OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180298C30 (-OperationRequestComplete@ViewWrapperBase@@UEAAXW4ViewOperationRequestType@@W4AppRequestHandledR.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@Z @ 0x180142B78 (-Attach@-$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVC.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802105BC (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewHandledEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180295F9C (--0-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIViewHandledEventArgs@ViewManagerInte.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewHandledEventArgs,ViewHandledEventArgs,bool>(
        _QWORD *a1,
        _BYTE *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  volatile signed __int64 *v7; // rcx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  volatile signed __int64 *v11; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+50h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v5;
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs,Microsoft::WRL::FtmBase>(v5);
    v11 = 0LL;
    *v6 = &ViewHandledEventArgs::`vftable';
    v6[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IViewHandledEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    v6[2] = &ViewHandledEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::ChainLinkEventArgs>::Attach((__int64 *)&v11, (__int64)v6);
    v7 = v11;
    *((_BYTE *)v11 + 64) = *a2;
    v8 = *((_QWORD *)v7 + 7);
    while ( v8 >= 0 )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange64(v7 + 7, v8 + 1, v8);
      if ( v9 == v8 )
        goto LABEL_8;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v8 + 16));
LABEL_8:
    *a1 = v11;
    Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
