/*
 * XREFs of ?get_StateTransitions@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAU?$IVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@5@@Z @ 0x18005E0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_Size@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x180059140 (-get_Size@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?GetAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x18005EBC0 (-GetAt@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Wind.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::get_StateTransitions(
        __int64 a1,
        _QWORD *a2)
{
  int v4; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  bool v8; // zf
  HRESULT ApartmentType; // eax
  APTTYPE v10; // ecx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int Size; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  APTTYPE pAptType; // [rsp+78h] [rbp+48h] BYREF
  unsigned int v26; // [rsp+80h] [rbp+50h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+88h] [rbp+58h] BYREF

  *a2 = 0LL;
  v23 = 0LL;
  v4 = 0;
  v5 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v7 = 0LL;
  if ( !v5 )
    goto LABEL_11;
  v8 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  v5[4] = 1LL;
  *v5 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable';
  v5[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable'{for `IWeakReferenceSource'};
  v5[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>'};
  if ( !v8 )
    _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
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
  if ( !v6 )
LABEL_11:
    v4 = -2147024882;
  if ( v4 >= 0 )
  {
    v23 = v7;
    v7 = 0LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  if ( v4 < 0 )
  {
    v11 = (unsigned int)v4;
    v12 = 239LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)v11);
    goto LABEL_35;
  }
  Size = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::get_Size(
           *(_QWORD *)(a1 + 184),
           &v26);
  v4 = Size;
  if ( Size < 0 )
  {
    v11 = (unsigned int)Size;
    v12 = 241LL;
    goto LABEL_20;
  }
  v14 = 0;
  if ( !v26 )
  {
LABEL_27:
    v18 = 0LL;
    *a2 = v23;
    v4 = 0;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v15 = *(_QWORD *)(a1 + 184);
    v22 = 0LL;
    v16 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::GetAt(
            v15,
            v14,
            &v22);
    v4 = v16;
    if ( v16 < 0 )
      break;
    v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v23 + 104LL))(v23, v22);
    v4 = v16;
    if ( v16 < 0 )
    {
      v20 = 246LL;
      goto LABEL_33;
    }
    v17 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( ++v14 >= v26 )
      goto LABEL_27;
  }
  v20 = 245LL;
LABEL_33:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
    (const char *)(unsigned int)v16);
  v21 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
LABEL_35:
  v18 = v23;
LABEL_28:
  if ( v18 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  }
  return (unsigned int)v4;
}
