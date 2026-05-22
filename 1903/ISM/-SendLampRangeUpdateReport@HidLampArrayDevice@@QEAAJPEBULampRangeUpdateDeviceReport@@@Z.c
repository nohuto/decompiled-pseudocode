/*
 * XREFs of ?SendLampRangeUpdateReport@HidLampArrayDevice@@QEAAJPEBULampRangeUpdateDeviceReport@@@Z @ 0x1800B53B8
 * Callers:
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800B3E38 (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ @ 0x1800B65D8 (-SendLampStateUpdate@HidLampRangeUpdateReportBuilder@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800B90F0 (-CreateAndInitializeOutputBuffer@HidLampRangeUpdateReportParser@@QEAAJPEBULampRangeUpdateDeviceR.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampRangeUpdateReport(
        const WCHAR *this,
        const struct LampRangeUpdateDeviceReport *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  const struct std::nothrow_t *v7; // rdx
  PVOID v9; // rbx
  const struct std::nothrow_t *v10; // rdx
  signed int LastError; // eax
  const struct std::nothrow_t *v12; // rdx
  unsigned int v13; // edi
  ULONG ReportBufferLength; // [rsp+30h] [rbp-59h] BYREF
  PVOID ReportBuffer; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  const char *v17; // [rsp+60h] [rbp-29h]
  int v18; // [rsp+68h] [rbp-21h]
  int v19; // [rsp+6Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+80h] [rbp-9h] BYREF
  const char *v22; // [rsp+A0h] [rbp+17h]
  int v23; // [rsp+A8h] [rbp+1Fh]
  int v24; // [rsp+ACh] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+B0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  if ( (unsigned int)hProvider > 5 )
  {
    v19 = 0;
    v17 = "Started";
    v18 = 8;
    TlgCreateWsz(&pDesc, this + 12);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D615, 0LL, 0LL, 4u, &pData);
  }
  v4 = *((_QWORD *)this + 77);
  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v5 = HidLampRangeUpdateReportParser::CreateAndInitializeOutputBuffer(v4, a2, &ReportBuffer, &ReportBufferLength);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = ReportBuffer;
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      if ( (unsigned int)hProvider > 5 )
      {
        v24 = 0;
        v22 = "Completed successfully";
        v23 = 23;
        TlgCreateWsz(&v25, this + 12);
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D615, 0LL, 0LL, 4u, &v21);
      }
      if ( v9 )
        operator delete(v9, v10);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v13 = LastError;
      if ( LastError > 0 )
        v13 = (unsigned __int16)LastError | 0x80070000;
      if ( v9 )
        operator delete(v9, v12);
      return v13;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x140,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v5);
    if ( ReportBuffer )
      operator delete(ReportBuffer, v7);
    return v6;
  }
}
