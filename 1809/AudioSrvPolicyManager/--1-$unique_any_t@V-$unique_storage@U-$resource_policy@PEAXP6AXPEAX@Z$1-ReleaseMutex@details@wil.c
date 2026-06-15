/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?ReleaseMutex@details@wil@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003094
 * Callers:
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::Release_::_1_::dtor$0 @ 0x18003833D (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--Release_--_1_--d.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002FD8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::ReleaseMutex(void *),wistd::integral_constant<unsigned __int64,2>,void *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  if ( v1 && !ReleaseMutex(v1) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x918, v2, v3);
    JUMPOUT(0x1800030BELL);
  }
}
