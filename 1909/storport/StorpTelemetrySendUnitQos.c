/*
 * XREFs of StorpTelemetrySendUnitQos @ 0x1C0050EF8
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000C6B4 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     McTemplateK0quuujxxuxxqqq @ 0x1C004CD44 (McTemplateK0quuujxxuxxqqq.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C004F578 (StorpTelemetryLogUnitQosDataMeasures.c)
 */

__int64 __fastcall StorpTelemetrySendUnitQos(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 result; // rax
  int v7; // [rsp+9Ch] [rbp-1Ch]
  char v8; // [rsp+A0h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 24);
  LOBYTE(v7) = 0;
  if ( v1 )
    v7 = *(_DWORD *)(v1 + 5376);
  v3 = *(_QWORD *)(a1 + 3016);
  v4 = v3 / 0x989680;
  if ( v3 >= 0x98968000 )
    LOBYTE(v4) = -1;
  v8 = v4;
  if ( *(_QWORD *)(a1 + 2096) || *(_QWORD *)(a1 + 2104) || *(_DWORD *)(a1 + 2112) || (*(_BYTE *)(a1 + 450) & 2) != 0 )
  {
    if ( (g_StorpTraceLoggingCriticalEventEnabledSetByRegistry != 1 || g_StorpTraceLoggingCriticalEventEnabled)
      && g_StorpTraceLoggingCriticalEventsLogged < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( *(_BYTE *)(a1 + 1996) )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
    }
    StorpTelemetryLogUnitQosDataMeasures((const struct _TlgProvider_t *)a1);
    if ( (byte_1C0062744 & 1) != 0 )
      McTemplateK0quuujxxuxxqqq(
        (struct _MCGEN_TRACE_CONTEXT *)(a1 + 1976),
        *(_QWORD *)(a1 + 24),
        v5,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1976,
        *(_QWORD *)(a1 + 2080),
        *(_QWORD *)(a1 + 2088),
        v8,
        *(_QWORD *)(a1 + 2104),
        *(_QWORD *)(a1 + 2096),
        *(_DWORD *)(a1 + 2112),
        *(_DWORD *)(a1 + 2116),
        v7);
  }
  *(_QWORD *)(a1 + 2080) = 0LL;
  result = 0LL;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  *(_QWORD *)(a1 + 2104) = 0LL;
  *(_DWORD *)(a1 + 2116) = 0;
  return result;
}
