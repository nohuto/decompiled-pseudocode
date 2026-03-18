/*
 * XREFs of DriverEntry @ 0x1C002F080
 * Callers:
 *     GsDriverEntry @ 0x1C00CB010 (GsDriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     memset @ 0x1C001B300 (memset.c)
 *     ?FxLibraryCleanup@@YAXXZ @ 0x1C002E988 (-FxLibraryCleanup@@YAXXZ.c)
 *     ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C002E9D0 (-FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?WdfWriteKmdfVersionToRegistry@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C002ECA0 (-WdfWriteKmdfVersionToRegistry@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DriverEntry(_DRIVER_OBJECT *DriverObject, _UNICODE_STRING *RegistryPath)
{
  int v4; // ebx
  _UNICODE_STRING name; // [rsp+20h] [rbp-E0h] BYREF
  _UNICODE_STRING string; // [rsp+30h] [rbp-D0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t buffer[17]; // [rsp+160h] [rbp+60h] BYREF

  *(_QWORD *)&string.Length = 0LL;
  string.Buffer = 0LL;
  *(_DWORD *)(&name.MaximumLength + 1) = 0;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = NonPagedPoolNx;
    ExDefaultMdlProtection = 0x40000000;
  }
  RtlInitUnicodeString(&string, L"DbgPrintOn");
  WdfLdrDiagnosticsValueByNameAsULONG(&string, &WdfLdrDbgPrintOn);
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "DriverEntry\n");
  }
  *(_QWORD *)&name.Length = 2228224LL;
  DriverObject->DriverUnload = DriverUnload;
  WPP_GLOBAL_WDF_Control.DeviceExtension = DriverObject;
  DriverObject->MajorFunction[0] = FxLibraryDispatch;
  DriverObject->MajorFunction[18] = FxLibraryDispatch;
  DriverObject->MajorFunction[2] = FxLibraryDispatch;
  name.Buffer = buffer;
  memset(buffer, 0, sizeof(buffer));
  v4 = FxLibraryCreateDevice(&name);
  if ( v4 < 0 )
  {
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "ERROR: FxLibraryCreateDevice failed with Status 0x%x\n", v4);
    }
    return (unsigned int)v4;
  }
  v4 = WdfRegisterLibrary(&WdfLibraryInfo, RegistryPath, &name);
  if ( v4 < 0 )
  {
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "ERROR: WdfRegisterLibrary failed with Status 0x%x\n", v4);
    }
    FxLibraryCleanup();
    return (unsigned int)v4;
  }
  WdfWriteKmdfVersionToRegistry(DriverObject, RegistryPath);
  return 0LL;
}
