/*
 * XREFs of rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C0129F9C
 * Callers:
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C0129D6C (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     rimHidP_GetUsageValue @ 0x1C011C898 (rimHidP_GetUsageValue.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0122E84 (RIMAbandonPointerDeviceFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // eax
  int v24; // ecx
  __int64 v26; // [rsp+28h] [rbp-70h]
  __int64 v27; // [rsp+30h] [rbp-68h]
  struct _HIDP_PREPARSED_DATA *v28; // [rsp+40h] [rbp-58h]

  v10 = 0;
  v11 = *(_QWORD *)(a2 + 480);
  v12 = *(_QWORD *)(v11 + 704);
  v28 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x34u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
  if ( (*(_DWORD *)(v11 + 308) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  if ( !v12 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  *a10 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a5, v28, a3, a4) < 0 )
  {
    if ( (*(_DWORD *)(v12 + 32) & 1) != 0 )
    {
      WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x37u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
      goto LABEL_29;
    }
    v23 = *(_DWORD *)v12;
    *a9 = 1;
  }
  else
  {
    v18 = *a5;
    v19 = *(unsigned int *)(v12 + 36);
    if ( *a5 )
    {
      if ( (_DWORD)v19 )
      {
        WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x35u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
        RIMAbandonPointerDeviceFrame(a1, a2);
        v18 = *a5;
      }
      v20 = *(unsigned int *)(v11 + 712);
      if ( v18 <= (unsigned int)v20 )
      {
        v21 = *(_DWORD *)v12;
        if ( v18 <= *(_DWORD *)v12 )
        {
          *a8 = 1;
          v22 = 0;
          v21 = v18;
        }
        else
        {
          v22 = v18 - v21;
        }
        *a6 = v21;
        *(_DWORD *)(v12 + 36) = v22;
        *a7 = 1;
        goto LABEL_27;
      }
      if ( *a6 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v16, v17);
        LODWORD(v20) = *(_DWORD *)(v11 + 712);
        v18 = *a5;
      }
      LODWORD(v27) = v20;
      LODWORD(v26) = v18;
      WPP_RECORDER_SF_dd(gRimLog, 3u, 0x16u, 0x36u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v26, v27);
LABEL_29:
      v10 = -1073741668;
      goto LABEL_30;
    }
    if ( !(_DWORD)v19 )
    {
      *a7 = 1;
      if ( *a6 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v16, v17);
      goto LABEL_27;
    }
    v23 = *(_DWORD *)v12;
    if ( (unsigned int)v19 <= *(_DWORD *)v12 )
    {
      v23 = *(_DWORD *)(v12 + 36);
      *a8 = 1;
      v24 = 0;
    }
    else
    {
      v24 = v19 - v23;
    }
    *(_DWORD *)(v12 + 36) = v24;
  }
  *a6 = v23;
LABEL_27:
  *a10 = *(_WORD *)(v12 + 6);
LABEL_30:
  LODWORD(v26) = v10;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x38u, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v26);
  return v10;
}
