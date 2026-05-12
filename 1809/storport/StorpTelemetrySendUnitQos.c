/*
 * XREFs of StorpTelemetrySendUnitQos @ 0x1C00519B4
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C0002BC0 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     McTemplateK0zqjuuujsssxxuxxqqq @ 0x1C002A704 (McTemplateK0zqjuuujsssxxuxxqqq.c)
 *     StorpTelemetryLogUnitQosDataMeasures @ 0x1C00500CC (StorpTelemetryLogUnitQosDataMeasures.c)
 */

__int64 __fastcall StorpTelemetrySendUnitQos(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  int v7; // [rsp+B0h] [rbp-18h]
  char v8; // [rsp+B8h] [rbp-10h]

  LOBYTE(v7) = 0;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    v7 = *(_DWORD *)(v2 + 5512);
  v3 = *(_QWORD *)(a1 + 3232);
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
    if ( (byte_1C00617E4 & 1) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 24);
      McTemplateK0zqjuuujsssxxuxxqqq(
        a1 + 186,
        a1 + 169,
        a1 + 160,
        *(const struct _MCGEN_TRACE_CONTEXT **)(v5 + 4864),
        *(_DWORD *)(v5 + 56),
        v5 + 5256,
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1976,
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
        *(_QWORD *)(a1 + 2080),
        *(_QWORD *)(a1 + 2088),
        v8,
        *(_QWORD *)(a1 + 2104),
        *(_QWORD *)(a1 + 2096),
        *(_DWORD *)(a1 + 2112),
        *(_DWORD *)(a1 + 2116),
        v7);
    }
  }
  *(_QWORD *)(a1 + 2080) = 0LL;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  *(_QWORD *)(a1 + 2104) = 0LL;
  *(_DWORD *)(a1 + 2116) = 0;
  return 0LL;
}
