/*
 * XREFs of ??$MakeAndInitialize@VBrokeredViewTabConverterStatics@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVBrokeredViewTabConverterStatics@@@Z @ 0x180223FB8
 * Callers:
 *     ??$CreateActivationFactory@VBrokeredViewTabConverterStatics@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180223E00 (--$CreateActivationFactory@VBrokeredViewTabConverterStatics@@@Details@WRL@Microsoft@@YAJPEAIPEBU.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1801F0D30 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIUserPresenceListenerFactory@.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1801F4EE0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerF.c)
 *     ??0?$AgileActivationFactory@UIBrokeredViewTabConverterStatics@Tabs@ComposableShell@Internal@Windows@@VNil@Details@WRL@Microsoft@@V6789@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180224048 (--0-$AgileActivationFactory@UIBrokeredViewTabConverterStatics@Tabs@ComposableShell@Internal@Wind.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BrokeredViewTabConverterStatics,BrokeredViewTabConverterStatics,>(
        _QWORD *a1)
{
  unsigned int v1; // edi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::AgileActivationFactory<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AgileActivationFactory<Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(v3);
    *v4 = &BrokeredViewTabConverterStatics::`vftable';
    v4[1] = &BrokeredViewTabConverterStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics>>'};
    v4[5] = &BrokeredViewTabConverterStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverterStatics>>'};
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IUserPresenceListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef((__int64)v4);
    *a1 = v4;
    Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release((__int64)v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
