/*
 * XREFs of ?SetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIUEventRegistrationToken@@@Z @ 0x1803A7B60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::SetTokenClientWindowReadyForPresentationChangedForComponent(
        RTL_SRWLOCK *this,
        int a2,
        struct EventRegistrationToken a3)
{
  RTL_SRWLOCK *v3; // r14
  __int64 v7; // r11
  __int64 v8; // r12
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // r10
  unsigned int v12; // ebx
  RTL_SRWLOCK *v13; // r11
  __int64 v14; // rbp
  PVOID *v15; // rax
  struct EventRegistrationToken *Ptr; // r10
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+58h] [rbp+10h] BYREF

  v19 = a2;
  v3 = this + 9;
  AcquireSRWLockShared(this + 9);
  v8 = std::_Hash_bytes((const unsigned __int8 *)&v19, 4uLL);
  v9 = v8 & *(_QWORD *)(v7 + 48);
  while ( 1 )
  {
    v10 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
            v7,
            &v18,
            v9);
    if ( v11 == *v10 )
      break;
    if ( *(_DWORD *)(v11 + 16) == a2 )
      goto LABEL_6;
  }
  v11 = *(_QWORD *)(v7 + 8);
LABEL_6:
  if ( (PVOID)v11 == this[20].Ptr )
  {
    AcquireSRWLockShared(this + 10);
    v13 = this + 27;
    v14 = v8 & (__int64)this[33].Ptr;
    while ( 1 )
    {
      v15 = (PVOID *)std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
                       (__int64)v13,
                       &v18,
                       v14);
      if ( Ptr == *v15 )
        break;
      if ( LODWORD(Ptr[2].value) == a2 )
        goto LABEL_13;
    }
    Ptr = (struct EventRegistrationToken *)v13[1].Ptr;
LABEL_13:
    if ( Ptr == this[28].Ptr )
    {
      v12 = -2140667901;
    }
    else
    {
      Ptr[6].value = a3.value;
      v12 = 0;
    }
    if ( this != (RTL_SRWLOCK *)-80LL )
      ReleaseSRWLockShared(this + 10);
  }
  else
  {
    *(struct EventRegistrationToken *)(v11 + 48) = a3;
    v12 = 0;
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v12;
}
