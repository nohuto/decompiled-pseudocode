/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A43E0
 * Callers:
 *     ?InternalRelease@?$ComPtr@V?$SimpleVectorIterator@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@V?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A3C1C (-InternalRelease@-$ComPtr@V-$SimpleVectorIterator@PEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?Release@?$SimpleVectorIterator@PEAUIChainLink@Chaining@Shell@Internal@Windows@@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAKXZ @ 0x1800A4630 (-Release@-$SimpleVectorIterator@PEAUIChainLink@Chaining@Shell@Internal@Windows@@V-$Vector@PEAUIC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@I@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800B17D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@I@Col.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@ApplicationModel@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800B17E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppInfo@Applicat.c)
 *     ??$MakeAndInitialize@VTrayInfoTipAppInfo@SystemTray@@UIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Z @ 0x18033B9E0 (--$MakeAndInitialize@VTrayInfoTipAppInfo@SystemTray@@UIAppInfo@ApplicationModel@Windows@@AEAPEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)a1 + 7);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 7, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_6;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_6:
  if ( !v2 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*a1 + 80))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
