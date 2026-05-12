/*
 * XREFs of StorpTelemetrySendUnitQos @ 0x1C004FD78
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000C660 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     McTemplateK0quuujxxuxxqqq @ 0x1C004BBD4 (McTemplateK0quuujxxuxxqqq.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C004E408 (StorpTelemetryLogUnitQosDataMeasures.c)
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
  v3 = *(_QWORD *)(a1 + 2760);
  v4 = v3 / 0x989680;
  if ( v3 >= 0x98968000 )
    LOBYTE(v4) = -1;
  v8 = v4;
  if ( *(_QWORD *)(a1 + 1840) || *(_QWORD *)(a1 + 1848) || *(_DWORD *)(a1 + 1856) || (*(_BYTE *)(a1 + 162) & 2) != 0 )
  {
    if ( (g_StorpTraceLoggingCriticalEventEnabledSetByRegistry != 1 || g_StorpTraceLoggingCriticalEventEnabled)
      && g_StorpTraceLoggingCriticalEventsLogged < (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( *(_BYTE *)(a1 + 1740) )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
      if ( (*(_BYTE *)(a1 + 162) & 2) != 0 )
        g_StorpTraceLoggingCriticalEventEnabled = -1;
    }
    StorpTelemetryLogUnitQosDataMeasures((const struct _TlgProvider_t *)a1);
    if ( (byte_1C0061744 & 1) != 0 )
      McTemplateK0quuujxxuxxqqq(
        (struct _MCGEN_TRACE_CONTEXT *)(a1 + 1720),
        *(_QWORD *)(a1 + 24),
        v5,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1720,
        *(_QWORD *)(a1 + 1824),
        *(_QWORD *)(a1 + 1832),
        v8,
        *(_QWORD *)(a1 + 1848),
        *(_QWORD *)(a1 + 1840),
        *(_DWORD *)(a1 + 1856),
        *(_DWORD *)(a1 + 1860),
        v7);
  }
  *(_QWORD *)(a1 + 1824) = 0LL;
  result = 0LL;
  *(_QWORD *)(a1 + 1832) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1848) = 0LL;
  *(_DWORD *)(a1 + 1860) = 0;
  return result;
}
