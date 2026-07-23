/*
 * XREFs of LdrGetDllHandleEx @ 0x1800217F0
 * Callers:
 *     LdrGetDllHandle @ 0x180021770 (LdrGetDllHandle.c)
 *     CsrClientConnectToServer @ 0x18004BC20 (CsrClientConnectToServer.c)
 *     SbpResolveBasedOnName @ 0x1801101A8 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180021798 (LdrpInitializeDllPath.c)
 *     LdrpFindLoadedDll @ 0x180021908 (LdrpFindLoadedDll.c)
 *     LdrpIncrementModuleLoadCount @ 0x18002228C (LdrpIncrementModuleLoadCount.c)
 *     LdrpPinModule @ 0x18002EB1C (LdrpPinModule.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrGetDllHandleEx(
        ULONG Flags,
        PWSTR DllPath,
        PULONG DllCharacteristics,
        PUNICODE_STRING DllName,
        PVOID *DllHandle)
{
  NTSTATUS LoadedDll; // ebx
  ULONG v10; // edi
  PVOID v11; // rsi
  NTSTATUS Count; // eax
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-B8h] BYREF
  PWSTR Path[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v15; // [rsp+BCh] [rbp-2Ch]

  BaseAddress[0] = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      844,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      (__int64)"DLL name: %wZ\n",
      DllName);
  LdrpInitializeDllPath((__int64)DllName->Buffer, (__int64)DllPath, (__int64 *)Path);
  if ( (Flags & 0xFFFFFFF8) != 0 || (Flags & 3) == 3 )
    goto LABEL_5;
  if ( DllHandle )
  {
    v10 = Flags & 2;
  }
  else
  {
    v10 = Flags & 2;
    if ( (Flags & 2) == 0 )
    {
LABEL_5:
      LoadedDll = -1073741811;
      goto LABEL_6;
    }
  }
  LoadedDll = LdrpFindLoadedDll(DllName, Path, BaseAddress);
  if ( LoadedDll >= 0 )
  {
    v11 = BaseAddress[0];
    if ( v10 )
    {
      Count = LdrpPinModule(BaseAddress[0]);
    }
    else
    {
      if ( (Flags & 1) != 0 )
        goto LABEL_16;
      Count = LdrpIncrementModuleLoadCount(BaseAddress[0]);
    }
    LoadedDll = Count;
LABEL_16:
    if ( LoadedDll >= 0 && DllHandle )
      *DllHandle = (PVOID)*((_QWORD *)v11 + 6);
    LdrpDereferenceModule((char *)v11);
  }
LABEL_6:
  if ( v15 )
    RtlReleasePath(Path[0]);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      894,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      (__int64)"Status: 0x%08lx\n",
      LoadedDll);
  return LoadedDll;
}
