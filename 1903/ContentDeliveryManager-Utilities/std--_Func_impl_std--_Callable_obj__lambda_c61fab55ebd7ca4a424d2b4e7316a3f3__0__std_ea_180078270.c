/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_c61fab55ebd7ca4a424d2b4e7316a3f3__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180078270
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000488C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAAJPEAUHSTRING__@@W4TargetedContentTriggerState@2345@1@Z @ 0x18005E64C (-RuntimeClassInitialize@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Servi.c)
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@_N@Z @ 0x1800604C8 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Se.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall std::_Func_impl_std::_Callable_obj__lambda_c61fab55ebd7ca4a424d2b4e7316a3f3__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        __int64 a1,
        HSTRING *a2,
        int *a3,
        int *a4)
{
  HSTRING v4; // r15
  int v6; // ebp
  int v7; // r14d
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  bool v11; // zf
  int v12; // edi
  __int64 v13; // rax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h]

  v4 = *a2;
  v6 = *a4;
  v7 = *a3;
  v17 = 0LL;
  v8 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    v12 = -2147024882;
    goto LABEL_12;
  }
  v10 = v8 + 2;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 2));
  v11 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::`vftable';
  v9[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v9[7] = 1LL;
  if ( !v11 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *v9 = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::`vftable';
  v9[1] = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::`vftable'{for `IWeakReferenceSource'};
  *v10 = &Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v9[8] = 0LL;
  v12 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::RuntimeClassInitialize(
          (__int64)v9,
          v4,
          v7,
          v6);
  v13 = *v9;
  if ( v12 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD *))(v13 + 8))(v9);
    v17 = (__int64)v9;
    (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    v12 = 0;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(v13 + 16))(v9);
  }
  if ( v12 < 0 )
  {
LABEL_12:
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x166,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x1800783F6LL);
  }
  v14 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::InsertAtInternal(
          *(_QWORD *)(a1 + 8),
          0,
          v17,
          1);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x158,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  return 1;
}
