/*
 * XREFs of rimExtractScantime @ 0x1C012A79C
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C012C434 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     rimHidP_GetUsageValue @ 0x1C011C898 (rimHidP_GetUsageValue.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C0127F58 (RIMDivideToCeilingOrNearestInt.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned int v16; // r9d
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
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
  ++*(_DWORD *)(a2 + 800);
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, (unsigned int *)&a6, a3, a4, a5);
  v13 = a7;
  if ( UsageValue < 0 )
  {
    WPP_RECORDER_SF_(gRimLog, 2u, 0x13u, 0x42u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
LABEL_32:
    *(_DWORD *)(a2 + 788) += 80;
    goto LABEL_33;
  }
  v14 = *(unsigned int *)(a2 + 800);
  if ( (_DWORD)v14 == 1 )
  {
    if ( *(_DWORD *)(a2 + 776) )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
      if ( *(_DWORD *)(a2 + 800) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    }
    if ( *(_DWORD *)(a2 + 784) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    if ( *(_DWORD *)(a2 + 780) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    if ( *(_DWORD *)(a2 + 788) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    if ( *(_DWORD *)(a2 + 796) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    if ( (*(_DWORD *)(a2 + 824) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v14);
    *(_DWORD *)(a2 + 776) = *v13;
    *(_QWORD *)(a2 + 816) = *v7;
    v15 = (int)a6;
    *(_DWORD *)(a2 + 788) = (_DWORD)a6;
    *(_DWORD *)(a2 + 792) = v15;
    goto LABEL_33;
  }
  if ( (*(_DWORD *)(a2 + 824) & 1) != 0 )
    goto LABEL_28;
  v16 = *(_DWORD *)(a2 + 788);
  v17 = *(_DWORD *)(a2 + 832);
  if ( (unsigned int)a6 < v16 % v17 )
    ++*(_DWORD *)(a2 + 804);
  v18 = (_DWORD)a6 + *(_DWORD *)(a2 + 804) * v17;
  if ( v18 <= v16 )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x3Fu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
    *(_DWORD *)(a2 + 824) |= 1u;
  }
  else
  {
    LODWORD(a7) = 0;
    *(_DWORD *)(a2 + 788) = v18;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(
                         v18 - *(_DWORD *)(a2 + 792),
                         (unsigned int)(v14 - 1),
                         1LL,
                         (int *)&a7) )
    {
      v22 = (int)a7;
      if ( !(_DWORD)a7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
      *(_DWORD *)(a2 + 796) = v22;
    }
  }
  if ( (*(_DWORD *)(a2 + 824) & 1) != 0 )
  {
LABEL_28:
    if ( *(_DWORD *)(a2 + 796) && *(_DWORD *)(a2 + 800) >= 5u )
    {
      LODWORD(v29) = *(_DWORD *)(a2 + 796);
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0x40u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v29);
      *(_DWORD *)(a2 + 788) += *(_DWORD *)(a2 + 796);
      goto LABEL_33;
    }
    LODWORD(v29) = 80;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0x41u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v29);
    goto LABEL_32;
  }
LABEL_33:
  if ( *(_DWORD *)(a2 + 800) <= 1u )
  {
    v25 = *v13;
    v27 = *v7;
  }
  else
  {
    v23 = (unsigned int)(*(_DWORD *)(a2 + 788) - *(_DWORD *)(a2 + 792));
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v23, 10LL, 0LL, (int *)&a7) )
    {
      v24 = (unsigned int)a7;
    }
    else
    {
      v24 = 8;
      LODWORD(v29) = 8;
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, 0x43u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v29);
    }
    v25 = v24 + *(_DWORD *)(a2 + 776);
    v26 = v24 * *(_QWORD *)(a1 + 520);
    *v13 = v25;
    v27 = *(_QWORD *)(a2 + 816) + v26 / 0x3E8;
    *v7 = v27;
  }
  result = *(unsigned int *)(a2 + 780);
  *(_DWORD *)(a2 + 784) = result;
  *(_DWORD *)(a2 + 780) = v25;
  *(_QWORD *)(a2 + 808) = v27;
  return result;
}
