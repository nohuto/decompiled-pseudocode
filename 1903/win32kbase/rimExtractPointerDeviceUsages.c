/*
 * XREFs of rimExtractPointerDeviceUsages @ 0x1C0157000
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C0158198 (rimPopulateContactFrameData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     rimHidP_GetUsageValue @ 0x1C0145380 (rimHidP_GetUsageValue.c)
 *     rimHidP_GetUsageValueArray @ 0x1C01453F0 (rimHidP_GetUsageValueArray.c)
 *     rimHidP_GetUsages @ 0x1C0145458 (rimHidP_GetUsages.c)
 *     RIMEnsureUsageWithinLogicalBoundary @ 0x1C0154C94 (RIMEnsureUsageWithinLogicalBoundary.c)
 *     rimExtractData @ 0x1C0156754 (rimExtractData.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C0156810 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractGeometryPoints @ 0x1C0156A90 (rimExtractGeometryPoints.c)
 *     rimExtractPenInfo @ 0x1C0156F10 (rimExtractPenInfo.c)
 *     rimExtractTouchInfo @ 0x1C0157890 (rimExtractTouchInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned __int8 v11; // bp
  __int64 v12; // r14
  __int64 v13; // rsi
  struct _HIDP_PREPARSED_DATA *v14; // r10
  __int64 v15; // rdx
  _DWORD *v16; // r11
  unsigned int v17; // r15d
  int DigitizerPageButtonUsages; // ebx
  void *v21; // r8
  _DWORD *v22; // r13
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // ebp
  unsigned __int16 v26; // r9
  unsigned __int16 v27; // r8
  int v28; // ebp
  _DWORD *v29; // r15
  int UsageValue; // eax
  __int16 v31; // ax
  _DWORD *v32; // rax
  int v33; // r9d
  int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  unsigned __int16 v41; // r8
  int v43; // [rsp+28h] [rbp-70h]
  __int64 v44; // [rsp+A0h] [rbp+8h]
  char v46; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v47; // [rsp+B8h] [rbp+20h]

  v47 = a4;
  v11 = *a3;
  v12 = a1 + 352;
  v13 = a7;
  v14 = a2;
  v15 = *(_QWORD *)(a1 + 712);
  v16 = 0LL;
  v44 = v15;
  v17 = a4;
  DigitizerPageButtonUsages = 0;
  v21 = &WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v15, 1, 60, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
    v15 = v44;
    v14 = a2;
    v16 = 0LL;
  }
  v22 = a8;
  LODWORD(a7) = 0;
  *a8 = 1;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  if ( !*(_DWORD *)(a1 + 724) )
  {
LABEL_43:
    *(_DWORD *)(v13 + 4) = rimExtractData(a1, 1, 48, 0, v16);
    *(_DWORD *)(v13 + 8) = rimExtractData(a1, 1, 49, 0, 0LL);
    v37 = *(unsigned int *)(a1 + 24);
    if ( (unsigned int)(v37 - 1) > 3 )
    {
      if ( (_DWORD)v37 != 7 )
      {
        if ( (unsigned int)(v37 - 5) > 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v35) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v35, 1, 63, (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids);
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v35, v36);
        }
        else
        {
          v38 = a6;
          *(_DWORD *)(v13 + 64) = 3;
          rimExtractPenInfo(a1, v38, (_DWORD *)v13);
        }
LABEL_53:
        DigitizerPageButtonUsages = rimExtractDigitizerPageButtonUsages(a1, a2, a3, v17, v13);
        if ( DigitizerPageButtonUsages >= 0 )
        {
          v40 = *(_DWORD *)(a1 + 312);
          if ( (v40 & 8) != 0 && (v40 & 0x2000) == 0 )
          {
            v41 = *(_WORD *)(v13 + 58);
            LODWORD(a10) = 1;
            LOWORD(a9) = 0;
            if ( rimHidP_GetUsages(v39, 0xFF00u, v41, (unsigned __int16 *)&a9, (unsigned int *)&a10, a2, a3, v17) >= 0
              && (_DWORD)a10 == 1
              && (_WORD)a9 == 207 )
            {
              *a11 = 1;
            }
          }
        }
LABEL_60:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v34) = 4;
          WPP_RECORDER_SF_D(
            (_DWORD)gRimLog,
            v34,
            1,
            64,
            (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
            DigitizerPageButtonUsages);
        }
        return (unsigned int)DigitizerPageButtonUsages;
      }
      *(_DWORD *)(v13 + 64) = 5;
    }
    else
    {
      *(_DWORD *)(v13 + 64) = 2;
    }
    rimExtractTouchInfo(a1, a6, v13);
    goto LABEL_53;
  }
  v23 = v11;
  v24 = 1LL;
  LODWORD(a8) = v11;
  v25 = 0;
  while ( 1 )
  {
    if ( v23 != *(_DWORD *)(v12 + 4) )
      goto LABEL_34;
    v26 = *(_WORD *)(v12 + 12);
    v27 = *(_WORD *)(v13 + 58);
    v28 = (int)v16;
    LOBYTE(v28) = (unsigned __int16)(v26 - 48) <= 1u;
    if ( v15 && *(_WORD *)(v15 + 8) > (unsigned __int16)v16 && *(_WORD *)v12 == 1 && v28 )
    {
      *(_DWORD *)(v12 + 48) = (_DWORD)v16;
      v24 = *(unsigned __int16 *)(v13 + 58);
      v27 = *(_WORD *)(*(_QWORD *)(v15 + 24) + 8 * v24 + 2);
    }
    if ( (*(_DWORD *)(a1 + 312) & 0x200) != 0 && *(_WORD *)v12 == 1 && v28 )
    {
      DigitizerPageButtonUsages = rimHidP_GetUsageValueArray(v24, 1u, v27, v26, &v46, v43, v14, a3, v17);
      if ( DigitizerPageButtonUsages < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)DigitizerPageButtonUsages;
        v33 = 61;
        goto LABEL_38;
      }
      v29 = (_DWORD *)(v12 + 52);
      rimExtractGeometryPoints(
        *(unsigned __int16 *)(v12 + 12),
        v13,
        v12 + 52,
        (__int64)&v46,
        *(unsigned __int16 *)(v12 + 56));
      v16 = 0LL;
      goto LABEL_17;
    }
    v29 = (_DWORD *)(v12 + 52);
    UsageValue = rimHidP_GetUsageValue(HidP_Input, *(_WORD *)v12, v27, v26, (unsigned int *)(v12 + 52), v14, a3, v47);
    v16 = 0LL;
    DigitizerPageButtonUsages = UsageValue;
    if ( UsageValue < 0 )
      break;
LABEL_17:
    if ( *(_DWORD *)(v12 + 16) )
    {
      if ( *v29 < *(_DWORD *)(v12 + 32) || *v29 > *(_DWORD *)(v12 + 36) )
      {
        if ( *(_WORD *)v12 == 1 && v28 && *(_DWORD *)(a1 + 24) == 5 )
        {
          v31 = *(_WORD *)(v12 + 12);
          if ( v31 == 48 )
          {
            v32 = a9;
          }
          else
          {
            if ( v31 != 49 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(49LL, v15, v21);
              v16 = 0LL;
            }
            v32 = a10;
          }
          *v32 = 1;
        }
      }
      else
      {
        *v22 = 0;
      }
    }
    else
    {
      *v22 = 0;
      if ( !v28 || a5 )
        RIMEnsureUsageWithinLogicalBoundary(v12);
    }
    v23 = (int)a8;
    v24 = 1LL;
    v17 = v47;
    v25 = a7;
LABEL_34:
    ++v25;
    v12 += 60LL;
    LODWORD(a7) = v25;
    if ( v25 >= *(_DWORD *)(a1 + 724) )
    {
      if ( DigitizerPageButtonUsages < 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, v15, v21);
        v16 = 0LL;
      }
      goto LABEL_43;
    }
    v15 = v44;
    v14 = a2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = 62;
LABEL_38:
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_D(
      (_DWORD)gRimLog,
      v15,
      1,
      v33,
      (__int64)&WPP_4a2c65ceabc93e7a5190c4ab673c23f1_Traceguids,
      DigitizerPageButtonUsages);
    goto LABEL_60;
  }
  return (unsigned int)DigitizerPageButtonUsages;
}
