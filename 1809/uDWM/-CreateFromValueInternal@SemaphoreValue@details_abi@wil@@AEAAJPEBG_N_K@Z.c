/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18006FAF4
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180070988 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180070AF4 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180035E70 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003FB88 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800702C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180071ED4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details **this,
        size_t *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rcx
  WCHAR *v7; // rax
  __int64 v8; // rax
  WCHAR *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // r8
  WCHAR v13; // r9
  WCHAR *v14; // rax
  unsigned __int64 v15; // rsi
  LONG v16; // edi
  LONG v17; // ebp
  LONG v18; // r8d
  wil::details *Semaphore; // rax
  wil::details *v20; // rcx
  __int64 v21; // rcx
  WCHAR *v22; // rax
  __int64 v23; // rax
  WCHAR *v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  char *v27; // rdx
  WCHAR v28; // r8
  WCHAR *v29; // rax
  wil::details *v30; // rax
  wil::details *v31; // rcx
  int LastErrorFailHr; // eax
  unsigned int v34; // edi
  int v35; // eax
  unsigned int v36; // ebx
  DWORD dwFlags; // [rsp+20h] [rbp-258h]
  DWORD dwFlagsa; // [rsp+20h] [rbp-258h]
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected((wil::details::in1diag3 *)this);
  StringCchCopyW(Name, 0x104uLL, a2);
  v6 = 260LL;
  v7 = Name;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  v8 = 260 - v6;
  if ( v6 )
  {
    v9 = &Name[v8];
    v10 = 260 - v8;
    if ( v8 != 260 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)L"_p0" - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(WCHAR *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    *v14 = 0;
  }
  v15 = a4 >> 31;
  v16 = a4 & 0x7FFFFFFF;
  v17 = 1;
  v18 = 1;
  if ( v16 )
    v18 = v16;
  Semaphore = (wil::details *)CreateSemaphoreExW(0LL, v16, v18, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      this,
      Semaphore);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v20);
    v34 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (unsigned int)"wil",
        (const char *)(unsigned int)LastErrorFailHr,
        dwFlags);
      return v34;
    }
  }
  v21 = 260LL;
  v22 = Name;
  do
  {
    if ( !*v22 )
      break;
    ++v22;
    --v21;
  }
  while ( v21 );
  v23 = 260 - v21;
  if ( v21 )
  {
    v24 = &Name[v23];
    v25 = 260 - v23;
    if ( 260 != v23 )
    {
      v26 = 2147483646LL;
      v27 = (char *)((char *)L"h" - (char *)v24);
      do
      {
        if ( !v26 )
          break;
        v28 = *(WCHAR *)((char *)v24 + (_QWORD)v27);
        if ( !v28 )
          break;
        *v24 = v28;
        --v26;
        ++v24;
        --v25;
      }
      while ( v25 );
    }
    v29 = v24 - 1;
    if ( v25 )
      v29 = v24;
    *v29 = 0;
  }
  if ( (_DWORD)v15 )
    v17 = v15;
  v30 = (wil::details *)CreateSemaphoreExW(0LL, v15, v17, Name, 0, 0x1F0003u);
  if ( v30 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      this + 1,
      v30);
  }
  else
  {
    v35 = wil::details::GetLastErrorFailHr(v31);
    v36 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88,
        (unsigned int)"wil",
        (const char *)(unsigned int)v35,
        dwFlagsa);
      return v36;
    }
  }
  return 0LL;
}
