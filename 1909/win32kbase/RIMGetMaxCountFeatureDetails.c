/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C013D458
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0010990 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C013A8CC (-GetMaxCount@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMGetFeatureReport @ 0x1C013D334 (RIMGetFeatureReport.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0142CBC (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetUsageValue @ 0x1C0142D10 (rimHidP_GetUsageValue.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        union _LARGE_INTEGER a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        struct _DEVICE_OBJECT *a6,
        struct _FILE_OBJECT *a7)
{
  unsigned int v9; // edx
  union _LARGE_INTEGER *v10; // rbx
  unsigned int v11; // r13d
  LARGE_INTEGER PerformanceCounter; // rax
  const struct RIMDEV *QuadPart; // r12
  unsigned int i; // r15d
  int v15; // edx
  NTSTATUS v16; // eax
  int v17; // edx
  __int64 v18; // r12
  __int64 v19; // rcx
  const WCHAR *v20; // rdx
  __int64 v21; // r10
  __int64 cData; // r11
  unsigned int *v23; // r15
  __int64 v24; // r13
  int UsageValue; // eax
  unsigned int v26; // ecx
  int SpecificValueCaps; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v29; // [rsp+44h] [rbp-BCh] BYREF
  union _LARGE_INTEGER Interval; // [rsp+48h] [rbp-B8h] BYREF
  struct _DEVICE_OBJECT *v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h]
  char v37[80]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]
  struct _DEVICE_OBJECT **v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  union _LARGE_INTEGER *p_Interval; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  __int64 *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  int *p_SpecificValueCaps; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]

  v36 = a2;
  v32 = a3;
  Interval = a1;
  v35 = a4;
  v31 = a6;
  memset(v37, 0, 0x48uLL);
  v29 = 1;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 85, (__int64)v37, (__int64)&v29, a4);
  v9 = SpecificValueCaps;
  if ( SpecificValueCaps < 0 )
    return v9;
  v10 = (union _LARGE_INTEGER *)Win32AllocPoolNonPaged((unsigned __int16)a5[4], 0x69667352u);
  memset(v10, 0, (unsigned __int16)a5[4]);
  if ( !v10 )
  {
    v9 = -1073741668;
    SpecificValueCaps = -1073741668;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v9;
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 35, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
    v9 = SpecificValueCaps;
    goto LABEL_35;
  }
  v11 = 1;
  if ( *(_DWORD *)(a3 + 24) == 7 )
    v11 = 10;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  QuadPart = (const struct RIMDEV *)Interval.QuadPart;
  v33 = PerformanceCounter;
  for ( i = 0; i < v11; ++i )
  {
    InputTraceLogging::RIM::GetMaxCount(QuadPart);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        v15,
        1,
        32,
        (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids,
        (char)QuadPart);
    }
    v16 = RIMGetFeatureReport(v10, a5[4], v37[2], v31, a7);
    SpecificValueCaps = v16;
    if ( !v16 )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 3;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v17, 1, 33, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids, v16);
    }
    if ( i < v11 - 1 )
    {
      Interval.QuadPart = -1000000LL;
      KeDelayExecutionThread(1, 0, &Interval);
    }
  }
  KeQueryPerformanceCounter(0LL);
  v18 = v32;
  if ( dword_1C020C490 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C490, 0x400000000000uLL) )
  {
    v19 = *(int *)(v18 + 24);
    v20 = *(const WCHAR **)(v18 + 328);
    v41 = 0;
    v44 = 0;
    v39 = &v32;
    v31 = (struct _DEVICE_OBJECT *)*(int *)(v18 + 904);
    v32 = v19;
    v42 = &v31;
    v40 = 8;
    v43 = 8;
    TlgCreateWsz(&pDesc, v20);
    v47 = cData;
    v49 = cData;
    v51 = 4LL;
    p_Interval = &Interval;
    v48 = &v34;
    Interval.QuadPart = (unsigned int)(1000 * (v21 - v33.QuadPart) / gliQpcFreq.QuadPart);
    p_SpecificValueCaps = &SpecificValueCaps;
    v34 = i + 1;
    TlgWrite((TraceLoggingHProvider)&dword_1C020C490, &unk_1C01E2A57, 0LL, 0LL, cData, &pData);
  }
  if ( SpecificValueCaps )
    goto LABEL_18;
  v23 = (unsigned int *)(v18 + 720);
  v24 = v35;
  UsageValue = rimHidP_GetUsageValue(2, 13, 0, 85, v18 + 720, v35, (__int64)v10, (unsigned __int16)a5[4]);
  SpecificValueCaps = UsageValue;
  v9 = UsageValue;
  if ( UsageValue < 0 || (v26 = *v23) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_D(
        (_DWORD)gRimLog,
        v9,
        1,
        34,
        (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids,
        UsageValue);
    }
    v9 = -1073741668;
    SpecificValueCaps = -1073741668;
    goto LABEL_29;
  }
  if ( v26 <= 0x100 )
  {
    if ( *a5 == 5 )
    {
      *v23 = v26 + 1;
    }
    else if ( *(_DWORD *)(v36 + 532) + v26 > 0xA00 )
    {
      goto LABEL_18;
    }
LABEL_29:
    if ( (v9 & 0x80000000) == 0 && *a5 == 5 )
    {
      *(_DWORD *)(v18 + 904) = 3;
      SpecificValueCaps = rimHidP_GetUsageValue(
                            2,
                            13,
                            0,
                            89,
                            (__int64)&Interval,
                            v24,
                            (__int64)v10,
                            (unsigned __int16)a5[4]);
      v9 = SpecificValueCaps;
      if ( SpecificValueCaps >= 0 )
        *(_DWORD *)(v18 + 904) = ((Interval.LowPart & 1) != 0) + 1;
    }
    goto LABEL_35;
  }
LABEL_18:
  v9 = -1073741668;
  SpecificValueCaps = -1073741668;
LABEL_35:
  if ( v10 )
  {
    Win32FreePool((__int64)v10);
    return (unsigned int)SpecificValueCaps;
  }
  return v9;
}
