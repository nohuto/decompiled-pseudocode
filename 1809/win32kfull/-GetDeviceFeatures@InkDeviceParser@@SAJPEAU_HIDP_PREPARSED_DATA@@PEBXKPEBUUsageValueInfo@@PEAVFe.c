/*
 * XREFs of ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1C022DC30
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02387C0 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?ExtractReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@IPEBXKPEAUUsageValue@@@Z @ 0x1C022D83C (-ExtractReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@IPEB.c)
 */

__int64 __fastcall InkDeviceParser::GetDeviceFeatures(
        struct _HIDP_PREPARSED_DATA *a1,
        CHAR *a2,
        ULONG a3,
        const struct UsageValueInfo *a4,
        struct InkDevice::Features *a5)
{
  int ReportUsages; // eax
  unsigned int v7; // edi
  int v8; // eax
  int v10; // [rsp+40h] [rbp-41h] BYREF
  ULONG v11[9]; // [rsp+48h] [rbp-39h] BYREF
  unsigned int v12; // [rsp+6Ch] [rbp-15h]
  int v13; // [rsp+74h] [rbp-Dh]
  int v14; // [rsp+7Ch] [rbp-5h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-1h] BYREF
  int *v16; // [rsp+A0h] [rbp+1Fh]
  int v17; // [rsp+A8h] [rbp+27h]
  int v18; // [rsp+ACh] [rbp+2Bh]

  ReportUsages = ExtractReportUsages((enum _HIDP_REPORT_TYPE)a1, a1, a4, (__int64)a4, a2, a3, v11);
  v7 = ReportUsages;
  if ( ReportUsages >= 0 )
  {
    *(_DWORD *)a5 = v11[1];
    *((_DWORD *)a5 + 1) = v11[3];
    *((_DWORD *)a5 + 2) = v11[5];
    *((_DWORD *)a5 + 3) = v11[7];
    *((_DWORD *)a5 + 4) = HIWORD(v12);
    *((_DWORD *)a5 + 5) = (unsigned __int16)v12;
    v8 = 1;
    *((_DWORD *)a5 + 7) = *((_BYTE *)a4 + 380) != 0 ? v13 : 0;
    if ( *((_BYTE *)a4 + 456) )
      v8 = v14;
    *((_DWORD *)a5 + 6) = v8;
  }
  else if ( dword_1C030C390 > 2u )
  {
    v18 = 0;
    v10 = ReportUsages;
    v16 = &v10;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
  }
  return v7;
}
