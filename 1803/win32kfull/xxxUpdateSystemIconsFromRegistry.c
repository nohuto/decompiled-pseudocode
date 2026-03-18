/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C0051E94
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0050D10 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     zzzSetSystemImage @ 0x1C006B2C0 (zzzSetSystemImage.c)
 *     RtlInitUnicodeStringOrId @ 0x1C006B768 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadImage @ 0x1C006BC38 (xxxClientLoadImage.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // edi
  int v3; // edx
  int v4; // esi
  __int64 result; // rax
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-248h] BYREF

  for ( i = 0; i < 7; ++i )
  {
    FastGetProfileStringFromIDW(a1, 5LL, *((unsigned __int16 *)&gasysico + 8 * i + 1), &pwsz, SourceString, 260, 0);
    if ( SourceString[0] )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v4 = 592;
    }
    else
    {
      RtlInitUnicodeStringOrId(&DestinationString, (unsigned __int16)(i + 100));
      v4 = 576;
    }
    result = xxxClientLoadImage((unsigned int)&DestinationString, v3, 1, 0, 0, v4);
    if ( result && (*(_DWORD *)(result + 80) & 0x40) == 0 )
      result = zzzSetSystemImage((struct tagCURSOR *)result);
    if ( i == 5 )
    {
      result = gpKernelHandleTable;
      if ( *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)(gpsi + 6968LL)) )
      {
        DpiForSystem = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
        v8 = GetDpiForSystem();
        v9 = GetDpiDependentMetric(20LL, v8);
        result = xxxClientLoadImage((unsigned int)&DestinationString, v10, 1, v9, DpiDependentMetric, v4);
        if ( result )
        {
          if ( (*(_DWORD *)(result + 80) & 0x40) == 0 )
            result = zzzSetSystemImage((struct tagCURSOR *)result);
        }
      }
    }
  }
  return result;
}
