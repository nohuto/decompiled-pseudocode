/*
 * XREFs of rimExtractScantime @ 0x1C01574E0
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C0159374 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     rimHidP_GetUsageValue @ 0x1C0145380 (rimHidP_GetUsageValue.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C0154B50 (RIMDivideToCeilingOrNearestInt.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // r8
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  unsigned int v19; // r10d
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // edi
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // edx
  unsigned int v27; // edi
  unsigned int v28; // r8d
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 result; // rax

  v7 = a6;
  LODWORD(a6) = 0;
  ++*(_DWORD *)(a2 + 808);
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, (unsigned int *)&a6, a3, a4, a5);
  v13 = a7;
  if ( UsageValue < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 68, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
    }
    goto LABEL_39;
  }
  v14 = *(unsigned int *)(a2 + 808);
  if ( (_DWORD)v14 == 1 )
  {
    if ( *(_DWORD *)(a2 + 784) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
      if ( *(_DWORD *)(a2 + 808) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    }
    if ( *(_DWORD *)(a2 + 792) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    if ( *(_DWORD *)(a2 + 788) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    if ( *(_DWORD *)(a2 + 796) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    if ( *(_DWORD *)(a2 + 804) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    if ( (*(_DWORD *)(a2 + 832) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    *(_DWORD *)(a2 + 784) = *v13;
    *(_QWORD *)(a2 + 824) = *v7;
    v15 = (int)a6;
    *(_DWORD *)(a2 + 796) = (_DWORD)a6;
    *(_DWORD *)(a2 + 800) = v15;
    goto LABEL_40;
  }
  v16 = *(_DWORD *)(a2 + 832);
  if ( (v16 & 1) != 0 )
    goto LABEL_30;
  v17 = *(_DWORD *)(a2 + 796);
  v18 = *(_DWORD *)(a2 + 840);
  LODWORD(v11) = v17 % v18;
  if ( (unsigned int)a6 < v17 % v18 )
    ++*(_DWORD *)(a2 + 812);
  v19 = (_DWORD)a6 + *(_DWORD *)(a2 + 812) * v18;
  if ( v19 <= v17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 65, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
      v16 = *(_DWORD *)(a2 + 832);
    }
    v23 = v16 | 1;
    *(_DWORD *)(a2 + 832) = v23;
  }
  else
  {
    LODWORD(a7) = 0;
    *(_DWORD *)(a2 + 796) = v19;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(
                         v19 - *(_DWORD *)(a2 + 800),
                         (unsigned int)(v14 - 1),
                         1LL,
                         (int *)&a7) )
    {
      v22 = (int)a7;
      if ( !(_DWORD)a7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v11, v21);
      *(_DWORD *)(a2 + 804) = v22;
    }
    v23 = *(_DWORD *)(a2 + 832);
  }
  if ( (v23 & 1) != 0 )
  {
LABEL_30:
    v24 = *(_DWORD *)(a2 + 804);
    if ( v24 && *(_DWORD *)(a2 + 808) >= 5u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = 4;
        WPP_RECORDER_SF_D(
          (_DWORD)gRimLog,
          v11,
          1,
          66,
          (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
          *(_DWORD *)(a2 + 804));
        v24 = *(_DWORD *)(a2 + 804);
      }
      *(_DWORD *)(a2 + 796) += v24;
      goto LABEL_40;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v11, 1, 67, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids, 80);
    }
LABEL_39:
    *(_DWORD *)(a2 + 796) += 80;
  }
LABEL_40:
  if ( *(_DWORD *)(a2 + 808) <= 1u )
  {
    v28 = *v13;
    v30 = *v7;
  }
  else
  {
    v25 = (unsigned int)(*(_DWORD *)(a2 + 796) - *(_DWORD *)(a2 + 800));
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v25, 10LL, 0LL, (int *)&a7) )
    {
      v27 = (unsigned int)a7;
    }
    else
    {
      v27 = 8;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 4;
        WPP_RECORDER_SF_D((_DWORD)gRimLog, v26, 1, 69, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids, 8);
      }
    }
    v28 = v27 + *(_DWORD *)(a2 + 784);
    v29 = v27 * *(_QWORD *)(a1 + 520);
    *v13 = v28;
    v30 = *(_QWORD *)(a2 + 824) + v29 / 0x3E8;
    *v7 = v30;
  }
  result = *(unsigned int *)(a2 + 788);
  *(_DWORD *)(a2 + 792) = result;
  *(_DWORD *)(a2 + 788) = v28;
  *(_QWORD *)(a2 + 816) = v30;
  return result;
}
