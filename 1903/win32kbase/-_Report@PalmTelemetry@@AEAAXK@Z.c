/*
 * XREFs of ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C015C3FC
 * Callers:
 *     ?Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z @ 0x1C015C02C (-Update@PalmTelemetry@@QEAAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHPD_CONTACT@@H@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 *     ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C015BF1C (-Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1C015BF54 (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C015BFB4 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ApiSetGetUserHandedness @ 0x1C019F6E4 (ApiSetGetUserHandedness.c)
 */

void __fastcall PalmTelemetry::_Report(PalmTelemetry *this, int a2)
{
  int v2; // eax
  char *v3; // r12
  unsigned __int64 v4; // r15
  unsigned int v6; // r13d
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // esi
  int v11; // edi
  int UserHandedness; // eax
  __int64 v13; // rdx
  int v14; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  char *Dest; // [rsp+70h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+C8h] [rbp-40h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = (char *)this + 28;
  v4 = 0LL;
  Dest = (char *)this + 28;
  v15 = 0LL;
  if ( !v2 || (unsigned int)(a2 - v2) >= 0x2710 )
  {
    v6 = 0;
    if ( *((_DWORD *)this + 3) )
    {
      do
      {
        v7 = (v6 + *((_DWORD *)this + 6)) % 0x1AA;
        if ( v6 )
          v14 = 0;
        else
          v14 = *((_DWORD *)this + 519);
        v8 = 3 * v7;
        v9 = 3 * v7;
        v10 = *((_DWORD *)this + 6 * v7 + 524) / 100;
        v11 = *((_DWORD *)this + 6 * v7 + 523) / 100;
        UserHandedness = ApiSetGetUserHandedness();
        RtlStringCchPrintfA(
          Dest,
          2048 - v4,
          "%lu,%lu,0x%x,0x%x,%lu,%lu,%lu,%lu;",
          UserHandedness,
          *((_DWORD *)this + 2 * v8 + 520),
          *((_DWORD *)this + 2 * v8 + 521),
          *((_DWORD *)this + 2 * v9 + 522),
          v11,
          v10,
          *((_DWORD *)this + 2 * v8 + 525),
          v14);
        RtlStringCchLengthA(v3, v13, &v15);
        v4 = v15;
        if ( v15 + 48 >= 0x800 )
        {
          Feature_PenTapped_ReportUsage();
          if ( dword_1C020F538 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F538, 0x400000000000uLL) )
          {
            TlgCreateSz(&pDesc, v3);
            TlgWrite((TraceLoggingHProvider)&dword_1C020F538, &unk_1C01E5D42, 0LL, 0LL, 3u, &pData);
          }
          memset(v3, 0, 0x800uLL);
          v4 = 0LL;
          v15 = 0LL;
        }
        ++v6;
        Dest = &v3[v4];
      }
      while ( v6 < *((_DWORD *)this + 3) );
      if ( v4 )
      {
        Feature_PenTapped_ReportUsage();
        if ( dword_1C020F538 > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020F538, 0x400000000000uLL) )
          {
            TlgCreateSz(&v20, v3);
            TlgWrite((TraceLoggingHProvider)&dword_1C020F538, &unk_1C01E5D42, 0LL, 0LL, 3u, &v19);
          }
        }
      }
    }
    *((_DWORD *)this + 4) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
}
