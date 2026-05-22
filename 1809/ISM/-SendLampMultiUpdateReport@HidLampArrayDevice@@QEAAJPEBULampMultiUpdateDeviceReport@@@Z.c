/*
 * XREFs of ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x18007A448
 * Callers:
 *     ?SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ @ 0x18007E0F0 (-SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x18007FDF8 (-CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceR.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampMultiUpdateReport(
        HidLampArrayDevice *this,
        const struct LampMultiUpdateDeviceReport *a2)
{
  const WCHAR *v2; // rsi
  __int64 v5; // rax
  const WCHAR *v6; // rdx
  const WCHAR *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  const struct std::nothrow_t *v11; // rdx
  PVOID v13; // rbx
  const struct std::nothrow_t *v14; // rdx
  signed int LastError; // eax
  const struct std::nothrow_t *v16; // rdx
  unsigned int v17; // edi
  __int64 v18; // rax
  ULONG ReportBufferLength; // [rsp+30h] [rbp-59h] BYREF
  PVOID ReportBuffer; // [rsp+38h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  const char *v22; // [rsp+60h] [rbp-29h]
  __int64 v23; // [rsp+68h] [rbp-21h]
  const WCHAR *v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+78h] [rbp-11h]
  int v26; // [rsp+7Ch] [rbp-Dh]
  EVENT_DATA_DESCRIPTOR v27; // [rsp+80h] [rbp-9h] BYREF
  const char *v28; // [rsp+A0h] [rbp+17h]
  __int64 v29; // [rsp+A8h] [rbp+1Fh]
  const WCHAR *v30; // [rsp+B0h] [rbp+27h]
  int v31; // [rsp+B8h] [rbp+2Fh]
  int v32; // [rsp+BCh] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = &sourceString;
  if ( (unsigned int)hProvider > 5 )
  {
    v23 = 8LL;
    v22 = "Started";
    LODWORD(v5) = 0;
    v6 = &sourceString;
    v7 = (const WCHAR *)((char *)this + 24);
    if ( v7 )
    {
      v6 = v7;
      v5 = -1LL;
      do
        ++v5;
      while ( v7[v5] );
    }
    v24 = v6;
    v25 = 2 * v5 + 2;
    v26 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18016898E, 0LL, 0LL, 4u, &pData);
  }
  v8 = *((_QWORD *)this + 76);
  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v9 = HidLampMultiUpdateReportParser::CreateAndInitializeOutputBuffer(v8, a2, &ReportBuffer, &ReportBufferLength);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v13 = ReportBuffer;
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      if ( (unsigned int)hProvider > 5 )
      {
        v29 = 23LL;
        v28 = "Completed successfully";
        LODWORD(v18) = 0;
        if ( this != (HidLampArrayDevice *)-24LL )
        {
          v2 = (const WCHAR *)((char *)this + 24);
          v18 = -1LL;
          do
            ++v18;
          while ( *((_WORD *)this + v18 + 12) );
        }
        v30 = v2;
        v31 = 2 * v18 + 2;
        v32 = 0;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18016898E, 0LL, 0LL, 4u, &v27);
      }
      if ( v13 )
        operator delete(v13, v14);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v17 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v17 = LastError;
      if ( v13 )
        operator delete(v13, v16);
      return v17;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v9);
    if ( ReportBuffer )
      operator delete(ReportBuffer, v11);
    return v10;
  }
}
