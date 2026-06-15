/*
 * XREFs of ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180060488
 * Callers:
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x18005F030 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180036D2C (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180048988 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180059474 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?RemoveAll@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXXZ @ 0x180060FC4 (-RemoveAll@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x180061000 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x1800610C0 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     ?InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z @ 0x1800611A4 (-InitializeMonitorRestartTimer@CMonitorManager@@AEAAJK_KPEBK@Z.c)
 *     ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x180061274 (-InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800D2038 (WPP_SF_qq.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180107AFC (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x180107B30 (-CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x180107D84 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 *     ?RemoveHead@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA?AV?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@XZ @ 0x18010C4AC (-RemoveHead@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x18010CF2C (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18010CFE0 (-UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180110DA0 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180111858 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
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
  struct IUnknown **v9; // rbx
  struct IUnknown *v10; // rcx
  unsigned int v11; // r15d
  int v12; // eax
  void *v13; // rcx
  struct _RTL_CRITICAL_SECTION *v14; // rbx
  _QWORD *v15; // r15
  ATL::CAtlException *v17; // rbx
  ATL::CAtlException *v18; // rbx
  __int64 v19; // rcx
  __int64 *v20; // rax
  CMonitorManager::CaptureMonitor *v21; // rbx
  struct IMMDevice *v22; // rbx
  int v23; // eax
  int v24; // eax
  int v25; // esi
  __int64 v26; // rax
  __int64 *v27; // rbx
  bool v28; // si
  CMonitor *v29; // rcx
  __int64 v30; // rdx
  int ppv; // [rsp+20h] [rbp-D8h]
  struct IMMDevice *v32; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C0h] BYREF
  LPVOID v34; // [rsp+40h] [rbp-B8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-B0h] BYREF
  __int64 *v36; // [rsp+50h] [rbp-A8h] BYREF
  int v37; // [rsp+58h] [rbp-A0h] BYREF
  struct IUnknown *v38; // [rsp+60h] [rbp-98h] BYREF
  __int64 v39; // [rsp+68h] [rbp-90h] BYREF
  unsigned int v40; // [rsp+70h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-80h] BYREF
  char v42; // [rsp+80h] [rbp-78h]
  __int128 v43; // [rsp+88h] [rbp-70h] BYREF
  __int64 v44; // [rsp+98h] [rbp-60h]
  __int128 v45; // [rsp+A0h] [rbp-58h]
  int v46; // [rsp+B0h] [rbp-48h]
  __int64 v47; // [rsp+B8h] [rbp-40h]
  ATL::CAtlException *v48; // [rsp+C0h] [rbp-38h] BYREF
  ATL::CAtlException *v49; // [rsp+C8h] [rbp-30h] BYREF
  CMonitorManager *v50; // [rsp+100h] [rbp+8h] BYREF
  BOOL v51; // [rsp+108h] [rbp+10h] BYREF
  __int64 v52; // [rsp+110h] [rbp+18h]
  CMonitorManager::CaptureMonitor *v53; // [rsp+118h] [rbp+20h] BYREF

  v53 = a4;
  v52 = a3;
  v51 = a2;
  v50 = this;
  v47 = -2LL;
  v4 = this;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids);
  }
  v39 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 10;
  v38 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v4 + 16);
  v42 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)v4 + 14) && *((_DWORD *)v4 + 14) != 3 )
  {
    restarted = -2147024809;
LABEL_43:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        (unsigned int)restarted);
    }
    v19 = *((_QWORD *)v4 + 8);
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64, CMonitorManager *))(*(_QWORD *)v19 + 56LL))(v19, v4);
      Microsoft::WRL::WeakRef::~WeakRef((CMonitorManager *)((char *)v4 + 64));
    }
    while ( v44 )
    {
      v20 = (__int64 *)ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveHead(
                         &v43,
                         &v50);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v53, *v20);
      if ( v50 )
        (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)v50 + 16LL))(v50);
      v21 = v53;
      CMonitor::StopIfRunning(*((CMonitor **)v53 + 25));
      CMonitorManager::CaptureMonitor::UninitializeSynchronously(v21);
      (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    CMonitorManager::CleanupMonitorRestartTimer(v4);
    goto LABEL_32;
  }
  CMonitorManager::InitializeRegistryWatcher(v4);
  restarted = CMonitorManager::InitializeMonitorRestartTimer(v4, v5, v6, v7);
  if ( restarted < 0 )
    goto LABEL_43;
  v9 = (struct IUnknown **)((char *)v4 + 64);
  restarted = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                (LPVOID *)v4 + 8);
  if ( restarted < 0 )
    goto LABEL_43;
  v10 = v38;
  if ( v38 != *v9 )
  {
    ATL::AtlComQIPtrAssign(&v38, *v9, &GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8);
    v10 = v38;
  }
  if ( v10 )
    ((void (__fastcall *)(struct IUnknown *, __int64))v10->lpVtbl[3].Release)(v10, 1LL);
  restarted = ((__int64 (__fastcall *)(struct IUnknown *, CMonitorManager *))(*v9)->lpVtbl[2].QueryInterface)(*v9, v4);
  if ( restarted < 0 )
    goto LABEL_43;
  restarted = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64, __int64 *))(*v9)->lpVtbl[1].QueryInterface)(
                *v9,
                2LL,
                1LL,
                &v39);
  if ( restarted < 0 )
    goto LABEL_43;
  restarted = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v39 + 24LL))(v39, &v40);
  if ( restarted < 0 )
    goto LABEL_43;
  v11 = 0;
  while ( 2 )
  {
    LODWORD(v53) = v11;
    if ( v11 < v40 )
    {
      v32 = 0LL;
      v33 = 0LL;
      pv = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v39 + 32LL))(v39, v11, &v32) < 0
        || ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v32->lpVtbl->QueryInterface)(
             v32,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v33) < 0
        || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 24LL))(v33, &v37) < 0 )
      {
        v13 = 0LL;
        goto LABEL_24;
      }
      v12 = v37;
      if ( v37 == 1 )
      {
        if ( CMonitor::IsCaptureMonitorEnabled(v32, (unsigned __int16 **)&pv, (bool *)&v51) )
          goto LABEL_54;
        v12 = v37;
      }
      if ( v12 || !CMonitorManager::IsRenderMirrorEnabled(v4, v32, (unsigned __int16 **)&pv) )
        goto LABEL_23;
LABEL_54:
      v36 = 0LL;
      v34 = 0LL;
      v22 = v32;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &v34,
        0LL);
      v23 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))v22->lpVtbl->GetId)(v22, &v34);
      if ( v23 < 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            11LL,
            &WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
            (unsigned int)v23);
        }
        if ( v34 )
          CoTaskMemFree(v34);
        goto LABEL_23;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids);
      }
      LOBYTE(ppv) = 0;
      v24 = CMonitorManager::CreateMonitor(v4, v34, pv, 0LL, ppv, &v36);
      v25 = v24;
      if ( v24 < 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            13LL,
            &WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
            (unsigned int)v24);
        }
        if ( v34 )
          CoTaskMemFree(v34);
        if ( !v36 )
          goto LABEL_23;
        v26 = *v36;
        goto LABEL_102;
      }
      if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        v27 = v36;
      }
      else
      {
        v27 = v36;
        WPP_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          14LL,
          &WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
          v36,
          v36[25]);
      }
      v28 = v25 == 0;
      LOBYTE(v51) = v28;
      try
      {
        ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
          &v43,
          v27);
      }
      catch ( ATL::CAtlException *v48 )
      {
        v17 = v48;
        if ( *(_DWORD *)v48 == -1073741571 )
          _o__resetstkoflw();
        LODWORD(v52) = *(_DWORD *)v17;
        if ( (int)v52 >= 0 )
        {
          v4 = v50;
          v11 = (unsigned int)v53;
          v27 = v36;
          v28 = v51;
          goto LABEL_96;
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            15LL,
            &WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
            (unsigned int)v52);
        }
        if ( v34 )
          CoTaskMemFree(v34);
        if ( v36 )
          (*(void (__fastcall **)(__int64 *))(*v36 + 16))(v36);
        CoTaskMemFree(pv);
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        if ( v32 )
          ((void (__fastcall *)(struct IMMDevice *))v32->lpVtbl->Release)(v32);
        v4 = v50;
        v11 = (unsigned int)v53;
LABEL_28:
        ++v11;
        continue;
      }
LABEL_96:
      v29 = (CMonitor *)v27[25];
      if ( v28 )
        CMonitor::Start(v29);
      else
        CMonitor::Terminate(v29, 1, 0LL);
      if ( v34 )
        CoTaskMemFree(v34);
      v26 = *v27;
LABEL_102:
      (*(void (**)(void))(v26 + 16))();
LABEL_23:
      v13 = pv;
LABEL_24:
      CoTaskMemFree(v13);
      if ( v33 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      if ( v32 )
        ((void (__fastcall *)(struct IMMDevice *))v32->lpVtbl->Release)(v32);
      goto LABEL_28;
    }
    break;
  }
  *((_DWORD *)v4 + 14) = 1;
  v14 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 72);
  v53 = (CMonitorManager *)((char *)v4 + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 72));
  restarted = 0;
  v15 = (_QWORD *)v43;
  while ( v15 )
  {
    try
    {
      v30 = v15[2];
      v15 = (_QWORD *)*v15;
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (char *)v4 + 112,
        v30);
    }
    catch ( ATL::CAtlException *v49 )
    {
      v18 = v49;
      if ( *(_DWORD *)v49 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v52) = *(_DWORD *)v18;
      v4 = v50;
      restarted = v52;
      v14 = (struct _RTL_CRITICAL_SECTION *)v53;
      break;
    }
  }
  LeaveCriticalSection(v14);
  if ( restarted < 0 )
    goto LABEL_43;
LABEL_32:
  if ( v42 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v38 )
    ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
  ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAll(&v43);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  return (unsigned int)restarted;
}
