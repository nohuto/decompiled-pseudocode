/*
 * XREFs of ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C004367C
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C0043B7C (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     memset @ 0x1C001C1C0 (memset.c)
 *     RtlStringCchPrintfW @ 0x1C0030194 (RtlStringCchPrintfW.c)
 *     LibraryLogEvent @ 0x1C0044280 (LibraryLogEvent.c)
 *     _TlgKeywordOn @ 0x1C0044500 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0044534 (_TlgWrite.c)
 */

void __fastcall ReportDdiFunctionCountMismatch(
        const _UNICODE_STRING *ServiceName,
        unsigned int ActualFunctionCount,
        unsigned int a3,
        unsigned __int8 a4)
{
  const _TlgProvider_t *v6; // rcx
  const _TlgProvider_t *v7; // rcx
  const _GUID *v8; // r8
  const _GUID *v9; // r9
  void *RawDataBuf; // [rsp+20h] [rbp-E0h]
  unsigned __int16 RawDataLen[4]; // [rsp+28h] [rbp-D8h]
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  _EVENT_DATA_DESCRIPTOR _TlgData[6]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t insertString[320]; // [rsp+A0h] [rbp-60h] BYREF

  memset(insertString, 0, 0x272uLL);
  DbgPrintEx(
    0x65u,
    0,
    "\n"
    "\n"
    "************************* \n"
    "* DDI function table mismatch detected in KMDF driver. The \n"
    "* driver will not load until it is re-compiled using a \n"
    "* newer version of the Windows Driver Kit (WDK). \n");
  DbgPrintEx(
    0x65u,
    0,
    "* Service name                 : %wZ\n"
    "* Actual function table count  : %d \n"
    "* Expected function table count: %d \n"
    "*************************** \n"
    "\n",
    ServiceName,
    ActualFunctionCount,
    453);
  *(_DWORD *)RawDataLen = 453;
  LODWORD(RawDataBuf) = ActualFunctionCount;
  if ( (int)RtlStringCchPrintfW(
              insertString,
              0x139uLL,
              (wchar_t *)L"Service:%wZ Count:Actual %d Expected %d",
              ServiceName,
              RawDataBuf,
              *(_QWORD *)RawDataLen) >= 0 )
    LibraryLogEvent(
      (_DRIVER_OBJECT *)WPP_GLOBAL_WDF_Control.DeviceExtension,
      -2147024894,
      -1073741811,
      insertString,
      0LL,
      0);
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && TlgKeywordOn(v6, 0x200000000000uLL) )
  {
    *(_QWORD *)&_TlgData[2].Size = 2LL;
    _TlgData[2].Ptr = (unsigned __int64)&_TlgData[3].Size;
    _TlgData[3].Ptr = (unsigned __int64)ServiceName->Buffer;
    _TlgData[3].Size = ServiceName->Length;
    _TlgData[4].Ptr = (unsigned __int64)&v12;
    _TlgData[5].Ptr = (unsigned __int64)&v13;
    _TlgData[3].Reserved = 0;
    v12 = ActualFunctionCount;
    *(_QWORD *)&_TlgData[4].Size = 4LL;
    v13 = 453;
    *(_QWORD *)&_TlgData[5].Size = 4LL;
    TlgWrite(v7, &TlgEvent._TlgChannel, v8, v9, 6u, _TlgData);
  }
  if ( WdfLdrDbgPrintOn && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    DbgBreakPoint();
}
