/*
 * XREFs of FxLibraryCommonRegisterClient @ 0x1C0043B7C
 * Callers:
 *     LibraryRegisterClient @ 0x1C002FFD0 (LibraryRegisterClient.c)
 * Callees:
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x1C0043650 (-IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C004367C (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     GetEnhancedVerifierOptions @ 0x1C0044098 (GetEnhancedVerifierOptions.c)
 *     McGenEventRegister @ 0x1C004449C (McGenEventRegister.c)
 *     FxAllocateDriverGlobals @ 0x1C0058F7C (FxAllocateDriverGlobals.c)
 *     LockVerifierSection @ 0x1C005A9B0 (LockVerifierSection.c)
 *     GetNameFromPath @ 0x1C0063128 (GetNameFromPath.c)
 */

__int64 __fastcall FxLibraryCommonRegisterClient(
        _WDF_BIND_INFO *Info,
        _WDF_DRIVER_GLOBALS **WdfDriverGlobals,
        _CLIENT_INFO *ClientInfo)
{
  unsigned int v6; // r14d
  unsigned int FuncCount; // ebx
  bool v8; // zf
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  _WDF_DRIVER_GLOBALS *DriverGlobals; // rax
  _FX_DRIVER_GLOBALS *DriverName; // rsi
  unsigned int *v14; // rbx
  __int64 v15; // rax
  void (__fastcall **FuncTable)(); // rcx
  _WDFFUNCTIONS *p_Functions; // rdx
  _WDFFUNCTIONS *v18; // rax
  void (__fastcall *v19)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  const _GUID *v20; // rcx
  unsigned int v21; // r8d
  unsigned __int8 v22; // r9
  const char *v23; // r9
  _UNICODE_STRING serviceName; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&serviceName.Length = 0LL;
  serviceName.Buffer = 0LL;
  v6 = -1073741811;
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: enter\n");
  }
  if ( !Info || !WdfDriverGlobals || !Info->FuncTable )
  {
    if ( !WdfLdrDbgPrintOn )
      return v6;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    if ( Info )
    {
      if ( WdfDriverGlobals )
      {
        v23 = "PWDF_BIND_INFO->FuncTable";
        if ( Info->FuncTable )
          v23 = "unknown";
      }
      else
      {
        v23 = "PWDF_DRIVER_GLOBALS *";
      }
    }
    else
    {
      v23 = "PWDF_BIND_INFO";
    }
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: NULL parameter -- %s\n", v23);
    goto $Done_18;
  }
  *WdfDriverGlobals = 0LL;
  FuncCount = Info->FuncCount;
  if ( FuncCount <= WdfVersion.FuncCount )
  {
    if ( FuncCount > 0x1C5 )
    {
      *(_QWORD *)&serviceName.Length = 0LL;
      serviceName.Buffer = 0LL;
      if ( IsClientInfoValid(ClientInfo) )
      {
        GetNameFromPath(ClientInfo->RegistryPath, &serviceName);
      }
      else
      {
        RtlInitUnicodeString(&serviceName, L"Unknown");
        FuncCount = Info->FuncCount;
      }
      ReportDdiFunctionCountMismatch(&serviceName, FuncCount, v21, v22);
      goto $Done_18;
    }
    if ( FuncCount > 0x1BC )
    {
      v9 = FuncCount - 446;
      if ( !v9 )
        goto LABEL_25;
      v10 = v9 - 2;
      if ( !v10 )
        goto LABEL_25;
      v11 = v10 - 3;
      if ( !v11 )
        goto LABEL_25;
      v8 = v11 == 2;
    }
    else
    {
      if ( FuncCount == 444 || FuncCount == 383 )
        goto LABEL_25;
      if ( FuncCount <= 0x181 )
      {
LABEL_23:
        if ( !WdfLdrDbgPrintOn )
          return v6;
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(
          0x65u,
          0,
          "LibraryRegisterClient: Function table count 0x%x doesn't match any previously released framework version table size\n",
          Info->FuncCount);
        goto $Done_18;
      }
      if ( FuncCount <= 0x183 || FuncCount == 396 || FuncCount == 432 )
      {
LABEL_25:
        DriverGlobals = FxAllocateDriverGlobals();
        *WdfDriverGlobals = DriverGlobals;
        if ( !DriverGlobals )
          goto $Done_18;
        DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
        v14 = (unsigned int *)&DriverGlobals[-1].DriverName[12];
        GetEnhancedVerifierOptions(ClientInfo, v14);
        if ( (unsigned __int16)*v14 || (*v14 & 0xF00000) != 0 )
        {
          if ( WdfLdrDbgPrintOn )
          {
            DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
            DbgPrintEx(0x65u, 0, "LibraryRegisterClient: Enhanced Verification is ON \n");
          }
          LockVerifierSection(DriverName, ClientInfo->RegistryPath);
          if ( !KMDF_PERF_PROVIDER_Context.RegistrationHandle )
            McGenEventRegister(v20, v19, &KMDF_PERF_PROVIDER_Context, &KMDF_PERF_PROVIDER_Context.RegistrationHandle);
          v15 = Info->FuncCount;
          FuncTable = Info->FuncTable;
          if ( (unsigned int)v15 <= 0x1B6 )
          {
            p_Functions = &VfWdfVersion.Functions;
            goto LABEL_37;
          }
          v18 = &VfWdfVersion.Functions;
        }
        else
        {
          v15 = Info->FuncCount;
          FuncTable = Info->FuncTable;
          if ( (unsigned int)v15 <= 0x1B6 )
          {
            p_Functions = &WdfVersion.Functions;
LABEL_37:
            memmove(FuncTable, p_Functions, 8 * v15);
LABEL_40:
            v6 = 0;
            if ( !WdfLdrDbgPrintOn )
              return v6;
            DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
            DbgPrintEx(0x65u, 0, "LibraryRegisterClient: WdfFunctions %p\n", Info->FuncTable);
            goto $Done_18;
          }
          v18 = &WdfVersion.Functions;
        }
        *FuncTable = (void (__fastcall *)())v18;
        goto LABEL_40;
      }
      v8 = FuncCount == 438;
    }
    if ( !v8 )
      goto LABEL_23;
    goto LABEL_25;
  }
  if ( !WdfLdrDbgPrintOn )
    return v6;
  DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
  DbgPrintEx(
    0x65u,
    0,
    "LibraryRegisterClient: version mismatch detected in function table count: clienthas 0x%x,  library has 0x%x\n",
    Info->FuncCount,
    WdfVersion.FuncCount);
$Done_18:
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: exit: status %X\n", v6);
  }
  return v6;
}
