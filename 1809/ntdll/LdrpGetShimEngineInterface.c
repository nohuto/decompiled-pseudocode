/*
 * XREFs of LdrpGetShimEngineInterface @ 0x1800707C8
 * Callers:
 *     LdrpInitShimEngine @ 0x180070248 (LdrpInitShimEngine.c)
 *     LdrInitShimEngineDynamic @ 0x1800D2560 (LdrInitShimEngineDynamic.c)
 *     LdrpGetProcApphelpCheckModule @ 0x1800D28CC (LdrpGetProcApphelpCheckModule.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1800221B0 (RtlInitAnsiString.c)
 *     LdrUnloadDll @ 0x1800425D0 (LdrUnloadDll.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     LdrGetProcedureAddressEx @ 0x180070B10 (LdrGetProcedureAddressEx.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 LdrpGetShimEngineInterface()
{
  unsigned __int64 v0; // rdx
  int ProcedureAddress; // ebx
  unsigned __int64 *v2; // r8
  __int64 v3; // r9
  unsigned __int64 *v4; // r8
  __int64 v5; // r9
  char v7; // al
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+38h] BYREF

  RtlInitAnsiString(&DestinationString, "SE_InitializeEngine");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       g_pShimEngineModule,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v16,
                       0);
  if ( ProcedureAddress >= 0 )
  {
    RtlInitAnsiString(&DestinationString, "SE_ShimDllLoaded");
    ProcedureAddress = LdrGetProcedureAddressEx(
                         g_pShimEngineModule,
                         (unsigned int)&DestinationString,
                         0,
                         (unsigned int)&v17,
                         0);
    if ( ProcedureAddress >= 0 )
    {
      RtlInitAnsiString(&DestinationString, "SE_InstallBeforeInit");
      ProcedureAddress = LdrGetProcedureAddressEx(
                           g_pShimEngineModule,
                           (unsigned int)&DestinationString,
                           0,
                           (unsigned int)&v18,
                           0);
      if ( ProcedureAddress >= 0 )
      {
        RtlInitAnsiString(&DestinationString, "SE_InstallAfterInit");
        ProcedureAddress = LdrGetProcedureAddressEx(
                             g_pShimEngineModule,
                             (unsigned int)&DestinationString,
                             0,
                             (unsigned int)&v19,
                             0);
        if ( ProcedureAddress >= 0 )
        {
          RtlInitAnsiString(&DestinationString, "SE_DllLoaded");
          ProcedureAddress = LdrGetProcedureAddressEx(
                               g_pShimEngineModule,
                               (unsigned int)&DestinationString,
                               0,
                               (unsigned int)&v8,
                               0);
          if ( ProcedureAddress >= 0 )
          {
            RtlInitAnsiString(&DestinationString, "SE_DllUnloaded");
            ProcedureAddress = LdrGetProcedureAddressEx(
                                 g_pShimEngineModule,
                                 (unsigned int)&DestinationString,
                                 0,
                                 (unsigned int)&v9,
                                 0);
            if ( ProcedureAddress >= 0 )
            {
              RtlInitAnsiString(&DestinationString, "SE_LdrEntryRemoved");
              ProcedureAddress = LdrGetProcedureAddressEx(
                                   g_pShimEngineModule,
                                   (unsigned int)&DestinationString,
                                   0,
                                   (unsigned int)&v10,
                                   0);
              if ( ProcedureAddress >= 0 )
              {
                RtlInitAnsiString(&DestinationString, "SE_ProcessDying");
                ProcedureAddress = LdrGetProcedureAddressEx(
                                     g_pShimEngineModule,
                                     (unsigned int)&DestinationString,
                                     0,
                                     (unsigned int)&v11,
                                     0);
                if ( ProcedureAddress >= 0 )
                {
                  RtlInitAnsiString(&DestinationString, "SE_LdrResolveDllName");
                  ProcedureAddress = LdrGetProcedureAddressEx(
                                       g_pShimEngineModule,
                                       (unsigned int)&DestinationString,
                                       0,
                                       (unsigned int)&v13,
                                       0);
                  if ( ProcedureAddress >= 0 )
                  {
                    RtlInitAnsiString(&DestinationString, "SE_GetProcAddressForCaller");
                    ProcedureAddress = LdrGetProcedureAddressEx(
                                         g_pShimEngineModule,
                                         (unsigned int)&DestinationString,
                                         0,
                                         (unsigned int)&v12,
                                         0);
                    if ( ProcedureAddress >= 0 )
                    {
                      RtlInitAnsiString(&DestinationString, "ApphelpCheckModule");
                      ProcedureAddress = LdrGetProcedureAddressEx(
                                           g_pShimEngineModule,
                                           (unsigned int)&DestinationString,
                                           0,
                                           (unsigned int)&v14,
                                           0);
                      if ( ProcedureAddress >= 0 )
                      {
                        LdrProtectMrdata(0, v0, v2, v3);
                        g_pfnSE_InitializeEngine = __ROR8__(v16 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        g_pfnSE_ShimDllLoaded = __ROR8__(v17 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        g_pfnSE_InstallBeforeInit = __ROR8__(v18 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        g_pfnSE_InstallAfterInit = __ROR8__(v19 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        g_pfnSE_DllLoaded = __ROR8__(v8 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        g_pfnSE_DllUnloaded = __ROR8__(v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        g_pfnSE_LdrEntryRemoved = __ROR8__(v10 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        g_pfnSE_ProcessDying = __ROR8__(v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        g_pfnSE_GetProcAddressForCaller = __ROR8__(v12 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        g_pfnSE_LdrResolveDllName = __ROR8__(v13 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        g_pfnApphelpCheckModuleProc = __ROR8__(v14 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
                        LdrProtectMrdata(1, g_pfnApphelpCheckModuleProc, v4, v5);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ProcedureAddress < 0 )
  {
    v7 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2195,
        (unsigned int)"LdrpGetShimEngineInterface",
        0,
        "Could not locate procedure \"%s\" in the shim engine DLL\n",
        DestinationString.Buffer);
      v7 = LdrpDebugFlags;
    }
    if ( (v7 & 0x10) != 0 )
      __debugbreak();
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule, v0, (__int64)v2, v3);
    g_pShimEngineModule = 0LL;
  }
  return (unsigned int)ProcedureAddress;
}
