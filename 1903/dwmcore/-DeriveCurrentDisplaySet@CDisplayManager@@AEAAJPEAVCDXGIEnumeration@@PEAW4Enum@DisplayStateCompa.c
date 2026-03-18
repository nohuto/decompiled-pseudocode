/*
 * XREFs of ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800E97B0
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x18004C014 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180097A30 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180098790 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x1800A89D8 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180042588 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A2AC8 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1800A3C24 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x1800A4574 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?ResetScheduler@CComposition@@QEAAXXZ @ 0x1800D90F8 (-ResetScheduler@CComposition@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     McTemplateU0qqq @ 0x18015A750 (McTemplateU0qqq.c)
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
  unsigned int v9; // edx
  __int64 v10; // rcx
  char v11; // bl
  struct CDisplaySet *v12; // rbx
  CDisplaySet *v13; // rdx
  CComposition *v14; // rcx
  CDisplayManager *v16; // rcx
  bool v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  signed int v18; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+38h] [rbp-C8h] BYREF
  CDisplaySet *v20; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int v25; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  signed int *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  GUID *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  unsigned int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  ULONG *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v43; // [rsp+100h] [rbp+0h] BYREF
  GUID *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]

  v18 = 0;
  v4 = 0LL;
  v20 = 0LL;
  v5 = 0;
  v17[0] = 0;
LABEL_2:
  v7 = 0;
  while ( 1 )
  {
    v19 = GdiEntry13();
    v24 = DrvQueryPrivateDisplayChangeUniqueness();
    v18 = CDisplayManager::CreateNewDisplaySet((CDisplayManager *)v17, a2, v19, v24, v17, &v20);
    v21 = GdiEntry13();
    v8 = DrvQueryPrivateDisplayChangeUniqueness();
    v11 = v17[0];
    v25 = v8;
    if ( v18 == -2003304442 || v19 != v21 )
    {
      if ( dword_18033A1D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A1D0, 0x400000000000uLL) )
      {
        v28 = 4LL;
        v27 = &v18;
        v29 = &gDwmCoreTelemetryActivityId;
        v31 = &v22;
        v33 = &v23;
        v35 = &v19;
        v37 = &v21;
        v39 = &v24;
        v41 = &v25;
        v30 = 16LL;
        v22 = 0;
        v32 = 4LL;
        v23 = 0;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 4LL;
        v40 = 4LL;
        v42 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18033A1D0, &unk_1802D8E82, 0LL, 0LL, 0xAu, &pData);
      }
      ReleaseInterface<CDisplaySet const>(&v20, v9);
      goto LABEL_17;
    }
    if ( !v17[0] )
      break;
LABEL_17:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqq(
        (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
        0,
        v7,
        v11);
    if ( (unsigned int)++v7 >= 0xA )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0qqq(
          (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET,
          0,
          v7,
          v11);
      if ( !v11 )
      {
        if ( dword_18033A1D0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A1D0, 0x400000000000uLL) )
        {
          v45 = 16LL;
          v44 = &gDwmCoreTelemetryActivityId;
          TlgWrite((TraceLoggingHProvider)&dword_18033A1D0, &unk_1802D8E47, 0LL, 0LL, 3u, &v43);
        }
        v18 = -2003304442;
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x88980006, 0x1E1u, 0LL);
        goto LABEL_27;
      }
      goto LABEL_2;
    }
  }
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v18, 0x1A4u, 0LL);
LABEL_27:
    v12 = v20;
    goto LABEL_28;
  }
  v12 = v20;
  v4 = g_DisplayManager;
  v13 = v20;
  g_DisplayManager = v20;
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v20);
    v12 = v20;
    v13 = g_DisplayManager;
  }
  v14 = g_pComposition;
  if ( !g_pComposition || *((_BYTE *)g_pComposition + 1274) )
  {
    v5 = 3;
    goto LABEL_36;
  }
  if ( v4 )
  {
    *((_BYTE *)v13 + 113) = *((_BYTE *)v4 + 113) != 0;
    v13 = g_DisplayManager;
LABEL_36:
    if ( v4 )
    {
      CDisplaySet::LogTelemetry((__int64)v4, (__int64)v13, v5);
      CDisplayManager::CombineNewAndOldDisplaySets(v16, v12, v4);
      v14 = g_pComposition;
    }
  }
  if ( v14 )
    CComposition::ResetScheduler(v14);
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
  if ( v12 )
    CDisplaySet::Release(v12, (unsigned int)v13);
  if ( v4 )
    CDisplaySet::Release(v4, (unsigned int)v13);
  return (unsigned int)v18;
}
