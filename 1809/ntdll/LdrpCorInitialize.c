/*
 * XREFs of LdrpCorInitialize @ 0x180054948
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpGetProcedureAddress @ 0x180009090 (LdrpGetProcedureAddress.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     LdrpInitializeDllPath @ 0x180022848 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x180023190 (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x18002649C (LdrpBuildSystem32FileName.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x180042678 (LdrpDecrementModuleLoadCountEx.c)
 *     RtlQueryEnvironmentVariable @ 0x180056D90 (RtlQueryEnvironmentVariable.c)
 *     RtlReleasePath @ 0x180071700 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpCorInitialize(_QWORD *a1)
{
  bool v2; // bl
  int Dll; // ebx
  int *v4; // rdi
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-1B0h] BYREF
  int v11; // [rsp+40h] [rbp-1A8h] BYREF
  _WORD *v12; // [rsp+48h] [rbp-1A0h]
  _WORD v13[128]; // [rsp+50h] [rbp-198h] BYREF
  __int64 v14[15]; // [rsp+150h] [rbp-98h] BYREF
  char v15; // [rsp+1CCh] [rbp-1Ch]

  v2 = 1;
  RtlEnterCriticalSection((__int64)&FastPebLock);
  if ( (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 19LL) == -1073741789 )
    v2 = (unsigned int)RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 15LL) != -1073741789;
  RtlLeaveCriticalSection((__int64)&FastPebLock);
  v12 = v13;
  v11 = 0x1000000;
  v13[0] = 0;
  if ( v2 )
  {
    Dll = LdrpBuildSystem32FileName(&v11, (__int64)&LdrpMscoreeDllName);
    v4 = &v11;
  }
  else
  {
    v4 = (int *)&LdrpMscoreeDllName;
    Dll = 0;
  }
  if ( Dll >= 0 )
  {
    LdrpInitializeDllPath(0LL, 0LL, v14);
    Dll = LdrpLoadDll((__int64)v4, (int)v14, 1, (__int64)&v9);
    if ( v15 )
      RtlReleasePath(v14[0]);
    if ( Dll >= 0 )
    {
      Dll = LdrpGetProcedureAddress(*(_QWORD *)(v9 + 48), "_CorExeMain", 0, &v10);
      if ( Dll < 0 )
      {
        LdrpDecrementModuleLoadCountEx(v9, 0LL, v5, v6);
        v7 = v9;
      }
      else
      {
        LdrpCorExeMainRoutine = __ROR8__(v10 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        v7 = v9;
        *a1 = v9;
      }
      LdrpDereferenceModule(v7);
    }
  }
  if ( v13 != v12 )
    NtdllpFreeStringRoutine((__int64)v12);
  return (unsigned int)Dll;
}
