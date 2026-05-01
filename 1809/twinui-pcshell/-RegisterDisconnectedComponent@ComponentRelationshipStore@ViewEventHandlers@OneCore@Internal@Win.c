/*
 * XREFs of ?RegisterDisconnectedComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IPEAUIInspectable@@@Z @ 0x1803A7040
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
 *     ??$RegisteringDisconnectedComponent@AEAIAEAI@CUITelemetry@@SAXAEAI0@Z @ 0x1803A41EC (--$RegisteringDisconnectedComponent@AEAIAEAI@CUITelemetry@@SAXAEAI0@Z.c)
 *     ??$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1803A47CC (--$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 *     ??0ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@PEAUIInspectable@@AEBUtagHostIdentifier@2345@KW4CRSComponentRelationshipFlags@2345@@Z @ 0x1803A4B9C (--0ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@PEA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterDisconnectedComponent(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  int *v6; // r15
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rdi
  int v10; // esi
  _QWORD *v11; // rax
  _DWORD *v12; // r10
  __int64 result; // rax
  __int64 v14; // rax
  const char *v15; // r9
  unsigned __int8 v16[8]; // [rsp+30h] [rbp-B8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+38h] [rbp-B0h] BYREF
  RTL_SRWLOCK *v18; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-A0h] BYREF
  int v20; // [rsp+50h] [rbp-98h]
  __int64 v21; // [rsp+58h] [rbp-90h]
  _BYTE v22[80]; // [rsp+60h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v21 = -2LL;
  *(_DWORD *)v16 = a3;
  v6 = (int *)(a2 + 8);
  CUITelemetry::RegisteringDisconnectedComponent<unsigned int &,unsigned int &>(a2 + 8, (__int64)v16);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v17, a1 + 9);
  v7 = std::_Hash_bytes(v16, 4uLL);
  v9 = v7 & *(_QWORD *)(v8 + 48);
  v10 = *(_DWORD *)v16;
  while ( 1 )
  {
    v11 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
            v8,
            &v18,
            v9);
    if ( v12 == (_DWORD *)*v11 )
      break;
    if ( v12[4] == v10 )
      goto LABEL_6;
  }
  v12 = *(_DWORD **)(v8 + 8);
LABEL_6:
  if ( v12 == a1[20].Ptr )
  {
    v19 = 0LL;
    v20 = 0;
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v18, a1 + 10);
    v14 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::ComponentInfo(
            (__int64)v22,
            a4,
            (__int64)&v19,
            *v6);
    try
    {
      std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::emplace<unsigned int &,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>(
        (__int64)&a1[27],
        (__int64)&v19,
        v16,
        v14);
      Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::~ComponentInfo((Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *)v22);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x10F,
                             (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                             v15);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x103,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)0x80680005LL);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
    return 2154299397LL;
  }
  return result;
}
