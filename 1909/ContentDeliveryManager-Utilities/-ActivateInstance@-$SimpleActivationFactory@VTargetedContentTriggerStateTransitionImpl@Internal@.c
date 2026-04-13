/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180022740
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000488C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAD84 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl,0>::ActivateInstance(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  _QWORD *v6; // rdi
  bool v7; // zf

  *a2 = 0LL;
  v3 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    v6 = v3 + 2;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v3 + 2));
    v7 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::`vftable';
    v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v4[7] = 1LL;
    if ( !v7 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *v4 = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::`vftable';
    v4[1] = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::`vftable'{for `IWeakReferenceSource'};
    *v6 = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v4[8] = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v4)(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
