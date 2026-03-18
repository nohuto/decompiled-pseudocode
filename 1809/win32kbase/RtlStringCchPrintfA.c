/*
 * XREFs of RtlStringCchPrintfA @ 0x1C0006AE8
 * Callers:
 *     ??0CHidInput@@IEAA@XZ @ 0x1C0006160 (--0CHidInput@@IEAA@XZ.c)
 *     RIMInitializeAutoLogger @ 0x1C0006394 (RIMInitializeAutoLogger.c)
 *     ?InitRecorderLog@DelayZonePalmRejection@@AEAAXPEAG@Z @ 0x1C00069A0 (-InitRecorderLog@DelayZonePalmRejection@@AEAAXPEAG@Z.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C0006A44 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C012F344 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C012F718 (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C0157054 (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 * Callees:
 *     _vsnprintf @ 0x1C00A66A4 (_vsnprintf.c)
 */

NTSTATUS RtlStringCchPrintfA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszFormat, ...)
{
  NTSTATUS v3; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+58h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v3 = 0;
    v6 = vsnprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 )
      goto LABEL_9;
    if ( v6 == v5 )
    {
      pszDest[v5] = 0;
      return v3;
    }
    if ( v6 > v5 )
    {
LABEL_9:
      pszDest[v5] = 0;
      return -2147483643;
    }
  }
  return v3;
}
