/*
 * XREFs of ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00B7784
 * Callers:
 *     ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C00B74D0 (-GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C00B77DC (RtlStringVPrintfWorkerW.c)
 */

__int64 RtlStringCchPrintfW(unsigned __int16 *a1, size_t a2, const unsigned __int16 *a3, ...)
{
  int v3; // r9d
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringVPrintfWorkerW(a1, a2, 0LL, a3, va);
  }
  return (unsigned int)v3;
}
