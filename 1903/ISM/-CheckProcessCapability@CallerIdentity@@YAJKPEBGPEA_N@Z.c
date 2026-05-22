/*
 * XREFs of ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z @ 0x1800E984C
 * Callers:
 *     ?DoesClientHaveRequiredCapablity@@YA_NPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x180068608 (-DoesClientHaveRequiredCapablity@@YA_NPEBVBamoInputObserverClientProxy@@PEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800519D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180056D88 (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1800E97B8 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckProcessCapability(DWORD dwProcessId, void *a2, unsigned __int16 *a3, bool *a4)
{
  HANDLE v6; // rax
  bool *v7; // r9
  unsigned int LastError; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  *(_BYTE *)a3 = 0;
  v6 = OpenProcess(0x1000u, 0, dwProcessId);
  v12 = v6;
  if ( (((unsigned __int64)v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    v9 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)v6, a2, a3, v7);
    LastError = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
        (const char *)(unsigned int)v9);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x44,
                  (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
                  (const char *)v7);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v12);
  return LastError;
}
