/*
 * XREFs of StorpTelemetrySendUnitErrorData @ 0x1C000C148
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000C6B4 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C000BDD0 (StorpAreTelemetryErrorsEqual.c)
 *     McTemplateK0quuujjqzsssxuqqqqqqquuuuuuqqiqbr29qbr31 @ 0x1C000D2D8 (McTemplateK0quuujjqzsssxuqqqqqqquuuuuuqqiqbr29qbr31.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C000DE2C (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A80 (memmove.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C004EEB8 (StorpTelemetryLogUnitErrorDataCriticalData.c)
 */

__int64 __fastcall StorpTelemetrySendUnitErrorData(__int64 a1)
{
  __int16 v3; // di
  unsigned __int8 i; // bl
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  size_t v7; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+128h] [rbp-80h] BYREF
  _BYTE v9[40]; // [rsp+140h] [rbp-68h] BYREF
  _QWORD v10[36]; // [rsp+168h] [rbp-40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(v10, 0, 0x11EuLL);
  if ( *(_DWORD *)(a1 + 2288) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2280), &LockHandle);
    WORD1(v10[35]) = *(_WORD *)(a1 + 2288) - 1;
    if ( WORD1(v10[35]) >= 0xAu )
      WORD1(v10[35]) = 10;
    v3 = WORD2(v10[35]);
    for ( i = 0; i < 5u; ++i )
    {
      memset(v9, 0, sizeof(v9));
      if ( StorpAreTelemetryErrorsEqual((_BYTE *)(a1 + 8 * (i + 4LL * i + 343)), v9) )
        break;
      ++v3;
    }
    v5 = *(_QWORD *)(a1 + 104);
    WORD2(v10[35]) = v3;
    if ( v5 )
    {
      v10[0] = *(_QWORD *)(v5 + 8);
      *(_OWORD *)((char *)&v10[1] + 1) = *(_OWORD *)(v5 + 16);
    }
    if ( *(_WORD *)(a1 + 114) )
    {
      v6 = *(_WORD *)(a1 + 112);
      v7 = 255LL;
      if ( v6 < 0xFFu )
        v7 = v6;
      memmove((char *)&v10[3] + 2, *(const void **)(a1 + 120), v7);
    }
    if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_23;
    }
    if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 1996) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
      StorpTelemetryLogUnitErrorDataCriticalData(a1, v10);
    else
LABEL_23:
      StorpTelemetryLogUnitErrorDataMeasures(a1, v10);
    if ( (byte_1C0062744 & 2) != 0 )
      McTemplateK0quuujjqzsssxuqqqqqqquuuuuuqqiqbr29qbr31(
        40 * WORD1(v10[35]),
        *(_DWORD *)(a1 + 2316) / 0x2710u,
        a1 + 2344,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1976,
        *(_QWORD *)(a1 + 24) + 5128LL,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4356LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4800LL),
        (__int64)v10,
        (__int64)&v10[1] + 1,
        (__int64)&v10[3] + 2);
    memset((void *)(a1 + 2288), 0, 0x1C8uLL);
    memset((void *)(a1 + 2744), 0, 0xC8uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return 0LL;
}
