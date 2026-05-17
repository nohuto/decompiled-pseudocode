/*
 * XREFs of LdrGetDllHandleEx @ 0x1800228A0
 * Callers:
 *     LdrGetDllHandle @ 0x180022820 (LdrGetDllHandle.c)
 *     CsrClientConnectToServer @ 0x18005D7C0 (CsrClientConnectToServer.c)
 *     SbpResolveBasedOnName @ 0x180111948 (SbpResolveBasedOnName.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180022848 (LdrpInitializeDllPath.c)
 *     LdrpFindLoadedDll @ 0x1800229B8 (LdrpFindLoadedDll.c)
 *     LdrpIncrementModuleLoadCount @ 0x180026B34 (LdrpIncrementModuleLoadCount.c)
 *     LdrpPinModule @ 0x180047C80 (LdrpPinModule.c)
 *     RtlReleasePath @ 0x180071700 (RtlReleasePath.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrGetDllHandleEx(int a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int LoadedDll; // ebx
  __int64 v10; // rsi
  int Count; // eax
  __int64 v12; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v13[15]; // [rsp+40h] [rbp-A8h] BYREF
  char v14; // [rsp+BCh] [rbp-2Ch]

  v12 = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      844,
      (unsigned int)"LdrGetDllHandleEx",
      3,
      "DLL name: %wZ\n",
      a4);
  LdrpInitializeDllPath(*(_QWORD *)(a4 + 8), a2, v13);
  if ( (a1 & 0xFFFFFFF8) != 0 || (a1 & 3) == 3 || !a5 && (a1 & 2) == 0 )
  {
    LoadedDll = -1073741811;
    goto LABEL_6;
  }
  LoadedDll = LdrpFindLoadedDll(a4, v13, &v12);
  if ( LoadedDll >= 0 )
  {
    v10 = v12;
    if ( (a1 & 2) != 0 )
    {
      Count = LdrpPinModule(v12);
    }
    else
    {
      if ( (a1 & 1) != 0 )
        goto LABEL_15;
      Count = LdrpIncrementModuleLoadCount(v12);
    }
    LoadedDll = Count;
LABEL_15:
    if ( LoadedDll >= 0 && a5 )
      *a5 = *(_QWORD *)(v10 + 48);
    LdrpDereferenceModule(v10);
  }
LABEL_6:
  if ( v14 )
    RtlReleasePath(v13[0]);
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrapi.c",
      894,
      (unsigned int)"LdrGetDllHandleEx",
      4,
      "Status: 0x%08lx\n",
      LoadedDll);
  return (unsigned int)LoadedDll;
}
