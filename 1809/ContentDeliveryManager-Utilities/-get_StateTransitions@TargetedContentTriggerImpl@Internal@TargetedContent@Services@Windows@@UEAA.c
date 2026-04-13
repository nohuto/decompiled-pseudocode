/*
 * XREFs of ?get_StateTransitions@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAU?$IVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@@Z @ 0x18005CB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_Size@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x180057AE0 (-get_Size@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?GetAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x18005D680 (-GetAt@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Wind.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C6CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::get_StateTransitions(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  bool v8; // zf
  HRESULT ApartmentType; // eax
  APTTYPE v10; // ecx
  _QWORD *v11; // rcx
  unsigned int v12; // ebx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int Size; // eax
  unsigned int v16; // r14d
  unsigned int v17; // esi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  APTTYPE pAptType; // [rsp+78h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+80h] [rbp+50h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+88h] [rbp+58h] BYREF

  *a2 = 0LL;
  v25 = 0LL;
  v4 = 0LL;
  v5 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v7 = 0LL;
  if ( v5 )
  {
    v8 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v5[4] = 1LL;
    *v5 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable';
    v5[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable'{for `IWeakReferenceSource'};
    v5[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>'};
    if ( !v8 )
    {
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
      v4 = v25;
    }
    v5[5] = 0LL;
    *v5 = &Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable';
    *((_DWORD *)v5 + 12) = 0;
    v5[1] = &Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable'{for `IWeakReferenceSource'};
    v5[7] = 0LL;
    v5[2] = &Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>'};
    ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
    v10 = pAptType;
    if ( ApartmentType < 0 )
      v10 = APTTYPE_MTA;
    pAptType = v10;
    if ( v10 == APTTYPE_MAINSTA || v10 == APTTYPE_STA )
    {
      *((_DWORD *)v6 + 18) = 1;
      *((_DWORD *)v6 + 20) = 0;
    }
    else
    {
      *((_DWORD *)v6 + 18) = 0;
      InitializeSRWLock((PSRWLOCK)v6 + 10);
    }
    *((_DWORD *)v6 + 22) = 0;
    v7 = v6;
    *((_DWORD *)v6 + 24) = 0;
  }
  v11 = v7;
  v12 = v7 == 0LL ? 0x8007000E : 0;
  if ( v7 )
  {
    v4 = v7;
    v11 = 0LL;
  }
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  if ( !v7 )
  {
    v13 = v12;
    v14 = 239LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)v13);
    goto LABEL_27;
  }
  Size = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::get_Size(
           *(_QWORD *)(a1 + 184),
           &v28);
  v12 = Size;
  if ( Size < 0 )
  {
    v13 = (unsigned int)Size;
    v14 = 241LL;
    goto LABEL_19;
  }
  v16 = v28;
  v17 = 0;
  if ( v28 )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(a1 + 184);
      v24 = 0LL;
      v19 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::GetAt(
              v18,
              v17,
              &v24);
      v12 = v19;
      if ( v19 < 0 )
        break;
      v19 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v4 + 104LL))(v4, v24);
      v12 = v19;
      if ( v19 < 0 )
      {
        v22 = 246LL;
        goto LABEL_32;
      }
      v20 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      if ( ++v17 >= v16 )
        goto LABEL_26;
    }
    v22 = 245LL;
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v19);
    v23 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  else
  {
LABEL_26:
    v12 = 0;
    *a2 = v4;
    v4 = 0LL;
  }
LABEL_27:
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  return v12;
}
