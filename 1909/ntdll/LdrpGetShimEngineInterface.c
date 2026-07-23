/*
 * XREFs of LdrpGetShimEngineInterface @ 0x180069660
 * Callers:
 *     LdrpInitShimEngine @ 0x1800690E0 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0D30 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D109C (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     RtlInitAnsiString @ 0x180021100 (RtlInitAnsiString.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     LdrGetProcedureAddressEx @ 0x1800699A0 (LdrGetProcedureAddressEx.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

__int64 LdrpGetShimEngineInterface()
{
  NTSTATUS v0; // ebx
  char v2; // al
  PVOID v3; // [rsp+30h] [rbp-50h] BYREF
  PVOID v4; // [rsp+38h] [rbp-48h] BYREF
  PVOID v5; // [rsp+40h] [rbp-40h] BYREF
  PVOID v6; // [rsp+48h] [rbp-38h] BYREF
  PVOID v7; // [rsp+50h] [rbp-30h] BYREF
  PVOID v8; // [rsp+58h] [rbp-28h] BYREF
  PVOID v9; // [rsp+60h] [rbp-20h] BYREF
  _STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  PVOID ProcedureAddress; // [rsp+A0h] [rbp+20h] BYREF
  PVOID v12; // [rsp+A8h] [rbp+28h] BYREF
  PVOID v13; // [rsp+B0h] [rbp+30h] BYREF
  PVOID v14; // [rsp+B8h] [rbp+38h] BYREF

  RtlInitAnsiString(&DestinationString, "SE_InitializeEngine");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &ProcedureAddress, 0);
  if ( v0 < 0 )
    goto LABEL_13;
  RtlInitAnsiString(&DestinationString, "SE_ShimDllLoaded");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v12, 0);
  if ( v0 < 0 )
    goto LABEL_13;
  RtlInitAnsiString(&DestinationString, "SE_InstallBeforeInit");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v13, 0);
  if ( v0 < 0 )
    goto LABEL_13;
  RtlInitAnsiString(&DestinationString, "SE_InstallAfterInit");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v14, 0);
  if ( v0 < 0 )
    goto LABEL_13;
  RtlInitAnsiString(&DestinationString, "SE_DllLoaded");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v3, 0);
  if ( v0 < 0
    || (RtlInitAnsiString(&DestinationString, "SE_DllUnloaded"),
        v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v4, 0),
        v0 < 0)
    || (RtlInitAnsiString(&DestinationString, "SE_LdrEntryRemoved"),
        v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v5, 0),
        v0 < 0)
    || (RtlInitAnsiString(&DestinationString, "SE_ProcessDying"),
        v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v6, 0),
        v0 < 0) )
  {
LABEL_13:
    if ( v0 >= 0 )
      return (unsigned int)v0;
    goto LABEL_15;
  }
  RtlInitAnsiString(&DestinationString, "SE_LdrResolveDllName");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v8, 0);
  if ( v0 >= 0 )
  {
    RtlInitAnsiString(&DestinationString, "SE_GetProcAddressForCaller");
    v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v7, 0);
    if ( v0 >= 0 )
    {
      RtlInitAnsiString(&DestinationString, "ApphelpCheckModule");
      v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v9, 0);
      if ( v0 >= 0 )
      {
        LdrProtectMrdata(0);
        g_pfnSE_InitializeEngine = __ROR8__(
                                     (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                     MEMORY[0x7FFE0330] & 0x3F);
        g_pfnSE_ShimDllLoaded = __ROR8__((unsigned __int64)v12 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        g_pfnSE_InstallBeforeInit = __ROR8__((unsigned __int64)v13 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        g_pfnSE_InstallAfterInit = (PVOID)__ROR8__(
                                            (unsigned __int64)v14 ^ MEMORY[0x7FFE0330],
                                            MEMORY[0x7FFE0330] & 0x3F);
        g_pfnSE_DllLoaded = __ROR8__((unsigned __int64)v3 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        g_pfnSE_DllUnloaded = __ROR8__((unsigned __int64)v4 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        g_pfnSE_LdrEntryRemoved = __ROR8__((unsigned __int64)v5 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        g_pfnSE_ProcessDying = __ROR8__((unsigned __int64)v6 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        g_pfnSE_GetProcAddressForCaller = __ROR8__((unsigned __int64)v7 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        g_pfnSE_LdrResolveDllName = __ROR8__((unsigned __int64)v8 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        g_pfnApphelpCheckModuleProc = __ROR8__((unsigned __int64)v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        LdrProtectMrdata(1);
        goto LABEL_13;
      }
    }
  }
LABEL_15:
  v2 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2189,
      (unsigned int)"LdrpGetShimEngineInterface",
      0,
      (__int64)"Could not locate procedure \"%s\" in the shim engine DLL\n",
      DestinationString.Buffer);
    v2 = LdrpDebugFlags;
  }
  if ( (v2 & 0x10) != 0 )
    __debugbreak();
  g_ShimsEnabled = 0;
  LdrUnloadDll(g_pShimEngineModule);
  g_pShimEngineModule = 0LL;
  return (unsigned int)v0;
}
