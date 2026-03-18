/*
 * XREFs of ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800EA5D0
 * Callers:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x1800279AC (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180059AF4 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180025BC0 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1800278B0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800530F8 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800B6770 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?ResetScheduler@CComposition@@QEAAXXZ @ 0x1800D98F4 (-ResetScheduler@CComposition@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     McTemplateU0qqq @ 0x180159070 (McTemplateU0qqq.c)
 */

__int64 __fastcall CDisplayManager::DeriveCurrentDisplaySet(
        CDisplayManager *this,
        struct CDXGIEnumeration *a2,
        enum DisplayStateComparison::Enum *a3)
{
  CDisplaySet *v4; // rdi
  int v5; // r14d
  int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  char v10; // bl
  struct CDisplaySet *v11; // rbx
  CDisplaySet *v12; // rdx
  CComposition *v13; // rcx
  CDisplayManager *v15; // rcx
  bool v16[4]; // [rsp+30h] [rbp-D0h] BYREF
  signed int v17; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v18; // [rsp+38h] [rbp-C8h] BYREF
  CDisplaySet *v19; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  int v24; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  signed int *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  GUID *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  int *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  int *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  unsigned int *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  ULONG *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v42; // [rsp+100h] [rbp+0h] BYREF
  GUID *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]

  v17 = 0;
  v4 = 0LL;
  v19 = 0LL;
  v5 = 0;
  v16[0] = 0;
LABEL_2:
  v7 = 0;
  while ( 1 )
  {
    v18 = GdiEntry13();
    v23 = DrvQueryPrivateDisplayChangeUniqueness();
    v17 = CDisplayManager::CreateNewDisplaySet((CDisplayManager *)v16, a2, v18, v23, v16, &v19);
    v20 = GdiEntry13();
    v8 = DrvQueryPrivateDisplayChangeUniqueness();
    v10 = v16[0];
    v24 = v8;
    if ( v17 == -2003304442 || v18 != v20 )
    {
      if ( dword_1803371D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1803371D0, 0x400000000000uLL) )
      {
        v27 = 4LL;
        v26 = &v17;
        v28 = &gDwmCoreTelemetryActivityId;
        v30 = &v21;
        v32 = &v22;
        v34 = &v18;
        v36 = &v20;
        v38 = &v23;
        v40 = &v24;
        v29 = 16LL;
        v21 = 0;
        v31 = 4LL;
        v22 = 0;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1803371D0, &unk_1802D6FE2, 0LL, 0LL, 0xAu, &pData);
      }
      ReleaseInterface<CDisplaySet const>(&v19);
      goto LABEL_17;
    }
    if ( !v16[0] )
      break;
LABEL_17:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqq(
        (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
        0,
        v7,
        v10);
    if ( (unsigned int)++v7 >= 0xA )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0qqq(
          (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
          0,
          v7,
          v10);
      if ( !v10 )
      {
        if ( dword_1803371D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1803371D0, 0x400000000000uLL) )
        {
          v44 = 16LL;
          v43 = &gDwmCoreTelemetryActivityId;
          TlgWrite((TraceLoggingHProvider)&dword_1803371D0, &unk_1802D6FA7, 0LL, 0LL, 3u, &v42);
        }
        v17 = -2003304442;
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980006, 0x1E1u, 0LL);
        goto LABEL_27;
      }
      goto LABEL_2;
    }
  }
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v17, 0x1A4u, 0LL);
LABEL_27:
    v11 = v19;
    goto LABEL_28;
  }
  v11 = v19;
  v4 = g_DisplayManager;
  v12 = v19;
  g_DisplayManager = v19;
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v19);
    v11 = v19;
    v12 = g_DisplayManager;
  }
  v13 = g_pComposition;
  if ( !g_pComposition || *((_BYTE *)g_pComposition + 1274) )
  {
    v5 = 3;
    goto LABEL_36;
  }
  if ( v4 )
  {
    *((_BYTE *)v12 + 113) = *((_BYTE *)v4 + 113) != 0;
    v12 = g_DisplayManager;
LABEL_36:
    if ( v4 )
    {
      CDisplaySet::LogTelemetry((__int64)v4, (__int64)v12, v5);
      CDisplayManager::CombineNewAndOldDisplaySets(v15, v11, v4);
      v13 = g_pComposition;
    }
  }
  if ( v13 )
    CComposition::ResetScheduler(v13);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqq(
      (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
      1,
      v7,
      0);
LABEL_28:
  if ( a3 )
    *(_DWORD *)a3 = v5;
  if ( v11 )
    CDisplaySet::Release(v11);
  if ( v4 )
    CDisplaySet::Release(v4);
  return (unsigned int)v17;
}
