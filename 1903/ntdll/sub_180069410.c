/*
 * XREFs of sub_180069410 @ 0x180069410
 * Callers:
 *     sub_180068E90 @ 0x180068E90 (sub_180068E90.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0C70 (LdrInitShimEngineDynamic.c)
 *     sub_1800D0FDC @ 0x1800D0FDC (sub_1800D0FDC.c)
 * Callees:
 *     RtlInitString @ 0x180021100 (RtlInitString.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     LdrGetProcedureAddressEx @ 0x180069750 (LdrGetProcedureAddressEx.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 sub_180069410()
{
  int ProcedureAddress; // ebx
  char v2; // al
  __int64 v3; // [rsp+30h] [rbp-50h] BYREF
  __int64 v4; // [rsp+38h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-40h] BYREF
  __int64 v6; // [rsp+48h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp-20h] BYREF
  STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v14; // [rsp+B8h] [rbp+38h] BYREF

  RtlInitString(&DestinationString, "SE_InitializeEngine");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       qword_180165398,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v11,
                       0);
  if ( ProcedureAddress < 0 )
    goto LABEL_13;
  RtlInitString(&DestinationString, "SE_ShimDllLoaded");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       qword_180165398,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v12,
                       0);
  if ( ProcedureAddress < 0 )
    goto LABEL_13;
  RtlInitString(&DestinationString, "SE_InstallBeforeInit");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       qword_180165398,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v13,
                       0);
  if ( ProcedureAddress < 0 )
    goto LABEL_13;
  RtlInitString(&DestinationString, "SE_InstallAfterInit");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       qword_180165398,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v14,
                       0);
  if ( ProcedureAddress < 0 )
    goto LABEL_13;
  RtlInitString(&DestinationString, "SE_DllLoaded");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       qword_180165398,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v3,
                       0);
  if ( ProcedureAddress < 0
    || (RtlInitString(&DestinationString, "SE_DllUnloaded"),
        ProcedureAddress = LdrGetProcedureAddressEx(
                             qword_180165398,
                             (unsigned int)&DestinationString,
                             0,
                             (unsigned int)&v4,
                             0),
        ProcedureAddress < 0)
    || (RtlInitString(&DestinationString, "SE_LdrEntryRemoved"),
        ProcedureAddress = LdrGetProcedureAddressEx(
                             qword_180165398,
                             (unsigned int)&DestinationString,
                             0,
                             (unsigned int)&v5,
                             0),
        ProcedureAddress < 0)
    || (RtlInitString(&DestinationString, "SE_ProcessDying"),
        ProcedureAddress = LdrGetProcedureAddressEx(
                             qword_180165398,
                             (unsigned int)&DestinationString,
                             0,
                             (unsigned int)&v6,
                             0),
        ProcedureAddress < 0) )
  {
LABEL_13:
    if ( ProcedureAddress >= 0 )
      return (unsigned int)ProcedureAddress;
    goto LABEL_15;
  }
  RtlInitString(&DestinationString, "SE_LdrResolveDllName");
  ProcedureAddress = LdrGetProcedureAddressEx(
                       qword_180165398,
                       (unsigned int)&DestinationString,
                       0,
                       (unsigned int)&v8,
                       0);
  if ( ProcedureAddress >= 0 )
  {
    RtlInitString(&DestinationString, "SE_GetProcAddressForCaller");
    ProcedureAddress = LdrGetProcedureAddressEx(
                         qword_180165398,
                         (unsigned int)&DestinationString,
                         0,
                         (unsigned int)&v7,
                         0);
    if ( ProcedureAddress >= 0 )
    {
      RtlInitString(&DestinationString, "ApphelpCheckModule");
      ProcedureAddress = LdrGetProcedureAddressEx(
                           qword_180165398,
                           (unsigned int)&DestinationString,
                           0,
                           (unsigned int)&v9,
                           0);
      if ( ProcedureAddress >= 0 )
      {
        sub_180035F18(0);
        qword_18017A240 = __ROR8__(v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        qword_18017A210 = __ROR8__(v12 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        qword_18017A250 = __ROR8__(v13 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        qword_18017A218 = __ROR8__(v14 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        qword_18017A268 = __ROR8__(v3 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        qword_18017A1F8 = __ROR8__(v4 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        qword_18017A258 = __ROR8__(v5 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        qword_18017A200 = __ROR8__(v6 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        qword_18017A1F0 = __ROR8__(v7 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        qword_18017A248 = __ROR8__(v8 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        qword_18017A208 = __ROR8__(v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
        sub_180035F18(1);
        goto LABEL_13;
      }
    }
  }
LABEL_15:
  v2 = dword_18015FAB0;
  if ( (dword_18015FAB0 & 3) != 0 )
  {
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      2186,
      (unsigned int)"LdrpGetShimEngineInterface",
      0,
      (__int64)"Could not locate procedure \"%s\" in the shim engine DLL\n",
      DestinationString.Buffer);
    v2 = dword_18015FAB0;
  }
  if ( (v2 & 0x10) != 0 )
    __debugbreak();
  byte_180166014 = 0;
  LdrUnloadDll(qword_180165398);
  qword_180165398 = 0LL;
  return (unsigned int)ProcedureAddress;
}
