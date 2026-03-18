/*
 * XREFs of FxLibraryCommonRegisterClient @ 0x1C0042D08
 * Callers:
 *     LibraryRegisterClient @ 0x1C002F3F0 (LibraryRegisterClient.c)
 * Callees:
 *     memmove @ 0x1C001B400 (memmove.c)
 *     ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x1C0042820 (-IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C004284C (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     GetEnhancedVerifierOptions @ 0x1C0043204 (GetEnhancedVerifierOptions.c)
 *     McGenEventRegister @ 0x1C004361C (McGenEventRegister.c)
 *     FxAllocateDriverGlobals @ 0x1C0059154 (FxAllocateDriverGlobals.c)
 *     LockVerifierSection @ 0x1C005AD6C (LockVerifierSection.c)
 *     GetNameFromPath @ 0x1C0063474 (GetNameFromPath.c)
 */

__int64 __fastcall FxLibraryCommonRegisterClient(
        _WDF_BIND_INFO *Info,
        _WDF_DRIVER_GLOBALS **WdfDriverGlobals,
        _CLIENT_INFO *ClientInfo)
{
  unsigned int v6; // r14d
  unsigned int FuncCount; // ebx
  bool v8; // zf
  unsigned int v9; // r8d
  unsigned __int8 v10; // r9
  _WDF_DRIVER_GLOBALS *DriverGlobals; // rax
  _FX_DRIVER_GLOBALS *DriverName; // rsi
  unsigned int *v13; // rbx
  __int64 v14; // rax
  void (__fastcall **FuncTable)(); // rcx
  _WDFFUNCTIONS *p_Functions; // rdx
  _WDFFUNCTIONS *v17; // rax
  void (__fastcall *v18)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  const _GUID *v19; // rcx
  const char *v20; // r9
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
        v20 = "PWDF_BIND_INFO->FuncTable";
        if ( Info->FuncTable )
          v20 = "unknown";
      }
      else
      {
        v20 = "PWDF_DRIVER_GLOBALS *";
      }
    }
    else
    {
      v20 = "PWDF_BIND_INFO";
    }
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: NULL parameter -- %s\n", v20);
    goto $Done_17;
  }
  *WdfDriverGlobals = 0LL;
  FuncCount = Info->FuncCount;
  if ( FuncCount > WdfVersion.FuncCount )
  {
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: version mismatch detected in function table count: clienthas 0x%x,  library has 0x%x\n",
      FuncCount,
      WdfVersion.FuncCount);
    goto $Done_17;
  }
  if ( FuncCount > 0x1C5 )
  {
    if ( !unk_1C00AEEF3 )
    {
      DbgPrintEx(0x65u, 0, "LibraryRegisterClient: The driver was built for a pre-released WDF version.\n");
      goto $Done_17;
    }
    if ( FuncCount != 454 )
    {
      if ( IsClientInfoValid(ClientInfo) )
      {
        GetNameFromPath(ClientInfo->RegistryPath, &serviceName);
      }
      else
      {
        RtlInitUnicodeString(&serviceName, L"Unknown");
        FuncCount = Info->FuncCount;
      }
      ReportDdiFunctionCountMismatch(&serviceName, FuncCount, v9, v10);
      goto $Done_17;
    }
  }
  else
  {
    if ( FuncCount > 0x1BC )
    {
      if ( FuncCount == 446 || FuncCount == 448 || FuncCount == 451 )
        goto LABEL_30;
      v8 = FuncCount == 453;
      goto LABEL_21;
    }
    if ( FuncCount != 444 && FuncCount != 383 )
    {
      if ( FuncCount <= 0x181 )
      {
LABEL_22:
        DbgPrintEx(
          0x65u,
          0,
          "LibraryRegisterClient: Function table count 0x%x doesn't match any previously released framework version table size\n",
          FuncCount);
        goto $Done_17;
      }
      if ( FuncCount > 0x183 && FuncCount != 396 && FuncCount != 432 )
      {
        v8 = FuncCount == 438;
LABEL_21:
        if ( !v8 )
          goto LABEL_22;
      }
    }
  }
LABEL_30:
  DriverGlobals = FxAllocateDriverGlobals();
  *WdfDriverGlobals = DriverGlobals;
  if ( !DriverGlobals )
    goto $Done_17;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  v13 = (unsigned int *)&DriverGlobals[-1].DriverName[12];
  GetEnhancedVerifierOptions(ClientInfo, v13);
  if ( (unsigned __int16)*v13 || (*v13 & 0xF00000) != 0 )
  {
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "LibraryRegisterClient: Enhanced Verification is ON \n");
    }
    LockVerifierSection(DriverName, ClientInfo->RegistryPath);
    if ( !KMDF_PERF_PROVIDER_Context.RegistrationHandle )
      McGenEventRegister(v19, v18, &KMDF_PERF_PROVIDER_Context, &KMDF_PERF_PROVIDER_Context.RegistrationHandle);
    v14 = Info->FuncCount;
    FuncTable = Info->FuncTable;
    if ( (unsigned int)v14 <= 0x1B6 )
    {
      p_Functions = &VfWdfVersion.Functions;
      goto LABEL_42;
    }
    v17 = &VfWdfVersion.Functions;
LABEL_44:
    *FuncTable = (void (__fastcall *)())v17;
    goto LABEL_45;
  }
  v14 = Info->FuncCount;
  FuncTable = Info->FuncTable;
  if ( (unsigned int)v14 > 0x1B6 )
  {
    v17 = &WdfVersion.Functions;
    goto LABEL_44;
  }
  p_Functions = &WdfVersion.Functions;
LABEL_42:
  memmove(FuncTable, p_Functions, 8 * v14);
LABEL_45:
  v6 = 0;
  if ( !WdfLdrDbgPrintOn )
    return v6;
  DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
  DbgPrintEx(0x65u, 0, "LibraryRegisterClient: WdfFunctions %p\n", Info->FuncTable);
$Done_17:
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: exit: status %X\n", v6);
  }
  return v6;
}
