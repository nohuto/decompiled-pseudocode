/*
 * XREFs of ?GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@5@@Z @ 0x180009878
 * Callers:
 *     _lambda_363ecfaa426a2d345ca41bd67db72fc0_::operator() @ 0x18001B858 (_lambda_363ecfaa426a2d345ca41bd67db72fc0_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032BC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B190 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGam.c)
 *     ?GetView@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@345@@Z @ 0x18000BA30 (-GetView@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$DefaultEqualityP.c)
 *     ?InsertAtInternal@?$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$DefaultEqualityPredicate@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@7895@U?$VectorOptions@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@$0A@$00$0A@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@5@_N@Z @ 0x18000D49C (-InsertAtInternal@-$Vector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U-$Default.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180010834 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180042DEC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetResults(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  unsigned int v9; // ebx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  _QWORD *v14; // rbp
  int View; // eax
  __int64 v17; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v17 = -2LL;
  *a2 = 0LL;
  v4 = 0LL;
  v5 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v5;
  v8 = 0LL;
  if ( v5 )
  {
    *v5 = &Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>::`vftable';
    v5[2] = &Windows::Foundation::Collections::IIterable<_GUID>::`vftable';
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 3));
    v7[8] = 1LL;
    *v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>'};
    v7[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>'};
    v7[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>'};
    v7[3] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v4 = 0LL;
    }
    *v7 = &Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>'};
    v7[1] = &Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>'};
    v7[2] = &Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>'};
    v7[3] = &Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_DWORD *)v7 + 18) = 0;
    *((_DWORD *)v7 + 19) = 0;
    *((_DWORD *)v7 + 20) = 0;
    v7[11] = 0LL;
    *((_DWORD *)v7 + 26) = 0;
    InitializeSRWLock((PSRWLOCK)v7 + 14);
    *((_DWORD *)v7 + 30) = 0;
    *((_DWORD *)v7 + 32) = 0;
    v8 = v7;
  }
  v9 = v8 == 0LL ? 0x8007000E : 0;
  v10 = v8;
  if ( v8 )
  {
    v4 = v8;
    v10 = 0LL;
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  if ( v8 )
  {
    v13 = *(_QWORD **)(a1 + 120);
    v14 = *(_QWORD **)(a1 + 128);
    while ( v13 != v14 )
    {
      LOBYTE(v6) = 1;
      View = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::InsertAtInternal(
               v4,
               0LL,
               *v13,
               v6,
               v17);
      v9 = View;
      if ( View < 0 )
      {
        v12 = 77LL;
        goto LABEL_17;
      }
      ++v13;
    }
    View = Windows::Foundation::Collections::Internal::Vector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *,0,1,0>>::GetView(
             v4,
             a2);
    v9 = View;
    if ( View >= 0 )
      goto LABEL_19;
    v12 = 80LL;
LABEL_17:
    v11 = (unsigned int)View;
  }
  else
  {
    v11 = v9;
    v12 = 73LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
    (const char *)v11);
LABEL_19:
  if ( v4 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v4);
  return v9;
}
