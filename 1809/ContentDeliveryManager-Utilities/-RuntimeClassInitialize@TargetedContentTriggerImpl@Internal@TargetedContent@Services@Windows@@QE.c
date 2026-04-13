/*
 * XREFs of ?RuntimeClassInitialize@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@QEAAJXZ @ 0x18005BF08
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180022110 (-ActivateInstance@-$SimpleActivationFactory@VTargetedContentTriggerImpl@Internal@TargetedContent.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180022FF0.c)
 *     ??0?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@1234@Upermission@01234@@Z @ 0x18005EEAC (--0-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::RuntimeClassInitialize(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this)
{
  volatile signed __int64 *v2; // rcx
  __int64 v3; // rbx
  void *v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int64 *)*((_QWORD *)this + 23);
  if ( v2 )
  {
    *((_QWORD *)this + 23) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v2);
  }
  *((_QWORD *)this + 23) = 0LL;
  v3 = 0LL;
  v4 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
    v3 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>(v4);
  if ( !v3 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)0x8007000ELL);
    JUMPOUT(0x18005BFAALL);
  }
  *((_QWORD *)this + 23) = v3;
  return 0LL;
}
