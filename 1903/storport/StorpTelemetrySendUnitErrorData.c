/*
 * XREFs of StorpTelemetrySendUnitErrorData @ 0x1C000C0F4
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000C660 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C000BD7C (StorpAreTelemetryErrorsEqual.c)
 *     McTemplateK0quuujjqzsssxuqqqqqqquuuuuuqqiqbr29qbr31 @ 0x1C000D280 (McTemplateK0quuujjqzsssxuqqqqqqquuuuuuqqiqbr29qbr31.c)
 *     StorpTelemetryLogUnitErrorDataMeasures @ 0x1C000DDD4 (StorpTelemetryLogUnitErrorDataMeasures.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023500 (memmove.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C004DD48 (StorpTelemetryLogUnitErrorDataCriticalData.c)
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
  if ( *(_DWORD *)(a1 + 2032) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2024), &LockHandle);
    WORD1(v10[35]) = *(_WORD *)(a1 + 2032) - 1;
    if ( WORD1(v10[35]) >= 0xAu )
      WORD1(v10[35]) = 10;
    v3 = WORD2(v10[35]);
    for ( i = 0; i < 5u; ++i )
    {
      memset(v9, 0, sizeof(v9));
      if ( StorpAreTelemetryErrorsEqual((_BYTE *)(a1 + 8 * (i + 4LL * i + 311)), v9) )
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
    if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 1740) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 162) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
      StorpTelemetryLogUnitErrorDataCriticalData(a1, v10);
    else
LABEL_23:
      StorpTelemetryLogUnitErrorDataMeasures(a1, v10);
    if ( (byte_1C0061744 & 2) != 0 )
      McTemplateK0quuujjqzsssxuqqqqqqquuuuuuqqiqbr29qbr31(
        40 * WORD1(v10[35]),
        *(_DWORD *)(a1 + 2060) / 0x2710u,
        a1 + 2088,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1720,
        *(_QWORD *)(a1 + 24) + 5128LL,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4356LL),
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4800LL),
        (__int64)v10,
        (__int64)&v10[1] + 1,
        (__int64)&v10[3] + 2);
    memset((void *)(a1 + 2032), 0, 0x1C8uLL);
    memset((void *)(a1 + 2488), 0, 0xC8uLL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return 0LL;
}
