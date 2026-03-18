/*
 * XREFs of ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0107D9C
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C01079CC (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RtlStringCchPrintfA @ 0x1C00AA79C (RtlStringCchPrintfA.c)
 *     _TlgCreateSz @ 0x1C00BB800 (_TlgCreateSz.c)
 *     ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C0107994 (-Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z.c)
 *     RtlStringCchLengthA @ 0x1C01083F4 (RtlStringCchLengthA.c)
 *     ApiSetGetUserHandedness @ 0x1C0140B10 (ApiSetGetUserHandedness.c)
 */

void __fastcall PalmTelemetry::_Report(PalmTelemetry *this, int a2)
{
  int v2; // eax
  char *v3; // r12
  size_t v4; // r15
  unsigned int v6; // r13d
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // esi
  int v11; // edi
  int UserHandedness; // eax
  size_t v13; // rdx
  LPCGUID v14; // r9
  LPCGUID v15; // r9
  int v16; // [rsp+60h] [rbp-A8h]
  size_t pcchLength; // [rsp+68h] [rbp-A0h] BYREF
  NTSTRSAFE_PSTR pszDest; // [rsp+70h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v21; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+C8h] [rbp-40h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = (char *)this + 28;
  v4 = 0LL;
  pszDest = (char *)this + 28;
  pcchLength = 0LL;
  if ( !v2 || (unsigned int)(a2 - v2) >= 0x2710 )
  {
    v6 = 0;
    if ( *((_DWORD *)this + 3) )
    {
      do
      {
        v7 = (v6 + *((_DWORD *)this + 6)) % 0x1AA;
        if ( v6 )
          v16 = 0;
        else
          v16 = *((_DWORD *)this + 519);
        v8 = 3 * v7;
        v9 = 3 * v7;
        v10 = *((_DWORD *)this + 6 * v7 + 524) / 100;
        v11 = *((_DWORD *)this + 6 * v7 + 523) / 100;
        UserHandedness = ApiSetGetUserHandedness();
        RtlStringCchPrintfA(
          pszDest,
          2048 - v4,
          "%lu,%lu,0x%x,0x%x,%lu,%lu,%lu,%lu;",
          UserHandedness,
          *((_DWORD *)this + 2 * v8 + 520),
          *((_DWORD *)this + 2 * v8 + 521),
          *((_DWORD *)this + 2 * v9 + 522),
          v11,
          v10,
          *((_DWORD *)this + 2 * v8 + 525),
          v16);
        RtlStringCchLengthA(v3, v13, &pcchLength);
        v4 = pcchLength;
        if ( pcchLength + 48 >= 0x800 )
        {
          Feature_PenTapped_ReportUsage();
          if ( dword_1C019EC40 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EC40, 0x400000000000uLL) )
          {
            TlgCreateSz(&pDesc, v3);
            TlgWrite((TraceLoggingHProvider)&dword_1C019EC40, &unk_1C0178BED, 0LL, v14, 3u, &pData);
          }
          memset(v3, 0, 0x800uLL);
          v4 = 0LL;
          pcchLength = 0LL;
        }
        ++v6;
        pszDest = &v3[v4];
      }
      while ( v6 < *((_DWORD *)this + 3) );
      if ( v4 )
      {
        Feature_PenTapped_ReportUsage();
        if ( dword_1C019EC40 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EC40, 0x400000000000uLL) )
          {
            TlgCreateSz(&v22, v3);
            TlgWrite((TraceLoggingHProvider)&dword_1C019EC40, &unk_1C0178BED, 0LL, v15, 3u, &v21);
          }
        }
      }
    }
    *((_DWORD *)this + 4) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
}
