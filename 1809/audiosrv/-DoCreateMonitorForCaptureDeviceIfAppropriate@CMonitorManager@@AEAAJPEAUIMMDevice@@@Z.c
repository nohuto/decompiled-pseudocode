/*
 * XREFs of ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FBCD8
 * Callers:
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800FBCB0 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x180059690 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180059750 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     WPP_SF_SS @ 0x1800C68E8 (WPP_SF_SS.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800FB5F4 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800FB784 (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800FCC78 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800FFB68 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801035AC (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180103FCC (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  int v5; // r15d
  int v6; // eax
  CAudioSessionManager *v7; // rcx
  CMonitorManager::CaptureMonitor *v8; // rbx
  CMonitor *v9; // rcx
  CAudioSessionManager *v10; // rcx
  ATL::CAtlException *v11; // rbx
  CMonitorManager::CaptureMonitor *v12; // [rsp+30h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int16 *v14; // [rsp+40h] [rbp-78h] BYREF
  __int64 v15; // [rsp+48h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-68h] BYREF
  char v17; // [rsp+58h] [rbp-60h]
  __int64 *v18; // [rsp+60h] [rbp-58h] BYREF
  LPCRITICAL_SECTION v19; // [rsp+68h] [rbp-50h] BYREF
  char v20; // [rsp+70h] [rbp-48h]
  __int64 v21; // [rsp+78h] [rbp-40h]
  ATL::CAtlException *v22; // [rsp+80h] [rbp-38h] BYREF
  bool v23; // [rsp+C0h] [rbp+8h] BYREF
  int v24; // [rsp+D0h] [rbp+18h] BYREF
  int v25; // [rsp+D8h] [rbp+20h]

  v21 = -2LL;
  v15 = 0LL;
  v14 = 0LL;
  v23 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 14) != 1 )
  {
    if ( v17 )
      LeaveCriticalSection(lpCriticalSection);
    CoTaskMemFree(0LL);
    return 0LL;
  }
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v15);
  if ( v5 < 0 )
    goto LABEL_62;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 24LL))(v15, &v24);
  if ( v5 < 0 )
    goto LABEL_62;
  v6 = v24;
  if ( v24 == 1 )
  {
    if ( CMonitor::IsCaptureMonitorEnabled(a2, &v14, &v23) )
      goto LABEL_12;
    v6 = v24;
  }
  if ( v6 || !CMonitorManager::IsRenderMirrorEnabled(this, a2, &v14) )
    goto LABEL_61;
LABEL_12:
  pv = 0LL;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x41u,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        v14);
      v7 = WPP_GLOBAL_Control;
    }
    if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v7 + 7) & 0x800000) != 0
      && *((_BYTE *)v7 + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)v7 + 2), 0x42u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids);
    }
  }
  v12 = 0LL;
  v5 = CMonitorManager::CreateMonitor(this, *((struct IMMDeviceEnumerator **)this + 8), a2, v14, v23, &v12);
  if ( v5 >= 0 )
  {
    v19 = (LPCRITICAL_SECTION)((char *)this + 72);
    v20 = 0;
    ATL::CCritSecLock::Lock(&v19);
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v8 = v12;
    }
    else
    {
      v8 = v12;
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x43u,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        v12);
    }
    v23 = v5 == 0;
    v5 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( v5 < 0 )
    {
LABEL_55:
      if ( v20 )
        LeaveCriticalSection(v19);
      goto LABEL_58;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x44u,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        (const wchar_t *)pv);
    }
    CMonitorManager::FindMonitor(this, &v18, pv);
    if ( v18 )
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
      {
        if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x47u,
            (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
            (const wchar_t *)pv,
            v18[10]);
          v10 = WPP_GLOBAL_Control;
        }
        if ( v10 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v10 + 7) & 0x800000) != 0
          && *((_BYTE *)v10 + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)v10 + 2),
            0x48u,
            (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
            *((_QWORD *)v8 + 8));
        }
      }
      CMonitorManager::CaptureMonitor::Uninitialize(v8);
      goto LABEL_53;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        (_WORD)v18 + 69,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        (const wchar_t *)pv);
    }
    try
    {
      v5 = 0;
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (__int64 *)this + 14,
        (__int64)v8);
    }
    catch ( ATL::CAtlException *v22 )
    {
      v11 = v22;
      if ( *(_DWORD *)v22 == -1073741571 )
        o__resetstkoflw_0();
      v25 = *(_DWORD *)v11;
      v5 = v25;
      v8 = v12;
      if ( v25 < 0 )
        goto LABEL_53;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x46u,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        v14);
    }
    v9 = (CMonitor *)*((_QWORD *)v8 + 8);
    if ( v23 )
      CMonitor::Start(v9);
    else
      CMonitor::Terminate(v9, 1, 0LL);
LABEL_53:
    if ( v18 )
      (*(void (__fastcall **)(__int64 *))(*v18 + 16))(v18);
    goto LABEL_55;
  }
  v8 = v12;
LABEL_58:
  if ( v8 )
    (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v8 + 16LL))(v8);
  CoTaskMemFree(pv);
LABEL_61:
  if ( v5 < 0 )
  {
LABEL_62:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x49u,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        v5);
    }
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  CoTaskMemFree(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v5;
}
