/*
 * XREFs of ?GetViewEventHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x1803A6260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800DEBE0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800E26D8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewEventHandle(
        RTL_SRWLOCK *a1,
        int a2,
        int a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v4; // r15
  __int64 v9; // rax
  _QWORD *v10; // r11
  __int64 v11; // r10
  _QWORD *i; // rbx
  int v13; // edi
  void *v14; // rdi
  HANDLE v15; // rbx
  HANDLE v16; // rax
  void *v17; // rdx
  const char *v18; // r9
  __int64 v19; // rdx
  unsigned int LastError; // eax
  wil::details *v21; // rcx
  unsigned int v22; // ebx
  HANDLE v23; // rax
  void *v24; // rdi
  HANDLE v25; // rbx
  HANDLE v26; // rax
  void *v27; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v29; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  HANDLE TargetHandle; // [rsp+70h] [rbp+30h] BYREF
  int v33; // [rsp+78h] [rbp+38h] BYREF

  v33 = a2;
  *a4 = 0LL;
  v4 = a1 + 7;
  AcquireSRWLockShared(a1 + 7);
  v9 = std::_Hash_bytes((const unsigned __int8 *)&v33, 4uLL);
  v11 = v10[6] & v9;
  for ( i = *(_QWORD **)(v10[3] + 16 * v11);
        i != (_QWORD *)*std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
                          (__int64)v10,
                          &TargetHandle,
                          v11);
        i = (_QWORD *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_6;
  }
  i = (_QWORD *)v10[1];
LABEL_6:
  if ( i == a1[18].Ptr )
    goto LABEL_20;
  if ( !a3 )
  {
    TargetHandle = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (wil::details **)&TargetHandle,
      0LL);
    v27 = (void *)i[9];
    CurrentProcess = GetCurrentProcess();
    v29 = GetCurrentProcess();
    if ( !DuplicateHandle(v29, v27, CurrentProcess, &TargetHandle, 0, 0, 2u) )
    {
      v19 = 553LL;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v13 = a3 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      TargetHandle = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (wil::details **)&TargetHandle,
        0LL);
      v14 = (void *)i[11];
      v15 = GetCurrentProcess();
      v16 = GetCurrentProcess();
      if ( !DuplicateHandle(v16, v14, v15, &TargetHandle, 0, 0, 2u) )
      {
        v19 = 567LL;
LABEL_12:
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)v19,
                      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                      v18);
        v21 = (wil::details *)TargetHandle;
        v22 = LastError;
        goto LABEL_14;
      }
      goto LABEL_13;
    }
LABEL_20:
    v22 = -2140667901;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23D,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)0x80680003LL);
    goto LABEL_21;
  }
  TargetHandle = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    (wil::details **)&TargetHandle,
    0LL);
  v24 = (void *)i[10];
  v25 = GetCurrentProcess();
  v26 = GetCurrentProcess();
  if ( !DuplicateHandle(v26, v24, v25, &TargetHandle, 0, 0, 2u) )
  {
    v19 = 560LL;
    goto LABEL_12;
  }
LABEL_13:
  v23 = TargetHandle;
  v21 = 0LL;
  TargetHandle = 0LL;
  v22 = 0;
  *a4 = v23;
LABEL_14:
  if ( v21 )
    wil::details::CloseHandle(v21, v17);
LABEL_21:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v22;
}
