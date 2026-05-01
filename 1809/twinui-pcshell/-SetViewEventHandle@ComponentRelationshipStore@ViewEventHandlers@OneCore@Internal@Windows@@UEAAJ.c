/*
 * XREFs of ?SetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z @ 0x1803A7CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000EC50 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FAA4C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetViewEventHandle(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        void *a4)
{
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rsi
  _QWORD *v11; // rax
  _DWORD *v12; // r10
  unsigned int v13; // edi
  int v14; // ebx
  __int64 v15; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v19, a1 + 7);
  v8 = std::_Hash_bytes((const unsigned __int8 *)&v20, 4uLL);
  v10 = *(_QWORD *)(v9 + 48) & v8;
  while ( 1 )
  {
    v11 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
            v9,
            v17,
            v10);
    if ( v12 == (_DWORD *)*v11 )
      break;
    if ( v12[4] == a2 )
      goto LABEL_6;
  }
  v12 = *(_DWORD **)(v9 + 8);
LABEL_6:
  if ( v12 == a1[18].Ptr )
    goto LABEL_14;
  v13 = 0;
  if ( !a3 )
  {
    v15 = 18LL;
    goto LABEL_13;
  }
  v14 = a3 - 1;
  if ( !v14 )
  {
    v15 = 20LL;
    goto LABEL_13;
  }
  if ( v14 != 1 )
  {
LABEL_14:
    v13 = -2140667901;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25A,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)0x80680003LL);
    goto LABEL_15;
  }
  v15 = 22LL;
LABEL_13:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)&v12[v15],
    a4);
LABEL_15:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
  return v13;
}
