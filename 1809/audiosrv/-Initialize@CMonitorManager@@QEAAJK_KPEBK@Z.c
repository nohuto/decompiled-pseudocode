/*
 * XREFs of ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180057924
 * Callers:
 *     ?ListenTo_Initialize@@YAJXZ @ 0x18005789C (-ListenTo_Initialize@@YAJXZ.c)
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180013A30 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180019A54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXXZ @ 0x180057C1C (-RemoveAll@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x180059690 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180059750 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x180059834 (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x180059904 (-InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800FB5F4 (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800FB628 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptureMonitor@1@@Z @ 0x1800FB784 (-CreateMonitor@CMonitorManager@@AEAAJPEAUIMMDeviceEnumerator@@PEAUIMMDevice@@PEBG_NPEAPEAVCaptur.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x1800FF240 (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x1800FFB04 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800FFBB0 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801035AC (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180103FCC (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CMonitorManager::Initialize(
        CMonitorManager *this,
        BOOL a2,
        __int64 a3,
        CMonitorManager::CaptureMonitor *a4)
{
  CMonitorManager *v4; // r14
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  const unsigned int *v7; // r9
  HRESULT restarted; // esi
  _QWORD *v9; // rbx
  unsigned int v10; // esi
  int v11; // eax
  void *v12; // rcx
  struct _RTL_CRITICAL_SECTION *v13; // rbx
  _QWORD *v14; // r15
  ATL::CAtlException *v16; // rbx
  ATL::CAtlException *v17; // rbx
  __int64 v18; // rcx
  __int64 *v19; // rax
  CMonitorManager::CaptureMonitor *v20; // rbx
  int v21; // eax
  int v22; // r15d
  __int64 v23; // rax
  struct CMonitorManager::CaptureMonitor *v24; // rbx
  bool v25; // r15
  CMonitor *v26; // rcx
  __int64 v27; // rdx
  struct IMMDevice *v28; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-B0h] BYREF
  struct CMonitorManager::CaptureMonitor *v30; // [rsp+40h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-A0h] BYREF
  int v32; // [rsp+50h] [rbp-98h] BYREF
  __int64 v33; // [rsp+58h] [rbp-90h] BYREF
  unsigned int v34; // [rsp+60h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-80h] BYREF
  char v36; // [rsp+70h] [rbp-78h]
  __int128 v37; // [rsp+78h] [rbp-70h] BYREF
  __int64 v38; // [rsp+88h] [rbp-60h]
  __int128 v39; // [rsp+90h] [rbp-58h]
  int v40; // [rsp+A0h] [rbp-48h]
  __int64 v41; // [rsp+A8h] [rbp-40h]
  ATL::CAtlException *v42; // [rsp+B0h] [rbp-38h] BYREF
  ATL::CAtlException *v43; // [rsp+B8h] [rbp-30h] BYREF
  CMonitorManager *v44; // [rsp+F0h] [rbp+8h] BYREF
  BOOL v45; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v46; // [rsp+100h] [rbp+18h]
  CMonitorManager::CaptureMonitor *v47; // [rsp+108h] [rbp+20h] BYREF

  v47 = a4;
  v46 = a3;
  v45 = a2;
  v44 = this;
  v41 = -2LL;
  v4 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids);
  }
  v33 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 10;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 16);
  v36 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)v4 + 14) && *((_DWORD *)v4 + 14) != 3 )
  {
    restarted = -2147024809;
LABEL_37:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        (unsigned int)restarted);
    }
    v18 = *((_QWORD *)v4 + 8);
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64, CMonitorManager *))(*(_QWORD *)v18 + 56LL))(v18, v4);
      Microsoft::WRL::WeakRef::~WeakRef((CMonitorManager *)((char *)v4 + 64));
    }
    while ( v38 )
    {
      v19 = (__int64 *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
                         &v37,
                         &v44);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v47, *v19);
      if ( v44 )
        (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)v44 + 16LL))(v44);
      v20 = v47;
      CMonitor::StopIfRunning(*((CMonitor **)v47 + 8));
      CMonitorManager::CaptureMonitor::UninitializeSynchronously(v20);
      (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    CMonitorManager::CleanupMonitorRestartTimer(v4);
    goto LABEL_28;
  }
  CMonitorManager::InitializeRegistryWatcher(v4);
  restarted = CMonitorManager::InitializeMonitorRestartTimer(v4, v5, v6, v7);
  if ( restarted < 0 )
    goto LABEL_37;
  v9 = (_QWORD *)((char *)v4 + 64);
  restarted = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                (LPVOID *)v4 + 8);
  if ( restarted < 0 )
    goto LABEL_37;
  restarted = (*(__int64 (__fastcall **)(_QWORD, CMonitorManager *))(*(_QWORD *)*v9 + 48LL))(*v9, v4);
  if ( restarted < 0 )
    goto LABEL_37;
  restarted = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(*(_QWORD *)*v9 + 24LL))(
                *v9,
                2LL,
                1LL,
                &v33);
  if ( restarted < 0 )
    goto LABEL_37;
  restarted = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 24LL))(v33, &v34);
  if ( restarted < 0 )
    goto LABEL_37;
  v10 = 0;
  while ( 2 )
  {
    LODWORD(v47) = v10;
    if ( v10 < v34 )
    {
      v28 = 0LL;
      v29 = 0LL;
      pv = 0LL;
      LOBYTE(v45) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v33 + 32LL))(v33, v10, &v28) < 0
        || ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v28->lpVtbl->QueryInterface)(
             v28,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v29) < 0
        || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 24LL))(v29, &v32) < 0 )
      {
        v12 = 0LL;
        goto LABEL_20;
      }
      v11 = v32;
      if ( v32 == 1 )
      {
        if ( CMonitor::IsCaptureMonitorEnabled(v28, (unsigned __int16 **)&pv, (bool *)&v45) )
          goto LABEL_48;
        v11 = v32;
      }
      if ( v11 || !CMonitorManager::IsRenderMirrorEnabled(v4, v28, (unsigned __int16 **)&pv) )
        goto LABEL_19;
LABEL_48:
      v30 = 0LL;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids);
      }
      v21 = CMonitorManager::CreateMonitor(
              v4,
              *((struct IMMDeviceEnumerator **)v4 + 8),
              v28,
              (const unsigned __int16 *)pv,
              v45,
              &v30);
      v22 = v21;
      if ( v21 < 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            12LL,
            &WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
            (unsigned int)v21);
        }
        if ( !v30 )
          goto LABEL_19;
        v23 = *(_QWORD *)v30;
        goto LABEL_82;
      }
      if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        v24 = v30;
      }
      else
      {
        v24 = v30;
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          13LL,
          &WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
          v30,
          *((_QWORD *)v30 + 8));
      }
      v25 = v22 == 0;
      LOBYTE(v45) = v25;
      try
      {
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
          &v37,
          v24);
      }
      catch ( ATL::CAtlException *v42 )
      {
        v16 = v42;
        if ( *(_DWORD *)v42 == -1073741571 )
          o__resetstkoflw_0();
        LODWORD(v46) = *(_DWORD *)v16;
        if ( (int)v46 >= 0 )
        {
          v4 = v44;
          v10 = (unsigned int)v47;
          v24 = v30;
          v25 = v45;
          goto LABEL_78;
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            14LL,
            &WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
            (unsigned int)v46);
        }
        if ( v30 )
          (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v30 + 16LL))(v30);
        CoTaskMemFree(pv);
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        if ( v28 )
          ((void (__fastcall *)(struct IMMDevice *))v28->lpVtbl->Release)(v28);
        v4 = v44;
        v10 = (unsigned int)v47;
LABEL_24:
        ++v10;
        continue;
      }
LABEL_78:
      v26 = (CMonitor *)*((_QWORD *)v24 + 8);
      if ( v25 )
        CMonitor::Start(v26);
      else
        CMonitor::Terminate(v26, 1, 0LL);
      v23 = *(_QWORD *)v24;
LABEL_82:
      (*(void (**)(void))(v23 + 16))();
LABEL_19:
      v12 = pv;
LABEL_20:
      CoTaskMemFree(v12);
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      if ( v28 )
        ((void (__fastcall *)(struct IMMDevice *))v28->lpVtbl->Release)(v28);
      goto LABEL_24;
    }
    break;
  }
  *((_DWORD *)v4 + 14) = 1;
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 72);
  v47 = (CMonitorManager *)((char *)v4 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 72));
  restarted = 0;
  v14 = (_QWORD *)v37;
  while ( v14 )
  {
    try
    {
      v27 = v14[2];
      v14 = (_QWORD *)*v14;
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (char *)v4 + 112,
        v27);
    }
    catch ( ATL::CAtlException *v43 )
    {
      v17 = v43;
      if ( *(_DWORD *)v43 == -1073741571 )
        o__resetstkoflw_0();
      LODWORD(v46) = *(_DWORD *)v17;
      v4 = v44;
      restarted = v46;
      v13 = (struct _RTL_CRITICAL_SECTION *)v47;
      break;
    }
  }
  LeaveCriticalSection(v13);
  if ( restarted < 0 )
    goto LABEL_37;
LABEL_28:
  if ( v36 )
    LeaveCriticalSection(lpCriticalSection);
  ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAll(&v37);
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  return (unsigned int)restarted;
}
