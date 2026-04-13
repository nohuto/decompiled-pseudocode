/*
 * XREFs of ?GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAPEAU?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@4@@Z @ 0x180073D90
 * Callers:
 *     _lambda_b59dbdfd0007f2d89c20db91cc7697cd_::operator() @ 0x180066318 (_lambda_b59dbdfd0007f2d89c20db91cc7697cd_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdentityManager@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800118B0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdent.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002E35C (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@1234@Upermission@01234@@Z @ 0x18006B2D8 (--0-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U-$Def.c)
 *     ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800720A0 (-EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV-$shared_p.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAD84 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggeredRegistration(__int64 *a1, __int64 *a2)
{
  int v4; // edi
  void *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdx
  const char *v10; // r9
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v13; // rdi
  __int64 v14; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v15[10]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v18; // [rsp+98h] [rbp+10h]
  __int64 v19; // [rsp+A0h] [rbp+18h]

  *a2 = 0LL;
  v19 = 0LL;
  v4 = 0;
  v5 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( !v5
    || (v6 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>((__int64)v5)) == 0 )
  {
    v4 = -2147024882;
  }
  if ( v4 < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = v6;
    v19 = v6;
    v6 = 0LL;
  }
  try
  {
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v7 = v19;
    }
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1B0,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v4);
      JUMPOUT(0x180073F4CLL);
    }
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::AddRef(v7);
    v15[0] = off_1800E42D0;
    v15[1] = v7;
    v15[3] = v15;
    v8 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
           &v14,
           a1);
    Windows::Services::TargetedContent::Internal::EnumerateTriggersWithStateInContainer(v8, v9, (__int64)v15);
  }
  catch ( ... )
  {
    v18 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1BC,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            v10);
    v13 = (volatile signed __int32 *)a1[1];
    if ( v13 && _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
    return v18;
  }
  *a2 = v19;
  v11 = (volatile signed __int32 *)a1[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return 0LL;
}
