/*
 * XREFs of rimExtractScantime @ 0x1C0102018
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C01035FC (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     rimHidP_GetUsageValue @ 0x1C00F0DA4 (rimHidP_GetUsageValue.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C00FFB84 (RIMDivideToCeilingOrNearestInt.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimExtractScantime(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        char *a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned int *a7)
{
  unsigned __int64 *v7; // rsi
  int UsageValue; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int *v13; // r14
  int v14; // r9d
  int v15; // eax
  unsigned int v16; // r10d
  unsigned int v17; // ecx
  int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rcx
  unsigned int v24; // edi
  unsigned int v25; // r8d
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 result; // rax
  __int64 v29; // [rsp+28h] [rbp-30h]

  v7 = a6;
  LODWORD(a6) = 0;
  ++*(_DWORD *)(a2 + 768);
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, (unsigned int *)&a6, a3, a4, a5);
  v13 = a7;
  if ( UsageValue < 0 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      0x3Cu,
      (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
LABEL_32:
    *(_DWORD *)(a2 + 756) += 80;
    goto LABEL_33;
  }
  v14 = *(_DWORD *)(a2 + 768);
  if ( v14 == 1 )
  {
    if ( *(_DWORD *)(a2 + 744) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
      if ( *(_DWORD *)(a2 + 768) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    }
    if ( *(_DWORD *)(a2 + 752) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    if ( *(_DWORD *)(a2 + 748) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    if ( *(_DWORD *)(a2 + 756) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    if ( *(_DWORD *)(a2 + 764) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    if ( (*(_DWORD *)(a2 + 792) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    *(_DWORD *)(a2 + 744) = *v13;
    *(_QWORD *)(a2 + 784) = *v7;
    v15 = (int)a6;
    *(_DWORD *)(a2 + 756) = (_DWORD)a6;
    *(_DWORD *)(a2 + 760) = v15;
    goto LABEL_33;
  }
  if ( (*(_DWORD *)(a2 + 792) & 1) != 0 )
    goto LABEL_28;
  v16 = *(_DWORD *)(a2 + 756);
  v17 = *(_DWORD *)(a2 + 800);
  v18 = *(_DWORD *)(a2 + 772);
  if ( (unsigned int)a6 < v16 % v17 )
    *(_DWORD *)(a2 + 772) = ++v18;
  v19 = (_DWORD)a6 + v18 * v17;
  if ( v19 <= v16 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x39u,
      (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
    *(_DWORD *)(a2 + 792) |= 1u;
  }
  else
  {
    LODWORD(a7) = 0;
    *(_DWORD *)(a2 + 756) = v19;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(
                         v19 - *(_DWORD *)(a2 + 760),
                         (unsigned int)(v14 - 1),
                         1,
                         (unsigned int *)&a7) )
    {
      v22 = (int)a7;
      if ( !(_DWORD)a7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
      *(_DWORD *)(a2 + 764) = v22;
    }
  }
  if ( (*(_DWORD *)(a2 + 792) & 1) != 0 )
  {
LABEL_28:
    if ( *(_DWORD *)(a2 + 764) && *(_DWORD *)(a2 + 768) >= 5u )
    {
      LODWORD(v29) = *(_DWORD *)(a2 + 764);
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x3Au,
        (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
        v29);
      *(_DWORD *)(a2 + 756) += *(_DWORD *)(a2 + 764);
      goto LABEL_33;
    }
    LODWORD(v29) = 80;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x3Bu,
      (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
      v29);
    goto LABEL_32;
  }
LABEL_33:
  if ( *(_DWORD *)(a2 + 768) <= 1u )
  {
    v25 = *v13;
    v27 = *v7;
  }
  else
  {
    v23 = (unsigned int)(*(_DWORD *)(a2 + 756) - *(_DWORD *)(a2 + 760));
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v23, 10LL, 0, (unsigned int *)&a7) )
    {
      v24 = (unsigned int)a7;
    }
    else
    {
      v24 = 8;
      LODWORD(v29) = 8;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x3Du,
        (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
        v29);
    }
    v25 = v24 + *(_DWORD *)(a2 + 744);
    v26 = v24 * *(_QWORD *)(a1 + 504);
    *v13 = v25;
    v27 = *(_QWORD *)(a2 + 784) + v26 / 0x3E8;
    *v7 = v27;
  }
  result = *(unsigned int *)(a2 + 748);
  *(_DWORD *)(a2 + 752) = result;
  *(_DWORD *)(a2 + 748) = v25;
  *(_QWORD *)(a2 + 776) = v27;
  return result;
}
