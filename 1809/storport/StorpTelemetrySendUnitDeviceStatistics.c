/*
 * XREFs of StorpTelemetrySendUnitDeviceStatistics @ 0x1C0010994
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00108E0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C0001D78 (StorpTelemetryDeviceStatisticsCommand.c)
 *     McTemplateK0quuujjzsssxqqbr12qbr14qbr16qbr18qbr20qbr22qbr24 @ 0x1C0029CD8 (McTemplateK0quuujjzsssxqqbr12qbr14qbr16qbr18qbr20qbr22qbr24.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C004EFB8 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C004F504 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 */

void __fastcall StorpTelemetrySendUnitDeviceStatistics(__int64 a1)
{
  _BYTE *PoolWithTag; // rax
  _BYTE *v3; // rbx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdi
  char v7; // r8
  void *v8; // rcx
  _QWORD v9[16]; // [rsp+F0h] [rbp-80h] BYREF
  _BYTE *v11; // [rsp+190h] [rbp+20h]

  memset(v9, 0, 0x50uLL);
  if ( (*(_DWORD *)(a1 + 1992) & 4) != 0 )
    return;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x65546152u);
  v11 = PoolWithTag;
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  memset(PoolWithTag, 0, 0x1000uLL);
  v9[0] = v3;
  v9[5] = v3 + 2560;
  v9[1] = v3 + 512;
  v9[6] = v3 + 3072;
  v9[2] = v3 + 1024;
  v9[7] = v3 + 3584;
  v9[3] = v3 + 1536;
  v9[4] = v3 + 2048;
  v4 = StorpTelemetryDeviceStatisticsCommand(a1, (__int64)v3, 0);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741670 )
    {
      v5 = *(_DWORD *)(a1 + 1992);
      if ( (v5 & 1) == 0 )
        *(_DWORD *)(a1 + 1992) = v5 | 4;
    }
    goto LABEL_54;
  }
  if ( v3[8] <= 1u )
    goto LABEL_54;
  v6 = 0LL;
  while ( (unsigned int)v6 <= 7 )
  {
    v7 = v3[v6 + 9];
    if ( v7 == 1 )
    {
      if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, (__int64)(v3 + 512), v7) >= 0 )
      {
        LOWORD(v9[8]) = 88;
        goto LABEL_39;
      }
      v8 = v3 + 512;
LABEL_19:
      memset(v8, 0, 0x200uLL);
      goto LABEL_39;
    }
    switch ( v3[v6 + 9] )
    {
      case 2:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, (__int64)(v3 + 1024), v7) >= 0 )
        {
          WORD1(v9[8]) = 24;
          break;
        }
        v8 = v3 + 1024;
        goto LABEL_19;
      case 3:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, (__int64)(v3 + 1536), v7) >= 0 )
        {
          WORD2(v9[8]) = 72;
          break;
        }
        v8 = v3 + 1536;
        goto LABEL_19;
      case 4:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, (__int64)(v3 + 2048), v7) >= 0 )
        {
          HIWORD(v9[8]) = 24;
          break;
        }
        v8 = v3 + 2048;
        goto LABEL_19;
      case 5:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, (__int64)(v3 + 2560), v7) >= 0 )
        {
          LOWORD(v9[9]) = 112;
          break;
        }
        v8 = v3 + 2560;
        goto LABEL_19;
      case 6:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, (__int64)(v3 + 3072), v7) >= 0 )
        {
          WORD1(v9[9]) = 32;
          break;
        }
        v8 = v3 + 3072;
        goto LABEL_19;
      case 7:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, (__int64)(v3 + 3584), v7) >= 0 )
        {
          WORD2(v9[9]) = 16;
          break;
        }
        v8 = v3 + 3584;
        goto LABEL_19;
    }
LABEL_39:
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= (unsigned __int8)v3[8] )
      break;
  }
  if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !g_StorpTraceLoggingCriticalEventEnabled
    || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
  {
    goto LABEL_51;
  }
  if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( *(_BYTE *)(a1 + 1996) )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
    g_StorpTraceLoggingCriticalEventEnabled = -1;
  if ( g_StorpTraceLoggingCriticalEventEnabled )
    StorpTelemetryLogUnitDeviceStatisticsMeasures(a1, v9);
  else
LABEL_51:
    StorpTelemetryLogUnitDeviceStatisticsCriticalData(a1, v9);
  if ( (byte_1C00617E4 & 8) != 0 )
  {
    McTemplateK0quuujjzsssxqqbr12qbr14qbr16qbr18qbr20qbr22qbr24(
      *(_QWORD *)(a1 + 24),
      a1,
      LOWORD(v9[9]),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 1976,
      *(_QWORD *)(a1 + 24) + 5256LL,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4864LL),
      a1 + 160,
      a1 + 169,
      a1 + 186);
    v3 = v11;
  }
LABEL_54:
  ExFreePoolWithTag(v3, 0x65546152u);
}
