/*
 * XREFs of ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0085748
 * Callers:
 *     ?GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C0085434 (-GetAlpcPortName@ServerPorts@CoreMessagingK@@CAJPEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C00A481C (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C00857A0 (RtlStringVPrintfWorkerW.c)
 */

__int64 RtlStringCbPrintfW(unsigned __int16 *a1, unsigned __int64 a2, size_t *a3, ...)
{
  size_t v3; // rdx
  int v4; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringVPrintfWorkerW(a1, v3, a3, (NTSTRSAFE_PCWSTR)a3, va);
  }
  return (unsigned int)v4;
}
