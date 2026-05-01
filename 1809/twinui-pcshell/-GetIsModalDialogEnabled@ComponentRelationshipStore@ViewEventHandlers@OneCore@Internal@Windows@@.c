/*
 * XREFs of ?GetIsModalDialogEnabled@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAE@Z @ 0x1803A5C20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetIsModalDialogEnabled(
        RTL_SRWLOCK *this,
        int a2,
        bool *a3)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v3 = this + 9;
  AcquireSRWLockShared(this + 9);
  v7 = std::_Hash_bytes((const unsigned __int8 *)&v14, 4uLL);
  v9 = *(_QWORD *)(v8 + 48) & v7;
  while ( 1 )
  {
    v10 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
            v8,
            &v13,
            v9);
    if ( v11 == *v10 )
      break;
    if ( *(_DWORD *)(v11 + 16) == a2 )
      goto LABEL_6;
  }
  v11 = *(_QWORD *)(v8 + 8);
LABEL_6:
  if ( (PVOID)v11 == this[20].Ptr )
  {
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 2154299395LL;
  }
  else
  {
    *a3 = *(_BYTE *)(v11 + 96) != 0;
    if ( v3 )
      ReleaseSRWLockShared(v3);
    return 0LL;
  }
}
