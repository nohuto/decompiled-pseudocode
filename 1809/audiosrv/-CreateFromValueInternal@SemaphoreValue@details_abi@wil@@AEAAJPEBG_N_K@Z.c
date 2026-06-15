/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18004A220
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180049D14 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800B0D28 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180009BA0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18004A450 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800AD64C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800AE3F8 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details_abi::SemaphoreValue *this,
        char *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rcx
  WCHAR *v7; // rax
  WCHAR *v8; // rdx
  __int64 v9; // rax
  char *v10; // r9
  WCHAR v11; // r8
  LONG v12; // r14d
  unsigned __int64 v13; // rbp
  LONG v14; // ebx
  LONG v15; // r8d
  HANDLE Semaphore; // rax
  wil::details *v17; // rcx
  __int64 v18; // rcx
  WCHAR *v19; // rax
  WCHAR *v20; // rax
  char *v21; // r8
  WCHAR v22; // dx
  HANDLE v23; // rax
  wil::details *v24; // rcx
  __int64 v26; // rdi
  int LastErrorFailHr; // eax
  unsigned int v28; // ebx
  int v29; // eax
  unsigned int v30; // ebx
  DWORD dwFlags; // [rsp+20h] [rbp-258h]
  DWORD dwFlagsa; // [rsp+20h] [rbp-258h]
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(this);
  StringCchCopyW((char *)Name, 260LL, a2);
  v6 = 260LL;
  v7 = Name;
  while ( *v7 )
  {
    ++v7;
    if ( !--v6 )
    {
      v26 = 2147483646LL;
      goto LABEL_12;
    }
  }
  v26 = 2147483646LL;
  v8 = &Name[260 - v6];
  v9 = 2147483646LL;
  v10 = (char *)((char *)L"_p0" - (char *)v8);
  while ( v9 )
  {
    v11 = *(WCHAR *)((char *)v8 + (_QWORD)v10);
    if ( !v11 )
      break;
    *v8 = v11;
    --v9;
    ++v8;
    if ( !--v6 )
    {
      --v8;
      break;
    }
  }
  *v8 = 0;
LABEL_12:
  v12 = 1;
  v13 = a4 >> 31;
  v14 = a4 & 0x7FFFFFFF;
  if ( v14 )
    v15 = v14;
  else
    v15 = 1;
  Semaphore = CreateSemaphoreExW(0LL, v14, v15, Name, 0, 0x1F0003u);
  if ( Semaphore )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      this,
      Semaphore);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v17);
    v28 = LastErrorFailHr;
    if ( LastErrorFailHr < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84,
        (unsigned int)"wil",
        (const char *)(unsigned int)LastErrorFailHr,
        dwFlags);
      return v28;
    }
  }
  v18 = 260LL;
  v19 = Name;
  while ( *v19 )
  {
    ++v19;
    if ( !--v18 )
      goto LABEL_26;
  }
  v20 = &Name[260 - v18];
  v21 = (char *)((char *)L"h" - (char *)v20);
  while ( v26 )
  {
    v22 = *(WCHAR *)((char *)v20 + (_QWORD)v21);
    if ( !v22 )
      break;
    *v20 = v22;
    --v26;
    ++v20;
    if ( !--v18 )
    {
      --v20;
      break;
    }
  }
  *v20 = 0;
LABEL_26:
  if ( (_DWORD)v13 )
    v12 = v13;
  v23 = CreateSemaphoreExW(0LL, v13, v12, Name, 0, 0x1F0003u);
  if ( v23 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (char *)this + 8,
      v23);
    return 0LL;
  }
  v29 = wil::details::GetLastErrorFailHr(v24);
  v30 = v29;
  if ( v29 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x88,
    (unsigned int)"wil",
    (const char *)(unsigned int)v29,
    dwFlagsa);
  return v30;
}
