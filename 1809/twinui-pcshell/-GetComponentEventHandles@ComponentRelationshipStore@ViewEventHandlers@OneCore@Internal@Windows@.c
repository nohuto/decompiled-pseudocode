/*
 * XREFs of ?GetComponentEventHandles@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIKPEAPEAX@Z @ 0x1803A5360
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

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetComponentEventHandles(
        RTL_SRWLOCK *this,
        int a2,
        int a3,
        void **a4)
{
  RTL_SRWLOCK *v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // r11
  __int64 v11; // r10
  _DWORD *i; // rbx
  void *v13; // rsi
  HANDLE CurrentProcess; // rdi
  HANDLE v15; // rax
  const char *v16; // r9
  void *v17; // rdx
  unsigned int v18; // ebx
  void *v19; // rsi
  HANDLE v20; // rdi
  HANDLE v21; // rax
  const char *v22; // r9
  void *v23; // rdi
  HANDLE v24; // rbx
  HANDLE v25; // rax
  const char *v26; // r9
  unsigned int LastError; // eax
  wil::details *v28; // rcx
  HANDLE v29; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v30; // [rsp+48h] [rbp-18h] BYREF
  HANDLE TargetHandle[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v33; // [rsp+98h] [rbp+38h] BYREF

  v33 = a2;
  if ( a3 != 3 )
    return 2147942487LL;
  v8 = this + 7;
  *a4 = 0LL;
  a4[1] = 0LL;
  a4[2] = 0LL;
  AcquireSRWLockShared(this + 7);
  v9 = std::_Hash_bytes((const unsigned __int8 *)&v33, 4uLL);
  v11 = v10[6] & v9;
  for ( i = *(_DWORD **)(v10[3] + 16 * v11);
        i != (_DWORD *)*std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
                          (__int64)v10,
                          TargetHandle,
                          v11);
        i = *(_DWORD **)i )
  {
    if ( i[4] == a2 )
      goto LABEL_8;
  }
  i = (_DWORD *)v10[1];
LABEL_8:
  if ( i == this[18].Ptr )
  {
    v18 = -2140667901;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x285,
      (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
      (const char *)0x80680003LL);
  }
  else
  {
    TargetHandle[0] = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (wil::details **)TargetHandle,
      0LL);
    v13 = (void *)*((_QWORD *)i + 9);
    CurrentProcess = GetCurrentProcess();
    v15 = GetCurrentProcess();
    if ( DuplicateHandle(v15, v13, CurrentProcess, TargetHandle, 0, 0, 2u) )
    {
      v30 = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (wil::details **)&v30,
        0LL);
      v19 = (void *)*((_QWORD *)i + 10);
      v20 = GetCurrentProcess();
      v21 = GetCurrentProcess();
      if ( DuplicateHandle(v21, v19, v20, &v30, 0, 0, 2u) )
      {
        v29 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
          (wil::details **)&v29,
          0LL);
        v23 = (void *)*((_QWORD *)i + 11);
        v24 = GetCurrentProcess();
        v25 = GetCurrentProcess();
        if ( DuplicateHandle(v25, v23, v24, &v29, 0, 0, 2u) )
        {
          v28 = 0LL;
          a4[1] = v30;
          v18 = 0;
          *a4 = TargetHandle[0];
          a4[2] = v29;
          v30 = 0LL;
          TargetHandle[0] = 0LL;
          v29 = 0LL;
        }
        else
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x27D,
                        (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                        v26);
          v28 = (wil::details *)v29;
          v18 = LastError;
        }
        if ( v28 )
          wil::details::CloseHandle(v28, v17);
      }
      else
      {
        v18 = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x27A,
                (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                v22);
      }
      if ( v30 )
        wil::details::CloseHandle((wil::details *)v30, v17);
    }
    else
    {
      v18 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x277,
              (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
              v16);
    }
    if ( TargetHandle[0] )
      wil::details::CloseHandle((wil::details *)TargetHandle[0], v17);
  }
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return v18;
}
