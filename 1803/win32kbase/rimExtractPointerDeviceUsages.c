/*
 * XREFs of rimExtractPointerDeviceUsages @ 0x1C0101B7C
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C0102A5C (rimPopulateContactFrameData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     rimHidP_GetUsageValue @ 0x1C00F0DA4 (rimHidP_GetUsageValue.c)
 *     rimHidP_GetUsageValueArray @ 0x1C00F0E14 (rimHidP_GetUsageValueArray.c)
 *     rimHidP_GetUsages @ 0x1C00F0E7C (rimHidP_GetUsages.c)
 *     RIMEnsureUsageWithinLogicalBoundary @ 0x1C00FFCCC (RIMEnsureUsageWithinLogicalBoundary.c)
 *     rimExtractData @ 0x1C0101358 (rimExtractData.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C0101414 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractGeometryPoints @ 0x1C0101688 (rimExtractGeometryPoints.c)
 *     rimExtractPenInfo @ 0x1C0101A8C (rimExtractPenInfo.c)
 *     rimExtractTouchInfo @ 0x1C0102384 (rimExtractTouchInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimExtractPointerDeviceUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  __int64 v11; // rdi
  __int64 v12; // rsi
  int DigitizerPageButtonUsages; // ebx
  unsigned __int8 v14; // r14
  unsigned int v15; // r15d
  __int64 v18; // rcx
  unsigned int v19; // r12d
  int v20; // eax
  unsigned __int16 v21; // r9
  unsigned __int16 v22; // r8
  BOOL v23; // r15d
  int UsageValue; // eax
  _DWORD *v25; // r14
  int v26; // ecx
  __int16 v27; // ax
  _DWORD *v28; // rax
  unsigned __int16 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  unsigned __int16 v34; // r8
  __int64 v36; // [rsp+28h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp+8h]
  char v39; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v40; // [rsp+B8h] [rbp+20h]

  v40 = a4;
  v11 = a1 + 312;
  v12 = a7;
  DigitizerPageButtonUsages = 0;
  v37 = *(_QWORD *)(a1 + 672);
  v14 = *a3;
  v15 = a4;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x34u,
    (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
  *a8 = 1;
  v18 = 0LL;
  v19 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  if ( !*(_DWORD *)(a1 + 684) )
    goto LABEL_24;
  v20 = v14;
  LODWORD(a7) = v14;
  do
  {
    if ( v20 != *(_DWORD *)(v11 + 4) )
      goto LABEL_20;
    v21 = *(_WORD *)(v11 + 12);
    v22 = *(_WORD *)(v12 + 58);
    v23 = (unsigned __int16)(v21 - 48) <= 1u;
    if ( v37 && *(_WORD *)(v37 + 8) && *(_WORD *)v11 == 1 && (unsigned __int16)(*(_WORD *)(v11 + 12) - 48) <= 1u )
    {
      *(_DWORD *)(v11 + 48) = 0;
      v18 = *(unsigned __int16 *)(v12 + 58);
      v22 = *(_WORD *)(*(_QWORD *)(v37 + 24) + 8 * v18 + 2);
    }
    if ( (*(_DWORD *)(a1 + 276) & 0x800) == 0 || *(_WORD *)v11 != 1 || (unsigned __int16)(v21 - 48) > 1u )
    {
      v25 = (_DWORD *)(v11 + 52);
      UsageValue = rimHidP_GetUsageValue(HidP_Input, *(_WORD *)v11, v22, v21, (unsigned int *)(v11 + 52), a2, a3, v40);
      v18 = 0LL;
      DigitizerPageButtonUsages = UsageValue;
      if ( UsageValue >= 0 )
        goto LABEL_15;
      v29 = 54;
LABEL_39:
      LODWORD(v36) = UsageValue;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x15u,
        v29,
        (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
        v36);
      goto LABEL_54;
    }
    UsageValue = rimHidP_GetUsageValueArray(v18, 1u, v22, v21, &v39, v36, a2, a3, v40);
    DigitizerPageButtonUsages = UsageValue;
    if ( UsageValue < 0 )
    {
      v29 = 53;
      goto LABEL_39;
    }
    v25 = (_DWORD *)(v11 + 52);
    rimExtractGeometryPoints(
      *(unsigned __int16 *)(v11 + 12),
      v12,
      v11 + 52,
      (__int64)&v39,
      *(unsigned __int16 *)(v11 + 56));
    v18 = 0LL;
LABEL_15:
    if ( *(_DWORD *)(v11 + 16) )
    {
      if ( *v25 < *(_DWORD *)(v11 + 32) || *v25 > *(_DWORD *)(v11 + 36) )
      {
        if ( *(_WORD *)v11 == 1 && v23 && *(_DWORD *)(a1 + 24) == 5 )
        {
          v27 = *(_WORD *)(v11 + 12);
          if ( v27 == 48 )
          {
            v28 = a9;
          }
          else
          {
            if ( v27 != 49 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, 48LL);
              v18 = 0LL;
            }
            v28 = a10;
          }
          *v28 = 1;
        }
      }
      else
      {
        *a8 = 0;
      }
    }
    else
    {
      *a8 = 0;
      if ( !v23 || a5 )
      {
        RIMEnsureUsageWithinLogicalBoundary(v11);
        v18 = 0LL;
      }
    }
    v20 = a7;
LABEL_20:
    ++v19;
    v11 += 60LL;
  }
  while ( v19 < *(_DWORD *)(a1 + 684) );
  if ( DigitizerPageButtonUsages < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, 48LL);
  v15 = v40;
LABEL_24:
  *(_DWORD *)(v12 + 4) = rimExtractData(a1, 1, 48, 0, 0LL);
  *(_DWORD *)(v12 + 8) = rimExtractData(a1, 1, 49, 0, 0LL);
  v26 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v26 - 1) <= 3 )
  {
    *(_DWORD *)(v12 + 64) = 2;
    goto LABEL_43;
  }
  if ( v26 == 7 )
  {
    *(_DWORD *)(v12 + 64) = 5;
LABEL_43:
    rimExtractTouchInfo(a1, a6, v12);
  }
  else if ( (unsigned int)(v26 - 5) > 1 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0x37u,
      (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids);
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31);
  }
  else
  {
    v30 = a6;
    *(_DWORD *)(v12 + 64) = 3;
    rimExtractPenInfo(a1, v30, (_DWORD *)v12);
  }
  DigitizerPageButtonUsages = rimExtractDigitizerPageButtonUsages(a1, a2, a3, v15, v12);
  if ( DigitizerPageButtonUsages >= 0 )
  {
    v33 = *(_DWORD *)(a1 + 276);
    if ( (v33 & 0x20) != 0 && (v33 & 0x8000) == 0 )
    {
      v34 = *(_WORD *)(v12 + 58);
      LOWORD(a8) = 0;
      LODWORD(a9) = 1;
      if ( rimHidP_GetUsages(HidP_Input, 0xFF00u, v34, (unsigned __int16 *)&a8, (unsigned int *)&a9, a2, a3, v15) >= 0
        && (_DWORD)a9 == 1
        && (_WORD)a8 == 207 )
      {
        *a11 = 1;
      }
    }
  }
LABEL_54:
  LODWORD(v36) = DigitizerPageButtonUsages;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x38u,
    (__int64)&WPP_bcbfe8941aa93feaa91bca37114d3188_Traceguids,
    v36);
  return (unsigned int)DigitizerPageButtonUsages;
}
