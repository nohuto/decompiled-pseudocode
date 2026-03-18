/*
 * XREFs of rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C0156BF8
 * Callers:
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C01569C8 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     rimHidP_GetUsageValue @ 0x1C0145380 (rimHidP_GetUsageValue.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C014F240 (RIMAbandonPointerDeviceFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimExtractParallelFrameInfoAndAbandonIncompleteFrame(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _WORD *a10)
{
  unsigned int v10; // ebx
  __int64 v11; // rbp
  unsigned int *v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // eax
  struct _HIDP_PREPARSED_DATA *v23; // [rsp+40h] [rbp-58h]
  __int64 v25; // [rsp+A8h] [rbp+10h]

  v25 = a2;
  v10 = 0;
  v11 = *(_QWORD *)(a2 + 480);
  v12 = *(unsigned int **)(v11 + 712);
  v23 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 52, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
  }
  if ( (*(_DWORD *)(v11 + 312) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v13 = *(_DWORD *)(v11 + 720);
  if ( *v12 > v13 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_Dd((_DWORD)gRimLog, a2, 1, 53, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids, *v12, v13);
  }
  *a10 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a5, v23, a3, a4) < 0 )
  {
    if ( (v12[8] & 1) == 0 )
    {
      *a6 = *v12;
      *a9 = 1;
LABEL_34:
      *a10 = *((_WORD *)v12 + 3);
      goto LABEL_38;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 56, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
    }
  }
  else
  {
    v17 = v12[9];
    if ( !*a5 )
    {
      if ( v17 )
      {
        v20 = *v12;
        if ( v17 <= *v12 )
        {
          v20 = v12[9];
          *a8 = 1;
          v21 = 0;
        }
        else
        {
          v21 = v17 - v20;
        }
        v12[9] = v21;
        *a6 = v20;
      }
      else
      {
        *a7 = 1;
        if ( *a6 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
      }
      goto LABEL_34;
    }
    if ( v17 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 54, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
      }
      RIMAbandonPointerDeviceFrame(a1, v25);
    }
    v18 = *a5;
    if ( *a5 <= *(_DWORD *)(v11 + 720) )
    {
      v19 = *v12;
      if ( v18 <= *v12 )
      {
        *a8 = 1;
        LODWORD(v14) = 0;
        v19 = v18;
      }
      else
      {
        LODWORD(v14) = v18 - v19;
      }
      *a6 = v19;
      v12[9] = v14;
      *a7 = 1;
      goto LABEL_34;
    }
    if ( *a6 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_Dd(
        (_DWORD)gRimLog,
        v14,
        1,
        55,
        (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
        *a5,
        *(_DWORD *)(v11 + 720));
    }
  }
  v10 = -1073741668;
LABEL_38:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v14, 1, 57, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids, v10);
  }
  return v10;
}
