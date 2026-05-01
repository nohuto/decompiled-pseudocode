/*
 * XREFs of ??$MakeAndInitialize@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x180219708
 * Callers:
 *     ??$CreateActivationFactory@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1802194B0 (--$CreateActivationFactory@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x18020ECCC (--0UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18020FE40 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIUserPresenceListenerFactory@.c)
 *     ?Attach@?$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x18020FEA4 (-Attach@-$ComPtr@VAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180213FD0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerF.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory,Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory,>(
        __int64 *a1)
{
  unsigned int v1; // edi
  Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory *v3; // rax
  Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  *a1 = 0LL;
  v3 = (Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory *)operator new(
                                                                                        0x60uLL,
                                                                                        (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory::UserPresenceListenerFactory(v3);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListenerFactory>::Attach(
      &v8,
      (__int64)v4);
    v6 = v8;
    if ( v8 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
        v8,
        v5);
    *a1 = v6;
    if ( v6 )
      Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        v6,
        v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
