/*
 * XREFs of ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801088F8
 * Callers:
 *     ?CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1801086A0 (-CreateMonitorIfAppropriateWorker@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WOR.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18005DDC0 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x18005DE80 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     WPP_SF_SS @ 0x1800D5138 (WPP_SF_SS.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180107FFC (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 *     ?CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMonitor@1@@Z @ 0x180108284 (-CreateMonitor@CMonitorManager@@AEAAJPEBG0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@_NPEAPEAVCaptureMon.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1801098D0 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x18010D490 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801112A0 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180111D58 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitorManager::DoCreateMonitorForCaptureDeviceIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2)
{
  int v5; // r14d
  int v6; // eax
  CAudioSessionManager *v7; // rcx
  CAudioSessionManager *v8; // rcx
  CMonitorManager::CaptureMonitor *v9; // rbx
  bool v10; // r12
  CMonitor *v11; // rcx
  CAudioSessionManager *v12; // rcx
  _QWORD *v13; // rax
  ATL::CAtlException *v14; // rbx
  LPVOID pv; // [rsp+30h] [rbp-88h] BYREF
  CMonitorManager::CaptureMonitor *v16; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int16 *v17; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18; // [rsp+48h] [rbp-70h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-68h] BYREF
  char v20; // [rsp+58h] [rbp-60h]
  _QWORD *v21; // [rsp+60h] [rbp-58h] BYREF
  LPCRITICAL_SECTION v22; // [rsp+68h] [rbp-50h] BYREF
  char v23; // [rsp+70h] [rbp-48h]
  __int64 v24; // [rsp+78h] [rbp-40h]
  ATL::CAtlException *v25; // [rsp+80h] [rbp-38h] BYREF
  bool v26; // [rsp+C0h] [rbp+8h] BYREF
  int v27; // [rsp+D0h] [rbp+18h] BYREF
  int v28; // [rsp+D8h] [rbp+20h]

  v24 = -2LL;
  v18 = 0LL;
  v17 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v20 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 14) != 1 )
  {
    if ( v20 )
      LeaveCriticalSection(lpCriticalSection);
    CoTaskMemFree(0LL);
    return 0LL;
  }
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
         &v18);
  if ( v5 < 0 )
    goto LABEL_67;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 24LL))(v18, &v27);
  if ( v5 < 0 )
    goto LABEL_67;
  v6 = v27;
  if ( v27 == 1 )
  {
    if ( CMonitor::IsCaptureMonitorEnabled(a2, &v17, &v26) )
      goto LABEL_12;
    v6 = v27;
  }
  if ( !v6 && CMonitorManager::IsRenderMirrorEnabled(this, a2, &v17) )
  {
LABEL_12:
    pv = 0LL;
    v5 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( v5 < 0 )
    {
LABEL_13:
      CoTaskMemFree(pv);
      goto LABEL_14;
    }
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
    {
      if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x44u,
          (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
          v17);
        v7 = WPP_GLOBAL_Control;
      }
      if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v7 + 7) & 0x800000) != 0
        && *((_BYTE *)v7 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v7 + 2), 0x45u, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids);
      }
    }
    v16 = 0LL;
    v5 = CMonitorManager::CreateMonitor((__int64)this, pv, v17, 0, 0, &v16);
    if ( v5 < 0 )
    {
      v9 = v16;
LABEL_64:
      if ( v9 )
        (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
      goto LABEL_13;
    }
    v22 = (LPCRITICAL_SECTION)((char *)this + 72);
    v23 = 0;
    ATL::CCritSecLock::Lock(&v22);
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v9 = v16;
    }
    else
    {
      v9 = v16;
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x46u,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        v16);
      v8 = WPP_GLOBAL_Control;
    }
    v10 = v5 == 0;
    v26 = v5 == 0;
    if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v8 + 7) & 0x800000) != 0
      && *((_BYTE *)v8 + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)v8 + 2),
        0x47u,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        (const wchar_t *)pv);
    }
    CMonitorManager::FindMonitor(this, &v21, pv);
    if ( v21 )
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
      {
        if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v13 = v21 + 20;
          if ( v21[23] >= 8uLL )
            v13 = (_QWORD *)*v13;
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x4Au,
            (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
            (const wchar_t *)pv,
            (__int64)v13);
          v12 = WPP_GLOBAL_Control;
        }
        if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v12 + 7) & 0x800000) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_q(
            *((_QWORD *)v12 + 2),
            0x4Bu,
            (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
            *((_QWORD *)v9 + 25));
        }
      }
      CMonitorManager::CaptureMonitor::Uninitialize(v9);
      goto LABEL_59;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        (_WORD)v21 + 72,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        (const wchar_t *)pv);
    }
    try
    {
      v5 = 0;
      ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
        (__int64 *)this + 14,
        (__int64)v9);
    }
    catch ( ATL::CAtlException *v25 )
    {
      v14 = v25;
      if ( *(_DWORD *)v25 == -1073741571 )
        _o__resetstkoflw();
      v28 = *(_DWORD *)v14;
      v5 = v28;
      v9 = v16;
      if ( v28 < 0 )
        goto LABEL_59;
      v10 = v26;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x49u,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        v17);
    }
    v11 = (CMonitor *)*((_QWORD *)v9 + 25);
    if ( v10 )
      CMonitor::Start(v11);
    else
      CMonitor::Terminate(v11, 1, 0LL);
LABEL_59:
    if ( v21 )
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
    if ( v23 )
      LeaveCriticalSection(v22);
    goto LABEL_64;
  }
LABEL_14:
  if ( v5 < 0 )
  {
LABEL_67:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x4Cu,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        v5);
    }
  }
  if ( v20 )
    LeaveCriticalSection(lpCriticalSection);
  CoTaskMemFree(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v5;
}
