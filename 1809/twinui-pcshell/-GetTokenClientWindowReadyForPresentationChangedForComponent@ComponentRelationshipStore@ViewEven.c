/*
 * XREFs of ?GetTokenClientWindowReadyForPresentationChangedForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAUEventRegistrationToken@@@Z @ 0x1803A6050
 * Callers:
 *     <none>
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetTokenClientWindowReadyForPresentationChangedForComponent(
        RTL_SRWLOCK *this,
        int a2,
        struct EventRegistrationToken *a3)
{
  RTL_SRWLOCK *v3; // rbp
  __int64 v7; // r11
  __int64 v8; // r12
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r10
  unsigned int v12; // ebx
  RTL_SRWLOCK *v13; // rdi
  RTL_SRWLOCK *v14; // r11
  __int64 v15; // rsi
  PVOID *v16; // rax
  PVOID Ptr; // r10
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  v3 = this + 9;
  a3->value = 0LL;
  AcquireSRWLockShared(this + 9);
  v8 = std::_Hash_bytes((const unsigned __int8 *)&v20, 4uLL);
  v9 = v8 & *(_QWORD *)(v7 + 48);
  while ( 1 )
  {
    v10 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
            v7,
            &v19,
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
    v13 = this + 10;
    AcquireSRWLockShared(this + 10);
    v14 = this + 27;
    v15 = v8 & (__int64)this[33].Ptr;
    while ( 1 )
    {
      v16 = (PVOID *)std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
                       (__int64)v14,
                       &v19,
                       v15);
      if ( Ptr == *v16 )
        break;
      if ( *((_DWORD *)Ptr + 4) == a2 )
        goto LABEL_13;
    }
    Ptr = v14[1].Ptr;
LABEL_13:
    if ( Ptr == this[28].Ptr )
    {
      v12 = -2140667901;
    }
    else
    {
      v12 = 0;
      a3->value = *(_QWORD *)((__int64)Ptr + 48);
    }
    if ( v13 )
      ReleaseSRWLockShared(v13);
  }
  else
  {
    v12 = 0;
    a3->value = *(__int64 *)(v11 + 48);
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v12;
}
