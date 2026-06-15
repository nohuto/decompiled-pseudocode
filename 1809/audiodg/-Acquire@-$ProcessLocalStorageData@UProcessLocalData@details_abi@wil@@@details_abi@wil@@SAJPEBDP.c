/*
 * XREFs of ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x14002E288
 * Callers:
 *     ?GetShared@?$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUProcessLocalData@23@XZ @ 0x14002EF3C (-GetShared@-$ProcessLocalStorage@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUPr.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000EE40 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140013B0C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x14002E520 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14002EE28 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x14002F5EC (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?ReleaseMutex@details@wil@@YAXPEAX@Z @ 0x14002FA9C (-ReleaseMutex@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x14003053C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x140030948 (-acquire@-$mutex_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::Acquire(
        __int64 a1,
        _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  wil::details *Mutex; // rax
  wil::details *v5; // rcx
  wil::details *v6; // rbx
  int v7; // edi
  _DWORD *v8; // rsi
  unsigned __int64 v9; // r15
  bool v10; // dl
  bool *v11; // r9
  int ValueInternal; // eax
  void *v13; // rdx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-E0h]
  wil::details *v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  wil::details *v19; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  v16 = 120;
  StringCchPrintfW(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId);
  v17 = 0LL;
  Mutex = (wil::details *)CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    &v17,
    Mutex);
  v6 = v17;
  if ( !v17 )
    return (unsigned int)wil::details::GetLastErrorFailHr(v5);
  wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
    &v17,
    &v19);
  v8 = 0LL;
  v18 = 0LL;
  v9 = 0LL;
  ValueInternal = wil::details_abi::SemaphoreValue::TryGetValueInternal(Name, v10, &v18, v11);
  v7 = ValueInternal;
  if ( ValueInternal >= 0 )
  {
    v9 = v18;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61,
      (unsigned int)"wil",
      (const char *)(unsigned int)ValueInternal,
      120);
  }
  if ( v7 >= 0 )
  {
    v8 = (_DWORD *)(4 * v9);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x6A, (unsigned int)"wil", (const char *)(unsigned int)v7, v16);
  }
  if ( v7 >= 0 )
  {
    if ( v8 )
    {
      *a2 = v8;
      *(_DWORD *)*a2 = *v8 + 1;
    }
    else
    {
      v15 = wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(Name);
      v7 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x129,
          (unsigned int)"wil",
          (const char *)(unsigned int)v15,
          v16);
        goto LABEL_14;
      }
    }
    v7 = 0;
LABEL_14:
    v6 = v17;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0x121, (unsigned int)"wil", (const char *)(unsigned int)v7, v16);
LABEL_15:
  if ( v19 )
    wil::details::ReleaseMutex(v19, v13);
  if ( v6 )
    wil::details::CloseHandle(v6, v13);
  return (unsigned int)v7;
}
