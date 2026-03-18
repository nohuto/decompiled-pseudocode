/*
 * XREFs of ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18007EE70
 * Callers:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18004B004 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800CD560 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z @ 0x1800CE320 (-ClearD2DCaches@CD3DDeviceManager@@QEAA_NK@Z.c)
 * Callees:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18007D9B4 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18007ED10 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x18007F06C (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18007F940 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     McTemplateU0qqq @ 0x180149014 (McTemplateU0qqq.c)
 */

__int64 __fastcall CDisplayManager::DeriveCurrentDisplaySet(
        LPCRITICAL_SECTION lpCriticalSection,
        struct CDXGIEnumeration *a2,
        struct CDisplaySet **a3,
        enum DisplayStateComparison::Enum *a4)
{
  _DWORD *v4; // rdi
  int v5; // r15d
  int v9; // r14d
  unsigned int v10; // ecx
  char v11; // bl
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r8
  struct CDisplaySet *v13; // rbx
  struct CDisplaySet *v14; // rdi
  __int64 v15; // rdx
  CDisplayManager *v16; // rcx
  __int64 v17; // rax
  bool v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  CDisplayManager *v21; // [rsp+48h] [rbp-B8h] BYREF
  struct CDisplaySet *v22; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+5Ch] [rbp-A4h] BYREF
  int v25; // [rsp+60h] [rbp-A0h] BYREF
  PRTL_CRITICAL_SECTION_DEBUG v26; // [rsp+68h] [rbp-98h] BYREF
  LPCRITICAL_SECTION v27; // [rsp+70h] [rbp-90h] BYREF
  struct CDisplaySet **v28; // [rsp+78h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  GUID *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  CDisplayManager **v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  _DWORD *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  char *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  ULONG *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  unsigned int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  EVENT_DATA_DESCRIPTOR v46; // [rsp+120h] [rbp+20h] BYREF
  GUID *v47; // [rsp+140h] [rbp+40h]
  int v48; // [rsp+148h] [rbp+48h]
  int v49; // [rsp+14Ch] [rbp+4Ch]

  v28 = a3;
  v20 = 0;
  v4 = (_DWORD *)&lpCriticalSection[1].SpinCount + 1;
  v22 = 0LL;
  v5 = 0;
  v26 = 0LL;
  v19 = 0;
LABEL_2:
  v9 = 0;
  while ( 1 )
  {
    LODWORD(v21) = *v4;
    HIDWORD(v21) = GdiEntry13();
    v24 = DrvQueryPrivateDisplayChangeUniqueness();
    v20 = CDisplayManager::CreateNewDisplaySet(
            (CDisplayManager *)(unsigned int)v21,
            a2,
            HIDWORD(v21),
            v24,
            (unsigned int)v21,
            &v19,
            &v22);
    v23 = GdiEntry13();
    v25 = DrvQueryPrivateDisplayChangeUniqueness();
    if ( v20 == -2003304442 || v21 != (CDisplayManager *)__PAIR64__(v23, *v4) )
    {
      if ( dword_180305E80 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E80, 0x400000000000uLL) )
      {
        v31 = 4LL;
        v30 = &v20;
        v32 = &gDwmCoreTelemetryActivityId;
        v34 = &v21;
        v38 = (char *)&v21 + 4;
        v40 = &v23;
        v42 = &v24;
        v44 = &v25;
        v33 = 16LL;
        v35 = 4LL;
        v36 = v4;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v45 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_180305E80, &unk_1802B62BE, 0LL, 0LL, 0xAu, &pData);
      }
      ReleaseInterface<CDisplaySet const>(&v22);
      v11 = v19;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
        goto LABEL_33;
LABEL_27:
      McTemplateU0qqq(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
        0,
        v9,
        v19);
      goto LABEL_33;
    }
    v11 = v19;
    if ( !v19 )
      break;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      goto LABEL_27;
LABEL_33:
    if ( (unsigned int)++v9 >= 0xA )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0qqq(
          (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
          0,
          v9,
          v11);
      if ( !v11 )
      {
        if ( dword_180305E80 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E80, 0x400000000000uLL) )
        {
          v49 = 0;
          v47 = &gDwmCoreTelemetryActivityId;
          v48 = 16;
          TlgWrite((TraceLoggingHProvider)&dword_180305E80, &unk_1802B6283, 0LL, 0LL, 3u, &v46);
        }
        v20 = -2003304442;
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003304442, 0x21Au);
        goto LABEL_43;
      }
      goto LABEL_2;
    }
  }
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v20, 0x1D3u);
LABEL_43:
    v13 = v22;
    goto LABEL_21;
  }
  v27 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  DebugInfo = lpCriticalSection[1].DebugInfo;
  v13 = v22;
  v14 = (struct CDisplaySet *)DebugInfo;
  v26 = DebugInfo;
  lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v22;
  if ( v13 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v13);
    v13 = v22;
    v14 = (struct CDisplaySet *)v26;
  }
  v15 = *(_QWORD *)&g_pComposition;
  if ( !*(_QWORD *)&g_pComposition || *(_BYTE *)(*(_QWORD *)&g_pComposition + 1257LL) )
  {
    v5 = 3;
    goto LABEL_13;
  }
  if ( DebugInfo )
  {
    BYTE1(lpCriticalSection[1].DebugInfo[2].ProcessLocksList.Flink) = *((_BYTE *)v14 + 113) != 0;
LABEL_13:
    if ( DebugInfo )
    {
      CDisplaySet::LogTelemetry((__int64)v14, (__int64)lpCriticalSection[1].DebugInfo, v5);
      CDisplayManager::CombineNewAndOldDisplaySets(v16, v13, v14);
      v15 = *(_QWORD *)&g_pComposition;
    }
  }
  if ( v15 )
  {
    v17 = *(_QWORD *)(v15 + 360);
    if ( v17 )
      *(_BYTE *)(v17 + 20) = 1;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqq(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
      1,
      v9,
      0);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v27);
LABEL_21:
  if ( a4 )
    *(_DWORD *)a4 = v5;
  *v28 = v13;
  ReleaseInterface<CDisplaySet const>(&v26);
  return (unsigned int)v20;
}
