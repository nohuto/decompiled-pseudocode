/*
 * XREFs of rimExtractPointerDeviceUsages @ 0x1C012A314
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C012B2F8 (rimPopulateContactFrameData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     rimHidP_GetUsageValue @ 0x1C011C898 (rimHidP_GetUsageValue.c)
 *     rimHidP_GetUsageValueArray @ 0x1C011C908 (rimHidP_GetUsageValueArray.c)
 *     rimHidP_GetUsages @ 0x1C011C970 (rimHidP_GetUsages.c)
 *     RIMEnsureUsageWithinLogicalBoundary @ 0x1C01280B0 (RIMEnsureUsageWithinLogicalBoundary.c)
 *     rimExtractData @ 0x1C0129B1C (rimExtractData.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C0129BD8 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractGeometryPoints @ 0x1C0129E34 (rimExtractGeometryPoints.c)
 *     rimExtractPenInfo @ 0x1C012A224 (rimExtractPenInfo.c)
 *     rimExtractTouchInfo @ 0x1C012AAF0 (rimExtractTouchInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // rsi
  __int64 v12; // rdi
  int DigitizerPageButtonUsages; // ebx
  unsigned __int8 v14; // r14
  unsigned int v15; // r15d
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // r13d
  int v21; // eax
  unsigned __int16 v22; // r9
  unsigned __int16 v23; // r8
  BOOL v24; // r15d
  int UsageValue; // eax
  _DWORD *v26; // r14
  int v27; // ecx
  __int16 v28; // ax
  _DWORD *v29; // rax
  unsigned __int16 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  unsigned __int16 v36; // r8
  __int64 v38; // [rsp+28h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp+8h]
  char v41; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  v11 = a1 + 344;
  v12 = a7;
  DigitizerPageButtonUsages = 0;
  v39 = *(_QWORD *)(a1 + 704);
  v14 = *a3;
  v15 = a4;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x3Au, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
  *a8 = 1;
  v19 = 0LL;
  v20 = 0;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  if ( !*(_DWORD *)(a1 + 716) )
    goto LABEL_24;
  v21 = v14;
  LODWORD(a7) = v14;
  do
  {
    if ( v21 != *(_DWORD *)(v11 + 4) )
      goto LABEL_20;
    v22 = *(_WORD *)(v11 + 12);
    v23 = *(_WORD *)(v12 + 58);
    v24 = (unsigned __int16)(v22 - 48) <= 1u;
    if ( v39 && *(_WORD *)(v39 + 8) && *(_WORD *)v11 == 1 && (unsigned __int16)(*(_WORD *)(v11 + 12) - 48) <= 1u )
    {
      *(_DWORD *)(v11 + 48) = 0;
      v19 = *(unsigned __int16 *)(v12 + 58);
      v23 = *(_WORD *)(*(_QWORD *)(v39 + 24) + 8 * v19 + 2);
    }
    if ( (*(_DWORD *)(a1 + 308) & 0x800) == 0 || *(_WORD *)v11 != 1 || (unsigned __int16)(v22 - 48) > 1u )
    {
      v26 = (_DWORD *)(v11 + 52);
      UsageValue = rimHidP_GetUsageValue(HidP_Input, *(_WORD *)v11, v23, v22, (unsigned int *)(v11 + 52), a2, a3, v42);
      v19 = 0LL;
      DigitizerPageButtonUsages = UsageValue;
      if ( UsageValue >= 0 )
        goto LABEL_15;
      v30 = 60;
LABEL_39:
      LODWORD(v38) = UsageValue;
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, v30, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v38);
      goto LABEL_54;
    }
    UsageValue = rimHidP_GetUsageValueArray(v19, 1u, v23, v22, &v41, v38, a2, a3, v42);
    DigitizerPageButtonUsages = UsageValue;
    if ( UsageValue < 0 )
    {
      v30 = 59;
      goto LABEL_39;
    }
    v26 = (_DWORD *)(v11 + 52);
    rimExtractGeometryPoints(
      *(unsigned __int16 *)(v11 + 12),
      v12,
      v11 + 52,
      (__int64)&v41,
      *(unsigned __int16 *)(v11 + 56));
    v19 = 0LL;
LABEL_15:
    if ( *(_DWORD *)(v11 + 16) )
    {
      if ( *v26 < *(_DWORD *)(v11 + 32) || *v26 > *(_DWORD *)(v11 + 36) )
      {
        if ( *(_WORD *)v11 == 1 && v24 && *(_DWORD *)(a1 + 24) == 5 )
        {
          v28 = *(_WORD *)(v11 + 12);
          if ( v28 == 48 )
          {
            v29 = a9;
          }
          else
          {
            v18 = 49LL;
            if ( v28 != 49 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, 48LL, 49LL);
              v19 = 0LL;
            }
            v29 = a10;
          }
          *v29 = 1;
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
      if ( !v24 || a5 )
      {
        RIMEnsureUsageWithinLogicalBoundary(v11);
        v19 = 0LL;
      }
    }
    v21 = a7;
LABEL_20:
    ++v20;
    v11 += 60LL;
  }
  while ( v20 < *(_DWORD *)(a1 + 716) );
  if ( DigitizerPageButtonUsages < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, 48LL, v18);
  v15 = v42;
LABEL_24:
  *(_DWORD *)(v12 + 4) = rimExtractData(a1, 1, 48, 0, 0LL);
  *(_DWORD *)(v12 + 8) = rimExtractData(a1, 1, 49, 0, 0LL);
  v27 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v27 - 1) <= 3 )
  {
    *(_DWORD *)(v12 + 64) = 2;
    goto LABEL_43;
  }
  if ( v27 == 7 )
  {
    *(_DWORD *)(v12 + 64) = 5;
LABEL_43:
    rimExtractTouchInfo(a1, a6, v12);
  }
  else if ( (unsigned int)(v27 - 5) > 1 )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0x3Du, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids);
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
  }
  else
  {
    v31 = a6;
    *(_DWORD *)(v12 + 64) = 3;
    rimExtractPenInfo(a1, v31, (_DWORD *)v12);
  }
  DigitizerPageButtonUsages = rimExtractDigitizerPageButtonUsages(a1, a2, a3, v15, v12);
  if ( DigitizerPageButtonUsages >= 0 )
  {
    v35 = *(_DWORD *)(a1 + 308);
    if ( (v35 & 0x20) != 0 && (v35 & 0x8000) == 0 )
    {
      v36 = *(_WORD *)(v12 + 58);
      LOWORD(a8) = 0;
      LODWORD(a9) = 1;
      if ( rimHidP_GetUsages(HidP_Input, 0xFF00u, v36, (unsigned __int16 *)&a8, (unsigned int *)&a9, a2, a3, v15) >= 0
        && (_DWORD)a9 == 1
        && (_WORD)a8 == 207 )
      {
        *a11 = 1;
      }
    }
  }
LABEL_54:
  LODWORD(v38) = DigitizerPageButtonUsages;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x3Eu, (__int64)&WPP_4bfe390787383b4e17a2ea3fbc512894_Traceguids, v38);
  return (unsigned int)DigitizerPageButtonUsages;
}
