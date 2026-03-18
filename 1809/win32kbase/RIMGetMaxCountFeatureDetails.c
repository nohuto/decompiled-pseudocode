/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C011728C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?GetCustomPTPSettings@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0114734 (-GetCustomPTPSettings@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01147C8 (-GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMGetFeatureReport @ 0x1C0117184 (RIMGetFeatureReport.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C011C844 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetUsageValue @ 0x1C011C898 (rimHidP_GetUsageValue.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C013022C (RIMDiscoverCustomPTPSettings.c)
 *     RIMExtractCustomPTPSettings @ 0x1C01306E8 (RIMExtractCustomPTPSettings.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        struct RIMDEV *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        struct _DEVICE_OBJECT *a6,
        struct _FILE_OBJECT *a7)
{
  int v8; // edx
  union _LARGE_INTEGER *v9; // rbx
  unsigned int v10; // r13d
  LARGE_INTEGER PerformanceCounter; // rax
  struct RIMDEV *v12; // r12
  unsigned int v13; // r15d
  NTSTATUS v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rcx
  const WCHAR *v18; // rdx
  __int64 v19; // r10
  UINT32 cData; // r11d
  unsigned int *v21; // r15
  int UsageValue; // eax
  unsigned int v23; // ecx
  NTSTATUS v24; // eax
  char v25; // r15
  struct RIMDEV *v26; // r13
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+28h] [rbp-D8h]
  EVENT_DATA_DESCRIPTOR *pDataa; // [rsp+28h] [rbp-D8h]
  int SpecificValueCaps; // [rsp+40h] [rbp-C0h] BYREF
  char v31; // [rsp+44h] [rbp-BCh] BYREF
  __int16 v32[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v33; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v34; // [rsp+50h] [rbp-B0h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  struct RIMDEV *v38; // [rsp+70h] [rbp-90h]
  struct _DEVICE_OBJECT *v39; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h] BYREF
  __int64 v42; // [rsp+90h] [rbp-70h]
  char v43[2]; // [rsp+A0h] [rbp-60h] BYREF
  char v44; // [rsp+A2h] [rbp-5Eh]
  EVENT_DATA_DESCRIPTOR v45; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v46; // [rsp+110h] [rbp+10h]
  int v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v49; // [rsp+120h] [rbp+20h]
  int v50; // [rsp+128h] [rbp+28h]
  int v51; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  union _LARGE_INTEGER *p_Interval; // [rsp+140h] [rbp+40h]
  UINT32 v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v56; // [rsp+150h] [rbp+50h]
  UINT32 v57; // [rsp+158h] [rbp+58h]
  int v58; // [rsp+15Ch] [rbp+5Ch]
  int *p_SpecificValueCaps; // [rsp+160h] [rbp+60h]
  int v60; // [rsp+168h] [rbp+68h]
  int v61; // [rsp+16Ch] [rbp+6Ch]

  v39 = a6;
  v42 = a2;
  v37 = a4;
  v36 = a3;
  v38 = a1;
  v32[0] = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 85, (__int64)v43, (__int64)v32, a4);
  v8 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
    return (unsigned int)v8;
  v9 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged((unsigned __int16)a5[4], 0x69667352u);
  memset(v9, 0, (unsigned __int16)a5[4]);
  if ( !v9 )
  {
    SpecificValueCaps = -1073741668;
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x24u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
LABEL_33:
    v8 = SpecificValueCaps;
    goto LABEL_34;
  }
  v10 = 10;
  if ( *(_DWORD *)(a3 + 24) != 7 )
    v10 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = v38;
  v13 = 0;
  v40 = PerformanceCounter;
  do
  {
    InputTraceLogging::RIM::GetMaxCount(v12);
    WPP_RECORDER_SF_q(gRimLog, 3u, 0x15u, 0x20u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids, v12);
    v14 = RIMGetFeatureReport(v9, a5[4], v44, v39, a7);
    SpecificValueCaps = v14;
    if ( !v14 )
      break;
    LODWORD(pData) = v14;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0x21u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids, pData);
    if ( v13 < v10 - 1 )
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(1, 0, &Interval);
    }
    ++v13;
  }
  while ( v13 < v10 );
  KeQueryPerformanceCounter(0LL);
  v15 = v36;
  v16 = v37;
  if ( dword_1C01C7A38 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01C7A38, 0x400000000000uLL) )
  {
    v17 = *(int *)(v15 + 24);
    v18 = *(const WCHAR **)(v15 + 320);
    v48 = 0;
    v51 = 0;
    v46 = &v37;
    v36 = *(int *)(v15 + 896);
    v37 = v17;
    v49 = &v36;
    v47 = 8;
    v50 = 8;
    TlgCreateWsz(&pDesc, v18);
    v55 = 0;
    v58 = 0;
    v54 = cData;
    v57 = cData;
    v61 = 0;
    p_Interval = &Interval;
    v56 = &v41;
    Interval.QuadPart = (unsigned int)(1000 * (v19 - v40.QuadPart) / gliQpcFreq.QuadPart);
    p_SpecificValueCaps = &SpecificValueCaps;
    v41 = v13 + 1;
    v60 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C7A38, &unk_1C019ED59, 0LL, 0LL, cData, &v45);
  }
  if ( SpecificValueCaps )
    goto LABEL_14;
  v21 = (unsigned int *)(v15 + 712);
  UsageValue = rimHidP_GetUsageValue(2, 13, 0, 85, v15 + 712, v16, (__int64)v9, (unsigned __int16)a5[4]);
  SpecificValueCaps = UsageValue;
  v8 = UsageValue;
  if ( UsageValue >= 0 && (v23 = *v21) != 0 )
  {
    if ( v23 > 0x100 )
    {
LABEL_14:
      v8 = -1073741668;
      SpecificValueCaps = -1073741668;
      goto LABEL_34;
    }
    if ( *a5 == 5 )
    {
      *v21 = v23 + 1;
    }
    else if ( *(_DWORD *)(v42 + 532) + v23 > 0xA00 )
    {
      goto LABEL_14;
    }
  }
  else
  {
    LODWORD(pDataa) = UsageValue;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0x22u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids, pDataa);
    v8 = -1073741668;
    SpecificValueCaps = -1073741668;
  }
  if ( v8 >= 0 && *a5 == 5 )
  {
    *(_DWORD *)(v15 + 896) = 3;
    SpecificValueCaps = rimHidP_GetUsageValue(
                          2,
                          13,
                          0,
                          89,
                          (__int64)&Interval,
                          v16,
                          (__int64)v9,
                          (unsigned __int16)a5[4]);
    if ( SpecificValueCaps >= 0 )
      *(_DWORD *)(v15 + 896) = ((Interval.LowPart & 1) != 0) + 1;
    v24 = RIMDiscoverCustomPTPSettings(
            *(_QWORD *)(v15 + 704),
            v16,
            (unsigned int)&v31,
            (unsigned int)&v34,
            (__int64)&v33);
    if ( v24 >= 0 )
    {
      v25 = v31;
      if ( v31 != v44 )
      {
        v26 = v38;
        InputTraceLogging::RIM::GetCustomPTPSettings(v38);
        WPP_RECORDER_SF_q(gRimLog, 3u, 0x15u, 0x23u, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids, v26);
        v24 = RIMGetFeatureReport(v9, a5[4], v25, v39, a7);
      }
      if ( v24 >= 0 )
        RIMExtractCustomPTPSettings(v15, v16, (_DWORD)a5, (_DWORD)v9, v34, v33);
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
