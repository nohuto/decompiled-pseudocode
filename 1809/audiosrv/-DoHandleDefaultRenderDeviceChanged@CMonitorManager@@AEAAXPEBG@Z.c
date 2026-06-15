/*
 * XREFs of ?DoHandleDefaultRenderDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FC230
 * Callers:
 *     ?HandleDefaultRenderDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800FCE50 (-HandleDefaultRenderDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180019A54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180042B80 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x180059690 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180059750 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B0B7C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ?CallDestructors@?$CAtlArray@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V?$CElementTraits@V?$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@@2@@ATL@@CAXPEAV?$CComPtr@UIAudioEndpointVolumeCallback@@@2@_K@Z @ 0x1800BACB0 (-CallDestructors@-$CAtlArray@V-$CComPtr@UIAudioEndpointVolumeCallback@@@ATL@@V-$CElementTraits@V.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x1800BB180 (-GrowBuffer@-$CAtlArray@PEAVExclusiveEndpointInfo@@V-$CElementTraits@PEAVExclusiveEndpointInfo@@.c)
 *     WPP_SF_SS @ 0x1800C68E8 (WPP_SF_SS.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FBA98 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z @ 0x1800FC9C4 (-EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z.c)
 *     ?IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x1800FD73C (-IsMonitorMirrorEligible@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800FF2B0 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CMonitorManager::DoHandleDefaultRenderDeviceChanged(CMonitorManager *this, const unsigned __int16 *a2)
{
  struct CMonitorManager::CaptureMonitor *v2; // r15
  __int64 v3; // rcx
  _QWORD *v4; // rsi
  unsigned __int64 v5; // r12
  void *v6; // rax
  __int64 *Next; // rax
  CAudioSessionManager *v8; // rcx
  _BYTE *v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 i; // r14
  struct CMonitorManager::CaptureMonitor *v12; // rbx
  int v13; // ebx
  unsigned int v14; // ebx
  void *v15; // rcx
  int v16; // eax
  int v17; // eax
  int MonitorForCaptureDeviceIfAppropriate; // eax
  char *v19; // r14
  CMonitorManager *v20; // rcx
  void **v21; // r15
  struct CMonitorManager::CaptureMonitor *v22; // rcx
  ATL::CAtlException *v23; // rbx
  __int64 v24; // [rsp+30h] [rbp-C8h] BYREF
  struct IMMDevice *v25; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+40h] [rbp-B8h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-B0h] BYREF
  struct IMMDevice *v28; // [rsp+50h] [rbp-A8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-A0h] BYREF
  char v30; // [rsp+60h] [rbp-98h]
  _QWORD *v31; // [rsp+68h] [rbp-90h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp-88h]
  unsigned __int64 v33; // [rsp+78h] [rbp-80h]
  int v34; // [rsp+80h] [rbp-78h]
  LPCRITICAL_SECTION v35; // [rsp+88h] [rbp-70h] BYREF
  char v36; // [rsp+90h] [rbp-68h]
  __int64 v37; // [rsp+98h] [rbp-60h]
  __int64 v38; // [rsp+A0h] [rbp-58h]
  __int64 v39; // [rsp+A8h] [rbp-50h]
  ATL::CAtlException *v40; // [rsp+B0h] [rbp-48h] BYREF
  struct CMonitorManager::CaptureMonitor *v41; // [rsp+100h] [rbp+8h] BYREF
  const unsigned __int16 *v42; // [rsp+108h] [rbp+10h]
  __int64 v43; // [rsp+110h] [rbp+18h] BYREF
  unsigned int v44; // [rsp+118h] [rbp+20h] BYREF

  v42 = a2;
  v41 = this;
  v37 = -2LL;
  v2 = this;
  v35 = (LPCRITICAL_SECTION)((char *)this + 16);
  v36 = 0;
  ATL::CCritSecLock::Lock(&v35);
  if ( *((_DWORD *)v2 + 14) != 1 )
    goto LABEL_87;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v2 + 72);
  v30 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v26 = 0LL;
  v38 = 0LL;
  v28 = 0LL;
  v39 = 0LL;
  v4 = 0LL;
  v31 = 0LL;
  v5 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0;
  v6 = (void *)*((_QWORD *)v2 + 14);
  pv = v6;
  while ( v6 )
  {
    Next = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v3, (_QWORD **)&pv);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v24, *Next);
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v9 = (_BYTE *)v24;
    }
    else
    {
      v9 = (_BYTE *)v24;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        *(const wchar_t **)(v24 + 72),
        *(_QWORD *)(*(_QWORD *)(v24 + 64) + 64LL));
      v8 = WPP_GLOBAL_Control;
    }
    if ( v9[13] )
    {
      if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v8 + 7) & 0x800000) != 0
        && *((_BYTE *)v8 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v8 + 2), 0x1Eu, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids);
      }
      try
      {
        v10 = v5;
        if ( v5 >= v33 )
        {
          if ( !ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>::GrowBuffer(
                  (__int64)&v31,
                  v5 + 1) )
            ATL::AtlThrowImpl(-2147024882);
          v5 = v32;
          v4 = v31;
        }
        ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
          &v4[v10],
          (__int64)v9);
        v32 = ++v5;
      }
      catch ( ATL::CAtlException *v40 )
      {
        v23 = v40;
        if ( *(_DWORD *)v40 == -1073741571 )
          o__resetstkoflw_0();
        LODWORD(v43) = *(_DWORD *)v23;
        if ( (int)v43 < 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          v2 = v41;
          v5 = v32;
          v4 = v31;
          goto LABEL_23;
        }
        v2 = v41;
        v5 = v32;
        v4 = v31;
        v9 = (_BYTE *)v24;
      }
    }
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_23:
    v6 = pv;
  }
  for ( i = 0LL; i < v5; ++i )
  {
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v41, v4[i]);
    v43 = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Fu, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids);
    }
    v12 = v41;
    CMonitorManager::RemoveMonitor(v2, v41);
    if ( v12 )
      (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)v2 + 8) + 24LL))(
          *((_QWORD *)v2 + 8),
          2LL,
          1LL,
          &v26);
  if ( v13 < 0 )
    goto LABEL_74;
  v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v26 + 24LL))(v26, &v44);
  if ( v13 < 0 )
    goto LABEL_74;
  v14 = 0;
  while ( 2 )
  {
    if ( v14 < v44 )
    {
      v25 = 0LL;
      v24 = 0LL;
      pv = 0LL;
      LOBYTE(v41) = 0;
      if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v26 + 32LL))(v26, v14, &v25) < 0
        || ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v25->lpVtbl->QueryInterface)(
             v25,
             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
             &v24) < 0
        || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 24LL))(v24, &v43) < 0 )
      {
        goto LABEL_38;
      }
      v16 = v43;
      if ( !(_DWORD)v43 )
      {
        v17 = CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate(v2, v25, *((unsigned __int16 **)v2 + 42));
        if ( v17 < 0 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x20u,
              (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
              v17);
          }
LABEL_38:
          v15 = 0LL;
LABEL_60:
          CoTaskMemFree(v15);
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          if ( v25 )
            ((void (__fastcall *)(struct IMMDevice *))v25->lpVtbl->Release)(v25);
          ++v14;
          continue;
        }
        v16 = v43;
      }
      if ( v16 == 1 )
      {
        if ( !CMonitor::IsCaptureMonitorEnabled(v25, (unsigned __int16 **)&pv, (bool *)&v41) || !(_BYTE)v41 )
        {
          v16 = v43;
          goto LABEL_52;
        }
LABEL_54:
        MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(v2, v25);
        if ( MonitorForCaptureDeviceIfAppropriate < 0
          && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x21u,
            (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
            MonitorForCaptureDeviceIfAppropriate);
        }
      }
      else
      {
LABEL_52:
        if ( !v16 && CMonitorManager::IsRenderMirrorEnabled(v2, v25, (unsigned __int16 **)&pv) )
          goto LABEL_54;
      }
      v15 = pv;
      goto LABEL_60;
    }
    break;
  }
  v19 = (char *)v42;
  v13 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)v2 + 8) + 40LL))(
          *((_QWORD *)v2 + 8),
          v42,
          &v28);
  if ( v13 >= 0 && !CMonitorManager::IsMonitorMirrorEligible(v20, v28) )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
      &v41,
      v19,
      0xFFFFFFFFFFFFFFFFuLL);
    v21 = (void **)((char *)v2 + 336);
    if ( v21 == (void **)&v41 )
    {
      v22 = v41;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        v21,
        v41);
      v22 = 0LL;
    }
    if ( v22 )
      CoTaskMemFree(v22);
    if ( !*v21 )
      v13 = -2147024882;
  }
LABEL_74:
  if ( v4 )
  {
    ATL::CAtlArray<ATL::CComPtr<IAudioEndpointVolumeCallback>,ATL::CElementTraits<ATL::CComPtr<IAudioEndpointVolumeCallback>>>::CallDestructors(
      (__int64)v4,
      v5);
    free(v4);
  }
  if ( v28 )
    ((void (__fastcall *)(struct IMMDevice *))v28->lpVtbl->Release)(v28);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v30 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v13 < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, v13);
  }
LABEL_87:
  if ( v36 )
    LeaveCriticalSection(v35);
}
