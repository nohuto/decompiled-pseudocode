/*
 * XREFs of LdrLoadDll @ 0x180021600
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x18007AA5C (LdrpCodeAuthzInitialize.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D6C30 (RtlWow64LogMessageInEventLogger.c)
 *     SbpResolveBasedOnName @ 0x1801101A8 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180021798 (LdrpInitializeDllPath.c)
 *     LdrpLoadDll @ 0x180022180 (LdrpLoadDll.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrLoadDll(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  ULONG v8; // eax
  ULONG v9; // ecx
  int v10; // edx
  int v11; // r8d
  int v12; // ecx
  unsigned int v13; // ebx
  NTSTATUS Dll; // ebx
  char *v15; // rcx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v19; // [rsp+BCh] [rbp-2Ch]

  if ( DllCharacteristics )
  {
    v8 = *DllCharacteristics;
    v9 = 2 * (*DllCharacteristics & 4);
    v10 = v9 | 0x40;
    if ( (v8 & 2) == 0 )
      v10 = v9;
    v11 = v10 | 0x80;
    if ( (*DllCharacteristics & 0x800000) == 0 )
      v11 = v10;
    v12 = v11 | 0x100;
    if ( (*DllCharacteristics & 0x1000) == 0 )
      v12 = v11;
    v13 = v12 | 0x400000;
    if ( (*DllCharacteristics & 0x80000000) == 0 )
      v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      151,
      (unsigned int)"LdrLoadDll",
      3,
      (__int64)"DLL name: %wZ\n",
      DllName);
  if ( (LdrpPolicyBits & 4) == 0 && ((unsigned __int16)DllPath & 0x401) == 0x401LL )
    return -1073741811;
  if ( (v13 & 8) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      Dll = -1073740004;
    }
    else
    {
      LdrpInitializeDllPath(DllName->Buffer, DllPath, Path);
      Dll = LdrpLoadDll(DllName, Path, v13, BaseAddress);
      if ( v19 )
        RtlReleasePath(Path[0]);
      if ( Dll >= 0 )
      {
        v15 = (char *)BaseAddress[0];
        *DllHandle = (PVOID)*((_QWORD *)BaseAddress[0] + 6);
        LdrpDereferenceModule(v15);
      }
    }
  }
  else
  {
    if ( (LdrpDebugFlags & 3) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrapi.c",
        172,
        (unsigned int)"LdrLoadDll",
        0,
        (__int64)"Nonpackaged process attempted to load a packaged DLL.\n");
    if ( (LdrpDebugFlags & 0x10) != 0 )
      __debugbreak();
    Dll = -1073741398;
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      204,
      (unsigned int)"LdrLoadDll",
      4,
      (__int64)"Status: 0x%08lx\n",
      Dll);
  return Dll;
}
