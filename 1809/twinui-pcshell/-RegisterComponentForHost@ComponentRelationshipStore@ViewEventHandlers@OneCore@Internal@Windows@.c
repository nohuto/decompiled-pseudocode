/*
 * XREFs of ?RegisterComponentForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIII@Z @ 0x1803A6E80
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x1802118DC (--1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 *     ??0ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@$$QEAU012345@@Z @ 0x1803A4B18 (--0ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@$$Q.c)
 *     ?GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1803A58D0 (-GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?IsHostNull@@YA_NAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1803A69C8 (-IsHostNull@@YA_NAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z.c)
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1803A7214 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1803A83FC (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneC.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterComponentForHost(
        RTL_SRWLOCK *this,
        unsigned int a2,
        int a3,
        int a4)
{
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // r11
  _DWORD *i; // rbx
  int v11; // eax
  unsigned int v12; // edi
  int HostIdentifierForComponent; // ebx
  __int64 v15; // rdx
  unsigned __int8 v16[8]; // [rsp+20h] [rbp-69h] BYREF
  RTL_SRWLOCK *v17[2]; // [rsp+30h] [rbp-59h] BYREF
  RTL_SRWLOCK *v18[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v19; // [rsp+50h] [rbp-39h] BYREF
  int v20; // [rsp+58h] [rbp-31h]
  int v21; // [rsp+5Ch] [rbp-2Dh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *(_DWORD *)v16 = a2;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v17, this + 9);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v18, this + 10);
  v8 = this + 27;
  v9 = (__int64)this[33].Ptr & std::_Hash_bytes(v16, 4uLL);
  for ( i = (_DWORD *)*((_QWORD *)this[30].Ptr + 2 * v9);
        i != (_DWORD *)*std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
                          (__int64)&this[27],
                          v16,
                          v9);
        i = *(_DWORD **)i )
  {
    if ( i[4] == a2 )
      goto LABEL_6;
  }
  i = this[28].Ptr;
LABEL_6:
  if ( i == this[28].Ptr )
  {
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v18);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v17);
    HostIdentifierForComponent = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponent(
                                   this,
                                   a2,
                                   0LL,
                                   (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)v17);
    if ( HostIdentifierForComponent >= 0 )
    {
      if ( !IsHostNull((const struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)v17) )
        return 0LL;
      HostIdentifierForComponent = -2147418113;
      v15 = 245LL;
    }
    else
    {
      v15 = 244LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)(unsigned int)HostIdentifierForComponent);
    return (unsigned int)HostIdentifierForComponent;
  }
  *(_DWORD *)v16 = 0;
  *(_DWORD *)&v16[4] = a3;
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::ComponentInfo(
    (__int64)&v19,
    (__int64)(i + 6));
  v19 = *(_QWORD *)v16;
  v20 = a4;
  v21 = a4;
  v11 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair(
          (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
          (struct Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *)&v19,
          a2);
  v12 = v11;
  if ( v11 >= 0 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
      v8,
      v16,
      i);
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)(unsigned int)v11);
  }
  Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::~ComponentInfo((Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *)&v19);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v18);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v17);
  return v12;
}
