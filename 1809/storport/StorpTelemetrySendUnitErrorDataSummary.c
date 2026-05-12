/*
 * XREFs of StorpTelemetrySendUnitErrorDataSummary @ 0x1C002AAD0
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C0002BC0 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C0008BE8 (StorpAreTelemetryErrorsEqual.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C0011CA4 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33 @ 0x1C002933C (McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C004FA4C (StorpTelemetryLogUnitErrorDataCriticalData.c)
 */

__int64 __fastcall StorpTelemetrySendUnitErrorDataSummary(__int64 a1)
{
  __int64 result; // rax
  _WORD *v2; // r12
  __int16 v4; // di
  unsigned __int8 i; // bl
  __int64 v6; // r14
  struct _MCGEN_TRACE_CONTEXT *p_Logger; // rsi
  int v8; // [rsp+80h] [rbp-138h]
  int v9; // [rsp+88h] [rbp-130h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+138h] [rbp-80h] BYREF
  _BYTE v11[40]; // [rsp+150h] [rbp-68h] BYREF
  int v12; // [rsp+1A8h] [rbp-10h] BYREF

  result = 0LL;
  v2 = (_WORD *)(a1 + 2304);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v12 = 0;
  if ( *(_DWORD *)(a1 + 2304) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2296), &LockHandle);
    LOWORD(v12) = *v2 - 1;
    if ( (unsigned __int16)v12 >= 0xAu )
      LOWORD(v12) = 10;
    v4 = HIWORD(v12);
    for ( i = 0; i < 0xAu; ++i )
    {
      memset(v11, 0, sizeof(v11));
      if ( StorpAreTelemetryErrorsEqual((_BYTE *)(a1 + 40 * (i + 69LL)), v11) )
        break;
      ++v4;
    }
    HIWORD(v12) = v4;
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 1996) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
      StorpTelemetryLogUnitErrorDataCriticalData(a1, &v12);
    else
LABEL_18:
      StorpTelemetryLogUnitErrorDataMeasures(a1);
    if ( (byte_1C00617E4 & 2) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      p_Logger = (struct _MCGEN_TRACE_CONTEXT *)&stru_1C0055A88.Logger;
      if ( *(_QWORD *)(v6 + 5272) )
        p_Logger = *(struct _MCGEN_TRACE_CONTEXT **)(v6 + 5272);
      McTemplateK0quuujjqzssszxuqqqqqqqquuuuuuqqiqbr31qbr33(
        40 * (unsigned int)(unsigned __int16)v12,
        a1 + 2360,
        40 * (unsigned int)HIWORD(v12),
        *(_DWORD *)(v6 + 56),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1976,
        v6 + 5256,
        *(_DWORD *)(a1 + 3272),
        *(const struct _MCGEN_TRACE_CONTEXT **)(v6 + 4864),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
        p_Logger,
        v8,
        v9,
        *(_DWORD *)v2,
        *(_DWORD *)(a1 + 2308),
        *(_DWORD *)(a1 + 2312),
        *(_DWORD *)(a1 + 2316),
        *(_DWORD *)(a1 + 2112),
        *(_DWORD *)(a1 + 1272),
        *(_DWORD *)(a1 + 2332),
        *(_DWORD *)(a1 + 2336),
        *(_BYTE *)(a1 + 2325),
        *(_BYTE *)(a1 + 2320),
        *(_BYTE *)(a1 + 2321),
        *(_BYTE *)(a1 + 2322),
        *(_BYTE *)(a1 + 2323),
        *(_BYTE *)(a1 + 2324),
        *(_DWORD *)(a1 + 2328),
        *(_DWORD *)(a1 + 2340),
        *(_QWORD *)(a1 + 2344),
        40 * (unsigned __int16)v12,
        a1 + 2360,
        40 * HIWORD(v12),
        a1 + 2760);
    }
    memset(v2, 0, 0x1C8uLL);
    memset((void *)(a1 + 2760), 0, 0x190uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  return result;
}
