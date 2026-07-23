/*
 * XREFs of LdrpCorInitialize @ 0x180081710
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x18001C2B0 (LdrpGetProcedureAddress.c)
 *     LdrpInitializeDllPath @ 0x180021798 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x180022180 (LdrpLoadDll.c)
 *     LdrpBuildSystem32FileName @ 0x180025714 (LdrpBuildSystem32FileName.c)
 *     LdrpDecrementModuleLoadCountEx @ 0x18002F3D8 (LdrpDecrementModuleLoadCountEx.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpCorInitialize(PVOID *a1)
{
  bool v2; // bl
  int Dll; // ebx
  int *v4; // rdi
  char *v5; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp-1B8h] BYREF
  ULONG_PTR ReturnLength; // [rsp+38h] [rbp-1B0h] BYREF
  int v9; // [rsp+40h] [rbp-1A8h] BYREF
  _WORD *v10; // [rsp+48h] [rbp-1A0h]
  _WORD v11[128]; // [rsp+50h] [rbp-198h] BYREF
  PWSTR Path[15]; // [rsp+150h] [rbp-98h] BYREF
  char v13; // [rsp+1CCh] [rbp-1Ch]

  v2 = 1;
  RtlEnterCriticalSection(&FastPebLock);
  if ( RtlQueryEnvironmentVariable(0LL, L"COMPLUS_InstallRoot", 0x13uLL, 0LL, 0LL, &ReturnLength) == -1073741789 )
    v2 = RtlQueryEnvironmentVariable(0LL, L"COMPLUS_Version", 0xFuLL, 0LL, 0LL, &ReturnLength) != -1073741789;
  RtlLeaveCriticalSection(&FastPebLock);
  v10 = v11;
  v9 = 0x1000000;
  v11[0] = 0;
  if ( v2 )
  {
    Dll = LdrpBuildSystem32FileName(&v9, (__int64)&LdrpMscoreeDllName);
    v4 = &v9;
  }
  else
  {
    v4 = (int *)&LdrpMscoreeDllName;
    Dll = 0;
  }
  if ( Dll >= 0 )
  {
    LdrpInitializeDllPath(0LL, 0LL, (__int64 *)Path);
    Dll = LdrpLoadDll((__int64)v4, (__int64)Path, 1, (__int64)&BaseAddress);
    if ( v13 )
      RtlReleasePath(Path[0]);
    if ( Dll >= 0 )
    {
      Dll = LdrpGetProcedureAddress(*((_QWORD *)BaseAddress + 6), "_CorExeMain", 0, (char **)&ReturnLength);
      if ( Dll < 0 )
      {
        LdrpDecrementModuleLoadCountEx((__int64)BaseAddress, 0);
        v5 = (char *)BaseAddress;
      }
      else
      {
        LdrpCorExeMainRoutine = __ROR8__(ReturnLength ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        v5 = (char *)BaseAddress;
        *a1 = BaseAddress;
      }
      LdrpDereferenceModule(v5);
    }
  }
  if ( v11 != v10 )
    NtdllpFreeStringRoutine(v10);
  return (unsigned int)Dll;
}
