/*
 * XREFs of ?SendLampArrayControlReport@HidLampArrayDevice@@AEAAJPEBULampArrayControlDeviceReport@@@Z @ 0x1800B4E38
 * Callers:
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800B5654 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800B95F4 (-CreateAndInitializeOutputBuffer@HidLampArrayControlReportParser@@QEAAJPEBULampArrayControlDevic.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampArrayControlReport(
        const WCHAR *this,
        const struct LampArrayControlDeviceReport *a2)
{
  char v4; // cl
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  const struct std::nothrow_t *v8; // rdx
  PVOID v10; // rbx
  const struct std::nothrow_t *v11; // rdx
  signed int LastError; // eax
  const struct std::nothrow_t *v13; // rdx
  unsigned int v14; // edi
  char v15; // [rsp+38h] [rbp-59h] BYREF
  ULONG ReportBufferLength; // [rsp+3Ch] [rbp-55h] BYREF
  PVOID ReportBuffer; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  const char *v19; // [rsp+68h] [rbp-29h]
  int v20; // [rsp+70h] [rbp-21h]
  int v21; // [rsp+74h] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-19h] BYREF
  char *v23; // [rsp+88h] [rbp-9h]
  int v24; // [rsp+90h] [rbp-1h]
  int v25; // [rsp+94h] [rbp+3h]
  EVENT_DATA_DESCRIPTOR v26; // [rsp+98h] [rbp+7h] BYREF
  const char *v27; // [rsp+B8h] [rbp+27h]
  int v28; // [rsp+C0h] [rbp+2Fh]
  int v29; // [rsp+C4h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+C8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  if ( (unsigned int)hProvider > 5 )
  {
    v21 = 0;
    v19 = "Started";
    v20 = 8;
    TlgCreateWsz(&pDesc, this + 12);
    v4 = *(_BYTE *)a2;
    v25 = 0;
    v23 = &v15;
    v15 = v4;
    v24 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D555, 0LL, 0LL, 5u, &pData);
  }
  v5 = *((_QWORD *)this + 73);
  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v6 = HidLampArrayControlReportParser::CreateAndInitializeOutputBuffer(v5, a2, &ReportBuffer, &ReportBufferLength);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v10 = ReportBuffer;
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      if ( (unsigned int)hProvider > 5 )
      {
        v29 = 0;
        v27 = "Completed successfully";
        v28 = 23;
        TlgCreateWsz(&v30, this + 12);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D609, 0LL, 0LL, 4u, &v26);
      }
      if ( v10 )
        operator delete(v10, v11);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v14 = LastError;
      if ( LastError > 0 )
        v14 = (unsigned __int16)LastError | 0x80070000;
      if ( v10 )
        operator delete(v10, v13);
      return v14;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1ED,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v6);
    if ( ReportBuffer )
      operator delete(ReportBuffer, v8);
    return v7;
  }
}
