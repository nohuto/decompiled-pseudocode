/*
 * XREFs of ?ExtractReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@IPEBXKPEAUUsageValue@@@Z @ 0x1C022D83C
 * Callers:
 *     ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1C022DC30 (-GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFe.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall ExtractReportUsages(
        enum _HIDP_REPORT_TYPE a1,
        struct _HIDP_PREPARSED_DATA *a2,
        const struct UsageValueInfo *a3,
        __int64 a4,
        CHAR *Report,
        ULONG ReportLength,
        ULONG *a7)
{
  USHORT *v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rbp
  ULONG *i; // rdi
  NTSTATUS UsageValue; // eax
  NTSTATUS v14; // [rsp+40h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-70h] BYREF
  NTSTATUS *v16; // [rsp+68h] [rbp-50h]
  int v17; // [rsp+70h] [rbp-48h]
  int v18; // [rsp+74h] [rbp-44h]

  v7 = (USHORT *)((char *)a3 + 10);
  v8 = 0;
  v9 = 0LL;
  for ( i = a7; ; i += 2 )
  {
    *(_BYTE *)i = 0;
    if ( *((_BYTE *)v7 - 10) )
      break;
LABEL_5:
    v9 = (unsigned int)(v9 + 1);
    v7 += 38;
    if ( (unsigned int)v9 >= 7 )
      return v8;
  }
  UsageValue = HidP_GetUsageValue(HidP_Feature, *(v7 - 3), *v7, v7[25], &a7[2 * v9 + 1], a2, Report, ReportLength);
  v8 = UsageValue;
  if ( UsageValue >= 0 )
  {
    *(_BYTE *)i = 1;
    goto LABEL_5;
  }
  if ( dword_1C030C390 > 2u )
  {
    v18 = 0;
    v14 = UsageValue;
    v16 = &v14;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
  }
  return v8;
}
