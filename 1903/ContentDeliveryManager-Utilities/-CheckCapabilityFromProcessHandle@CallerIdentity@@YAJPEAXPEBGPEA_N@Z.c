/*
 * XREFs of ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180054BF0
 * Callers:
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180054CC4 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800035D8 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180004808 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x180004850 (--0AgileRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x180042AA0 (-close_reset@-$resource_policy@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@ZU-$integral_constant@_K$0A@@w.c)
 *     ?GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z @ 0x1800551DC (-GetImpersonationTokenFromProcess@CallerIdentity@@YAJPEAXKPEAPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCapabilityFromProcessHandle(
        CallerIdentity *this,
        void *a2,
        unsigned __int16 *a3,
        bool *a4)
{
  void *v7; // rdx
  void **v8; // r9
  int ImpersonationTokenFromProcess; // eax
  unsigned int v10; // ebx
  HANDLE v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v15; // [rsp+40h] [rbp+18h] BYREF
  HANDLE hObject; // [rsp+48h] [rbp+20h] BYREF

  *(_BYTE *)a3 = 0;
  Microsoft::WRL::AgileRef::AgileRef((Microsoft::WRL::AgileRef *)&hObject);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    wil::details::resource_policy<void *,int (*)(void *),&int CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>::close_reset(hObject);
  hObject = 0LL;
  ImpersonationTokenFromProcess = CallerIdentity::GetImpersonationTokenFromProcess(this, v7, (unsigned int)&hObject, v8);
  v10 = ImpersonationTokenFromProcess;
  if ( ImpersonationTokenFromProcess >= 0 )
  {
    v11 = hObject;
    *(_BYTE *)a3 = 0;
    v12 = CapabilityCheck(v11, a2, &v15);
    if ( v12 >= 0 )
    {
      v10 = 0;
      *(_BYTE *)a3 = v15 != 0;
    }
    else
    {
      v10 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0xE,
              (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
              (const char *)(unsigned int)v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)ImpersonationTokenFromProcess);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&hObject);
  return v10;
}
