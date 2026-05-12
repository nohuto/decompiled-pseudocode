/*
 * XREFs of StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002468
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00023B0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C00021FC (StorpTelemetryDeviceStatisticsCommand.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A80 (memmove.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     McTemplateK0quuujjzsssxqqbr12qbr14qbr16qbr18qbr20qbr22qbr24 @ 0x1C004C788 (McTemplateK0quuujjzsssxqqbr12qbr14qbr16qbr18qbr20qbr22qbr24.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C004E3BC (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C004E93C (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 */

void __fastcall StorpTelemetrySendUnitDeviceStatistics(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v3; // r12
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  char v7; // r8
  void *v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  size_t v11; // r8
  char *v12; // [rsp+F8h] [rbp-80h]
  _QWORD v13[46]; // [rsp+108h] [rbp-70h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( (*(_DWORD *)(a1 + 1992) & 4) != 0 )
    return;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x65546152u);
  v12 = PoolWithTag;
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  memset(PoolWithTag, 0, 0x1000uLL);
  v13[36] = v3;
  v13[40] = v3 + 2048;
  v13[37] = v3 + 512;
  v13[41] = v3 + 2560;
  v13[38] = v3 + 1024;
  v13[42] = v3 + 3072;
  v13[39] = v3 + 1536;
  v13[43] = v3 + 3584;
  v4 = StorpTelemetryDeviceStatisticsCommand(a1, (__int64)v3, 0);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741670 )
    {
      v5 = *(_DWORD *)(a1 + 1992);
      if ( (v5 & 1) == 0 )
        *(_DWORD *)(a1 + 1992) = v5 | 4;
    }
    goto LABEL_7;
  }
  if ( *(_BYTE *)(v13[36] + 8LL) <= 1u )
    goto LABEL_7;
  v6 = 0;
  while ( v6 <= 7 )
  {
    v7 = *(_BYTE *)(v6 + v13[36] + 9LL);
    if ( v7 == 1 )
    {
      if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v13[37], v7) >= 0 )
      {
        LOWORD(v13[44]) = 88;
        goto LABEL_41;
      }
      v8 = (void *)v13[37];
      goto LABEL_39;
    }
    switch ( *(_BYTE *)(v6 + v13[36] + 9LL) )
    {
      case 2:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v13[38], v7) < 0 )
        {
          v8 = (void *)v13[38];
          goto LABEL_39;
        }
        WORD1(v13[44]) = 24;
        break;
      case 3:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v13[39], v7) < 0 )
        {
          v8 = (void *)v13[39];
          goto LABEL_39;
        }
        WORD2(v13[44]) = 72;
        break;
      case 4:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v13[40], v7) < 0 )
        {
          v8 = (void *)v13[40];
          goto LABEL_39;
        }
        HIWORD(v13[44]) = 24;
        break;
      case 5:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v13[41], v7) < 0 )
        {
          v8 = (void *)v13[41];
          goto LABEL_39;
        }
        LOWORD(v13[45]) = 112;
        break;
      case 6:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v13[42], v7) < 0 )
        {
          v8 = (void *)v13[42];
          goto LABEL_39;
        }
        WORD1(v13[45]) = 32;
        break;
      case 7:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v13[43], v7) < 0 )
        {
          v8 = (void *)v13[43];
LABEL_39:
          memset(v8, 0, 0x200uLL);
          break;
        }
        WORD2(v13[45]) = 16;
        break;
    }
LABEL_41:
    if ( ++v6 >= *(unsigned __int8 *)(v13[36] + 8LL) )
      break;
  }
  v3 = v12;
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 )
  {
    v13[0] = *(_QWORD *)(v9 + 8);
    *(_OWORD *)((char *)&v13[1] + 1) = *(_OWORD *)(v9 + 16);
  }
  if ( *(_WORD *)(a1 + 114) )
  {
    v10 = *(_WORD *)(a1 + 112);
    v11 = 255LL;
    if ( v10 < 0xFFu )
      v11 = v10;
    memmove((char *)&v13[3] + 2, *(const void **)(a1 + 120), v11);
  }
  if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
    || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
  {
    goto LABEL_60;
  }
  if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( *(_BYTE *)(a1 + 1996) )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( g_StorpTraceLoggingCriticalEventEnabled )
    StorpTelemetryLogUnitDeviceStatisticsMeasures(a1, v13);
  else
LABEL_60:
    StorpTelemetryLogUnitDeviceStatisticsCriticalData(a1, v13);
  if ( (byte_1C0062744 & 8) != 0 )
    McTemplateK0quuujjzsssxqqbr12qbr14qbr16qbr18qbr20qbr22qbr24(
      WORD2(v13[45]),
      WORD1(v13[45]),
      LOWORD(v13[45]),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 1976,
      *(_QWORD *)(a1 + 24) + 5128LL,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4800LL),
      (__int64)v13,
      (__int64)&v13[1] + 1,
      (__int64)&v13[3] + 2);
LABEL_7:
  ExFreePoolWithTag(v3, 0x65546152u);
}
