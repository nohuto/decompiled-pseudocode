/*
 * XREFs of ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180080FC0
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180023A10 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006FD68 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006FDEC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ??$create@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA_N$$QEAV?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@2@@Z @ 0x18023FA58 (--$create@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-.c)
 *     ??4?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAAEAV012@AEBV012@@Z @ 0x1802402F0 (--4-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 * Callees:
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18006FDA8 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rdi

  v2 = *a1;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)(v3 + 2));
        operator delete((void *)v3, (const struct std::nothrow_t *)0x100);
      }
    }
    *a1 = 0LL;
  }
}
