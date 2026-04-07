/*
 * XREFs of ?acquire@?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@2@PEAKKH@Z @ 0x18003F9BC
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18003F4DC (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18006F8E0 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Release@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x1800711D8 (-Release@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x180071250 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006FDF4 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

_QWORD *__fastcall wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::acquire(
        HANDLE *a1,
        _QWORD *a2)
{
  HANDLE v2; // rdi
  DWORD v4; // eax
  unsigned int v5; // r8d
  const char *v6; // r9
  HANDLE v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  v4 = WaitForSingleObjectEx(*a1, 0xFFFFFFFF, 0);
  v7 = 0LL;
  if ( v4 == 258 )
    goto LABEL_5;
  if ( v4 )
  {
    if ( v4 != 128 )
    {
      wil::details::in1diag3::FailFast_Unexpected(retaddr, (void *)0xB4D, v5, v6);
      JUMPOUT(0x180068E18LL);
    }
LABEL_5:
    if ( (v4 & 0xFFFFFF7F) != 0 )
      goto LABEL_4;
  }
  v7 = v2;
LABEL_4:
  *a2 = v7;
  return a2;
}
