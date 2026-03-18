/*
 * XREFs of rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01017F0
 * Callers:
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C01015C0 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C00588C0 (RIMAbandonPointerDeviceFrame.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     rimHidP_GetUsageValue @ 0x1C00F0DA4 (rimHidP_GetUsageValue.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // eax
  int v22; // ecx
  __int64 v24; // [rsp+28h] [rbp-70h]
  __int64 v25; // [rsp+30h] [rbp-68h]
  struct _HIDP_PREPARSED_DATA *v26; // [rsp+40h] [rbp-58h]

  v10 = 0;
  v11 = *(_QWORD *)(a2 + 480);
  v12 = *(_QWORD *)(v11 + 672);
  v26 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x2Eu,
    (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
  if ( (*(_DWORD *)(v11 + 276) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
  *a10 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a5, v26, a3, a4) < 0 )
  {
    if ( (*(_DWORD *)(v12 + 32) & 1) != 0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x31u,
        (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
      goto LABEL_29;
    }
    v21 = *(_DWORD *)v12;
    *a9 = 1;
  }
  else
  {
    v16 = *a5;
    v17 = *(unsigned int *)(v12 + 36);
    if ( *a5 )
    {
      if ( (_DWORD)v17 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x15u,
          0x2Fu,
          (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
        RIMAbandonPointerDeviceFrame(a1, a2);
        v16 = *a5;
      }
      v18 = *(unsigned int *)(v11 + 680);
      if ( v16 <= (unsigned int)v18 )
      {
        v19 = *(_DWORD *)v12;
        if ( v16 <= *(_DWORD *)v12 )
        {
          *a8 = 1;
          v20 = 0;
          v19 = v16;
        }
        else
        {
          v20 = v16 - v19;
        }
        *a6 = v19;
        *(_DWORD *)(v12 + 36) = v20;
        *a7 = 1;
        goto LABEL_27;
      }
      if ( *a6 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v15);
        LODWORD(v18) = *(_DWORD *)(v11 + 680);
        v16 = *a5;
      }
      LODWORD(v25) = v18;
      LODWORD(v24) = v16;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        0x30u,
        (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
        v24,
        v25);
LABEL_29:
      v10 = -1073741668;
      goto LABEL_30;
    }
    if ( !(_DWORD)v17 )
    {
      *a7 = 1;
      if ( *a6 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v15);
      goto LABEL_27;
    }
    v21 = *(_DWORD *)v12;
    if ( (unsigned int)v17 <= *(_DWORD *)v12 )
    {
      v21 = *(_DWORD *)(v12 + 36);
      *a8 = 1;
      v22 = 0;
    }
    else
    {
      v22 = v17 - v21;
    }
    *(_DWORD *)(v12 + 36) = v22;
  }
  *a6 = v21;
LABEL_27:
  *a10 = *(_WORD *)(v12 + 6);
LABEL_30:
  LODWORD(v24) = v10;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x32u,
    (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
    v24);
  return v10;
}
