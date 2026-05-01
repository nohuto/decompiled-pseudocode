/*
 * XREFs of ?GetComponentsForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@PEAPEAU?$IVectorView@I@Collections@Foundation@5@@Z @ 0x1803A56A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Make@V?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@AEBU?$DefaultEqualityPredicate@I@2345@Upermission@12345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@@12@AEBU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@$$QEAUpermission@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@5678@@Z @ 0x1803A4014 (--$Make@V-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Wi_ea_1803A4014.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEBA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@V12@@2@AEBUHostIdentifierKey@@@Z @ 0x1803A8318 (-equal_range@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentsForHost(
        RTL_SRWLOCK *a1,
        _DWORD *a2,
        _QWORD *a3)
{
  RTL_SRWLOCK *v3; // r15
  _QWORD *v5; // r12
  __int64 *v7; // rdi
  unsigned int v8; // esi
  _QWORD *v9; // rbx
  int v10; // r14d
  __int64 v11; // rdx
  __int64 v12; // rax
  _DWORD v14[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  _QWORD *v18; // [rsp+80h] [rbp+40h] BYREF
  _QWORD *v19; // [rsp+88h] [rbp+48h] BYREF

  v3 = a1 + 9;
  v5 = 0LL;
  *a3 = 0LL;
  v14[0] = *a2;
  v14[1] = a2[1];
  v14[2] = a2[2];
  AcquireSRWLockShared(a1 + 9);
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::equal_range(
    &a1[11],
    &v15,
    v14);
  v7 = v15;
  if ( v15 == v16 )
  {
    v8 = -2140667902;
    goto LABEL_14;
  }
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  v9 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::Details::Make<Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int> const &,Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<unsigned int>>::permission>((__int64 *)&v18);
  v8 = -2147024882;
  v10 = (v18 != 0LL) - 1;
  if ( v18 )
  {
    v8 = 0;
    v9 = v18;
    v18 = 0LL;
    v5 = v9;
    v19 = v9;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  if ( v10 == -1 )
  {
    v11 = 531LL;
  }
  else
  {
    if ( v5 )
    {
      while ( 1 )
      {
        v12 = *v9;
        if ( v7 == v16 )
          break;
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v12 + 88))(v9, 0LL, *((unsigned int *)v7 + 7));
        v7 = (__int64 *)*v7;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(v12 + 64))(v9, a3);
      goto LABEL_13;
    }
    v8 = -2147024882;
    v11 = 532LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
    (const char *)v8);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
LABEL_14:
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v8;
}
