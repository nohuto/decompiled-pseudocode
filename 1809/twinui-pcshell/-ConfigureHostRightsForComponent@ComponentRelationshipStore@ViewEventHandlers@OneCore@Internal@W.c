/*
 * XREFs of ?ConfigureHostRightsForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4HostRightFlags@Core@UI@5@0@Z @ 0x1803A4DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ConfigureHostRightsForComponent(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        int a4)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // rsi
  _QWORD *v12; // rax
  _DWORD *v13; // r10
  unsigned int v14; // ebx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = a2;
  v4 = a1 + 9;
  AcquireSRWLockShared(a1 + 9);
  v9 = std::_Hash_bytes((const unsigned __int8 *)&v17, 4uLL);
  v11 = *(_QWORD *)(v10 + 48) & v9;
  while ( 1 )
  {
    v12 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
            v10,
            &v16,
            v11);
    if ( v13 == (_DWORD *)*v12 )
      break;
    if ( v13[4] == a2 )
      goto LABEL_6;
  }
  v13 = *(_DWORD **)(v10 + 8);
LABEL_6:
  if ( v13 == a1[20].Ptr )
  {
    v14 = -2140667901;
  }
  else
  {
    v13[16] = a4 & a3 | v13[16] & ~a3;
    v14 = 0;
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v14;
}
