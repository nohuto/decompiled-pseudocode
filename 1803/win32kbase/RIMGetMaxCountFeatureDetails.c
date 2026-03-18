/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C00EC5C4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RIMGetFeatureReport @ 0x1C00EC4D0 (RIMGetFeatureReport.c)
 *     rimHidP_GetUsageValue @ 0x1C00F0DA4 (rimHidP_GetUsageValue.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C0108B30 (RIMDiscoverCustomPTPSettings.c)
 *     RIMExtractCustomPTPSettings @ 0x1C0108FC8 (RIMExtractCustomPTPSettings.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        _WORD *a4,
        struct _DEVICE_OBJECT *a5,
        struct _FILE_OBJECT *a6)
{
  int v8; // edx
  union _LARGE_INTEGER *v9; // rbx
  unsigned int v10; // r15d
  LARGE_INTEGER PerformanceCounter; // rax
  struct _DEVICE_OBJECT *v12; // rsi
  unsigned int v13; // r14d
  NTSTATUS v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r13
  struct _HIDP_PREPARSED_DATA *v17; // rcx
  const WCHAR *v18; // rdx
  __int64 v19; // r10
  UINT32 cData; // r11d
  LPCGUID v21; // r9
  unsigned int *v22; // r14
  int UsageValue; // eax
  unsigned int v24; // ecx
  NTSTATUS v25; // eax
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-D8h]
  EVENT_DATA_DESCRIPTOR *pDataa; // [rsp+28h] [rbp-D8h]
  int SpecificValueCaps; // [rsp+40h] [rbp-C0h] BYREF
  char v30; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v31[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v32; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v33; // [rsp+50h] [rbp-B0h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  struct _HIDP_PREPARSED_DATA *v36; // [rsp+68h] [rbp-98h] BYREF
  struct _DEVICE_OBJECT *v37; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h]
  struct _HIDP_VALUE_CAPS v41; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v42; // [rsp+E0h] [rbp-20h] BYREF
  struct _HIDP_PREPARSED_DATA **v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+10Ch] [rbp+Ch]
  __int64 *v46; // [rsp+110h] [rbp+10h]
  int v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  union _LARGE_INTEGER *p_Interval; // [rsp+130h] [rbp+30h]
  UINT32 v51; // [rsp+138h] [rbp+38h]
  int v52; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v53; // [rsp+140h] [rbp+40h]
  UINT32 v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+14Ch] [rbp+4Ch]
  int *p_SpecificValueCaps; // [rsp+150h] [rbp+50h]
  int v57; // [rsp+158h] [rbp+58h]
  int v58; // [rsp+15Ch] [rbp+5Ch]

  v37 = a5;
  v35 = a2;
  v36 = a3;
  v40 = a1;
  v31[0] = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Feature, 0xDu, 0, 0x55u, &v41, v31, a3);
  v8 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
    return (unsigned int)v8;
  v9 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged((unsigned __int16)a4[4], 0x69667352u);
  if ( !v9 )
  {
    SpecificValueCaps = -1073741668;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x22u,
      (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids);
LABEL_33:
    v8 = SpecificValueCaps;
    goto LABEL_34;
  }
  v10 = 10;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    v10 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = v37;
  v13 = 0;
  v38 = PerformanceCounter;
  do
  {
    v14 = RIMGetFeatureReport(v9, a4[4], v41.ReportID, v12, a6);
    SpecificValueCaps = v14;
    if ( !v14 )
      break;
    LODWORD(pData) = v14;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x20u,
      (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids,
      pData);
    if ( v13 < v10 - 1 )
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(1, 0, &Interval);
    }
    ++v13;
  }
  while ( v13 < v10 );
  KeQueryPerformanceCounter(0LL);
  v15 = v35;
  v16 = (__int64)v36;
  if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 0x400000000000uLL) )
  {
    v17 = (struct _HIDP_PREPARSED_DATA *)*(int *)(v15 + 24);
    v18 = *(const WCHAR **)(v15 + 288);
    v45 = 0;
    v48 = 0;
    v43 = &v36;
    v35 = *(int *)(v15 + 864);
    v36 = v17;
    v46 = &v35;
    v44 = 8;
    v47 = 8;
    TlgCreateWsz(&pDesc, v18);
    v52 = 0;
    v55 = 0;
    v51 = cData;
    v54 = cData;
    v58 = 0;
    p_Interval = &Interval;
    v53 = &v39;
    Interval.QuadPart = (unsigned int)(1000 * (v19 - v38.QuadPart) / gliQpcFreq.QuadPart);
    p_SpecificValueCaps = &SpecificValueCaps;
    v39 = v13 + 1;
    v57 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C01784FD, 0LL, v21, cData, &v42);
  }
  if ( SpecificValueCaps )
    goto LABEL_14;
  v22 = (unsigned int *)(v15 + 680);
  UsageValue = rimHidP_GetUsageValue(2, 13, 0, 85, v15 + 680, v16, (__int64)v9, (unsigned __int16)a4[4]);
  SpecificValueCaps = UsageValue;
  v8 = UsageValue;
  if ( UsageValue >= 0 && (v24 = *v22) != 0 )
  {
    if ( v24 > 0x100 )
    {
LABEL_14:
      v8 = -1073741668;
      SpecificValueCaps = -1073741668;
      goto LABEL_34;
    }
    if ( *a4 == 5 )
    {
      *v22 = v24 + 1;
    }
    else if ( *(_DWORD *)(v40 + 516) + v24 > 0xA00 )
    {
      goto LABEL_14;
    }
  }
  else
  {
    LODWORD(pDataa) = UsageValue;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x21u,
      (__int64)&WPP_d24afaddbe1632fa9c89c4aae49a04f3_Traceguids,
      pDataa);
    v8 = -1073741668;
    SpecificValueCaps = -1073741668;
  }
  if ( v8 >= 0 && *a4 == 5 )
  {
    *(_DWORD *)(v15 + 864) = 3;
    SpecificValueCaps = rimHidP_GetUsageValue(
                          2,
                          13,
                          0,
                          89,
                          (__int64)&Interval,
                          v16,
                          (__int64)v9,
                          (unsigned __int16)a4[4]);
    if ( SpecificValueCaps >= 0 )
      *(_DWORD *)(v15 + 864) = ((Interval.LowPart & 1) != 0) + 1;
    v25 = RIMDiscoverCustomPTPSettings(
            *(_QWORD *)(v15 + 672),
            v16,
            (unsigned int)&v30,
            (unsigned int)&v33,
            (__int64)&v32);
    if ( v25 >= 0 )
    {
      if ( v30 != v41.ReportID )
        v25 = RIMGetFeatureReport(v9, a4[4], v30, v37, a6);
      if ( v25 >= 0 )
        RIMExtractCustomPTPSettings(v15, v16, (_DWORD)a4, (_DWORD)v9, v33, v32);
    }
    goto LABEL_33;
  }
LABEL_34:
  if ( v9 )
  {
    Win32FreePool((__int64)v9);
    return (unsigned int)SpecificValueCaps;
  }
  return (unsigned int)v8;
}
