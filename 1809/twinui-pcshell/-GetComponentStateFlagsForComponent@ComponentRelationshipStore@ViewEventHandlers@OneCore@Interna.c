/*
 * XREFs of ?GetComponentStateFlagsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentStateFlags@2345@@Z @ 0x1803A55E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentStateFlagsForComponent(
        RTL_SRWLOCK *this,
        int a2,
        enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentStateFlags *a3)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rsi
  _QWORD *v10; // rax
  _DWORD *v11; // r10
  unsigned int v12; // ebx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  *(_DWORD *)a3 = 0;
  v3 = this + 9;
  AcquireSRWLockShared(this + 9);
  v7 = std::_Hash_bytes((const unsigned __int8 *)&v15, 4uLL);
  v9 = *(_QWORD *)(v8 + 48) & v7;
  while ( 1 )
  {
    v10 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
            v8,
            &v14,
            v9);
    if ( v11 == (_DWORD *)*v10 )
      break;
    if ( v11[4] == a2 )
      goto LABEL_6;
  }
  v11 = *(_DWORD **)(v8 + 8);
LABEL_6:
  if ( v11 == this[20].Ptr )
  {
    v12 = -2140667901;
  }
  else
  {
    v12 = 0;
    *(_DWORD *)a3 = v11[14];
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return v12;
}
