/*
 * XREFs of ??$CreateActivationFactory@VContentDeliveryManagerConfigurationStatics@ContentManagement@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180021E80
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000488C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180022E24 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180022E24.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAD84 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<ContentManagement::ContentDeliveryManagerConfigurationStatics>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rbx
  char *v9; // rax
  char *v10; // rdi
  _QWORD *v11; // rbx
  bool v12; // zf
  int CanCastTo; // esi
  signed __int32 v14; // eax

  v4 = 0LL;
  v9 = (char *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
  {
    CanCastTo = -2147024882;
LABEL_11:
    v10 = 0LL;
    goto LABEL_12;
  }
  v11 = v9 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
  *((_QWORD *)v10 + 10) = 0LL;
  v12 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v10 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *v11 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::IContentDeliveryManagerConfiguration>>'};
  *((_QWORD *)v10 + 5) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::IContentDeliveryManagerConfiguration>>'};
  *((_DWORD *)v10 + 17) = 1;
  *((_DWORD *)v10 + 22) = 4;
  if ( !v12 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)v10 = &ContentManagement::ContentDeliveryManagerConfigurationStatics::`vftable';
  *v11 = &ContentManagement::ContentDeliveryManagerConfigurationStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::IContentDeliveryManagerConfiguration>>'};
  *((_QWORD *)v10 + 5) = &ContentManagement::ContentDeliveryManagerConfigurationStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,ContentManagement::IContentDeliveryManagerConfiguration>>'};
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::AddRef((Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics *)v10);
  v4 = v10;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                v10,
                a3,
                a4);
  if ( CanCastTo >= 0 )
  {
    if ( (*a1 & 4) == 0 )
    {
      do
        v14 = *((_DWORD *)v10 + 17);
      while ( v14 != 0x7FFFFFFF && v14 != _InterlockedCompareExchange((volatile signed __int32 *)v10 + 17, v14 + 1, v14) );
    }
    v4 = 0LL;
    *((_DWORD *)v10 + 22) = *(_DWORD *)a1;
    CanCastTo = 0;
    *((_QWORD *)v10 + 10) = a2;
    goto LABEL_11;
  }
LABEL_12:
  if ( v10 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)CanCastTo;
}
