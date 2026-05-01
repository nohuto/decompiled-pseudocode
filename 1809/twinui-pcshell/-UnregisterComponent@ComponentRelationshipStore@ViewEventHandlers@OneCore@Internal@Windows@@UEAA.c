/*
 * XREFs of ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1803A7DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 *     ??$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1803A4288 (--$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@A.c)
 *     ??$UnregisteredComponentFromCRSFreeList@AEAI@CUITelemetry@@SAXAEAI@Z @ 0x1803A4364 (--$UnregisteredComponentFromCRSFreeList@AEAI@CUITelemetry@@SAXAEAI@Z.c)
 *     ?GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1803A5970 (-GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Intern.c)
 *     ?IsHostNull@@YA_NAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1803A69C8 (-IsHostNull@@YA_NAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEBA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@V12@@2@AEBUHostIdentifierKey@@@Z @ 0x1803A8318 (-equal_range@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@2@@Z @ 0x1803A83FC (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneC.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1803A8488 (-erase@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEvent_ea_1803A8488.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@Z @ 0x1803A8524 (-erase@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 *     ?get@?$static_lazy@VCUITelemetry@@@details@wil@@QEAAPEAVCUITelemetry@@P6AXXZ@Z @ 0x1803A8670 (-get@-$static_lazy@VCUITelemetry@@@details@wil@@QEAAPEAVCUITelemetry@@P6AXXZ@Z.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::UnregisterComponent(
        RTL_SRWLOCK *this,
        int a2)
{
  unsigned int v3; // ebx
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // r14
  int v8; // esi
  _QWORD *v9; // rax
  _DWORD *v10; // r10
  int HostIdentifierForComponentNoLock; // eax
  int v12; // esi
  __int64 *i; // r8
  unsigned __int8 v15[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v16; // [rsp+38h] [rbp-31h] BYREF
  int v17; // [rsp+40h] [rbp-29h]
  RTL_SRWLOCK *v18; // [rsp+48h] [rbp-21h] BYREF
  RTL_SRWLOCK *v19; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v20[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v21; // [rsp+68h] [rbp-1h] BYREF
  int v22; // [rsp+70h] [rbp+7h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 *v24; // [rsp+98h] [rbp+2Fh]
  __int64 v25; // [rsp+A0h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_DWORD *)v15 = a2;
  v3 = 0;
  v4 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<CUITelemetry>::get(
                                           this,
                                           lambda_118efc2810da81fa517ffdfff2ec5234_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v4 > 5u )
  {
    v25 = 4LL;
    v24 = v15;
    TlgWrite(v4, &unk_18046A17E, 0LL, 0LL, 3u, &pData);
  }
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v19, this + 9);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v18, this + 10);
  v5 = std::_Hash_bytes(v15, 4uLL);
  v7 = *(_QWORD *)(v6 + 48) & v5;
  v8 = *(_DWORD *)v15;
  while ( 1 )
  {
    v9 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
           v6,
           &v16,
           v7);
    if ( v10 == (_DWORD *)*v9 )
      break;
    if ( v10[4] == v8 )
      goto LABEL_8;
  }
  v10 = *(_DWORD **)(v6 + 8);
LABEL_8:
  if ( v10 == this[28].Ptr )
  {
    HostIdentifierForComponentNoLock = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponentNoLock(
                                         (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)this,
                                         v8,
                                         0LL,
                                         (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)&v21);
    v12 = HostIdentifierForComponentNoLock;
    if ( HostIdentifierForComponentNoLock >= 0 )
    {
      if ( !IsHostNull((const struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)&v21) )
      {
        v16 = v21;
        v17 = v22;
        std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::equal_range(
          &this[11],
          v20,
          &v16);
        for ( i = (__int64 *)v20[0]; i != (__int64 *)v20[1]; i = (__int64 *)*i )
        {
          if ( *((_DWORD *)i + 7) == *(_DWORD *)v15 )
          {
            std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
              &this[11],
              &v16,
              i);
            std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
              &this[19],
              v15);
            CUITelemetry::UnregisteredComponentFromCRS<unsigned int &,enum Windows::Internal::OneCore::ViewEventHandlers::CRSIdType &,unsigned int &,unsigned int &>(
              (__int64)v15,
              (int *)&v21,
              (__int64)&v21 + 4,
              (__int64)&v22);
            break;
          }
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)(unsigned int)HostIdentifierForComponentNoLock);
      v3 = v12;
    }
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::erase(
      v6,
      &v16,
      v10);
    CUITelemetry::UnregisteredComponentFromCRSFreeList<unsigned int &>((__int64)v15);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
  return v3;
}
