/*
 * XREFs of ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1803A4FA0
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
 *     ??$ComponentAlreadyDisconnectedInCRS@AEAI@CUITelemetry@@SAXAEAI@Z @ 0x1803A3BFC (--$ComponentAlreadyDisconnectedInCRS@AEAI@CUITelemetry@@SAXAEAI@Z.c)
 *     ?GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1803A5970 (-GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Intern.c)
 *     ?IsHostNull@@YA_NAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1803A69C8 (-IsHostNull@@YA_NAEBUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@@Z.c)
 *     ?UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJUtagHostIdentifier@2345@I@Z @ 0x1803A7F94 (-UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windo.c)
 *     ?get@?$static_lazy@VCUITelemetry@@@details@wil@@QEAAPEAVCUITelemetry@@P6AXXZ@Z @ 0x1803A8670 (-get@-$static_lazy@VCUITelemetry@@@details@wil@@QEAAPEAVCUITelemetry@@P6AXXZ@Z.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::DisconnectComponent(
        RTL_SRWLOCK *this,
        int a2)
{
  unsigned int v3; // ebx
  const struct _TlgProvider_t *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // r14
  unsigned int v8; // esi
  _QWORD *v9; // rax
  _DWORD *v10; // r10
  int HostIdentifierForComponentNoLock; // eax
  unsigned int v12; // esi
  int v13; // eax
  unsigned int v14; // edi
  unsigned __int8 v16[4]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v17; // [rsp+38h] [rbp-31h] BYREF
  int v18; // [rsp+40h] [rbp-29h]
  RTL_SRWLOCK *v19; // [rsp+48h] [rbp-21h] BYREF
  RTL_SRWLOCK *v20[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h] BYREF
  int v22; // [rsp+68h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+7h] BYREF
  unsigned __int8 *v24; // [rsp+90h] [rbp+27h]
  __int64 v25; // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_DWORD *)v16 = a2;
  v3 = 0;
  v4 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<CUITelemetry>::get(
                                           this,
                                           lambda_118efc2810da81fa517ffdfff2ec5234_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v4 > 5u )
  {
    v25 = 4LL;
    v24 = v16;
    TlgWrite(v4, &unk_18046A145, 0LL, 0LL, 3u, &pData);
  }
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v20, this + 9);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v19, this + 10);
  v5 = std::_Hash_bytes(v16, 4uLL);
  v7 = *(_QWORD *)(v6 + 48) & v5;
  v8 = *(_DWORD *)v16;
  while ( 1 )
  {
    v9 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
           v6,
           &v17,
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
                                         (struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)&v17);
    v12 = HostIdentifierForComponentNoLock;
    if ( HostIdentifierForComponentNoLock >= 0 )
    {
      if ( IsHostNull((const struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *)&v17) )
      {
        v3 = -2140667901;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA4,
          (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
          (const char *)0x80680003LL);
      }
      else
      {
        v21 = v17;
        v22 = v18;
        v13 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::UnregisterHostComponentPair(
                this,
                &v21,
                *(unsigned int *)v16);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA8,
            (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
            (const char *)(unsigned int)v13);
          v3 = v14;
        }
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
        (const char *)(unsigned int)HostIdentifierForComponentNoLock);
      v3 = v12;
    }
  }
  else
  {
    CUITelemetry::ComponentAlreadyDisconnectedInCRS<unsigned int &>((__int64)v16);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v20);
  return v3;
}
