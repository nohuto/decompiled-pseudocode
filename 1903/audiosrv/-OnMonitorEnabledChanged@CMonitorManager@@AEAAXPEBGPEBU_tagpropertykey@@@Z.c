/*
 * XREFs of ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18010B980
 * Callers:
 *     ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x18010AEC4 (-OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18005DDC0 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x18005DE80 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800C3FA4 (WPP_SF_qS.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180108488 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1801098D0 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18010CA1C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMonitorManager::OnMonitorEnabledChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  int MonitorForCaptureDeviceIfAppropriate; // ebx
  void *v6; // rbx
  CAudioSessionManager *v7; // rcx
  int v8; // eax
  _QWORD *v9; // rcx
  struct CMonitorManager::CaptureMonitor *v10; // rcx
  struct IMMDevice *v11; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF
  struct CMonitorManager::CaptureMonitor *v15; // [rsp+98h] [rbp+48h] BYREF

  v13[1] = -2LL;
  v11 = 0LL;
  v13[0] = 0LL;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           a2,
                                           &v11);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_39;
  MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, _QWORD *))v11->lpVtbl->QueryInterface)(
                                           v11,
                                           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                           v13);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_39;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v13[0] + 24LL))(
                                           v13[0],
                                           &v14);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_39;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids, a2);
  }
  CMonitorManager::FindMonitor((__int64)this, (struct IUnknown **)&v15, a2);
  if ( v15 )
  {
    v6 = 0LL;
    pv = 0LL;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids);
      v7 = WPP_GLOBAL_Control;
    }
    if ( *((_BYTE *)v15 + 12) )
      goto LABEL_31;
    v8 = v14;
    if ( v14 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(v11, (unsigned __int16 **)&pv, 0LL) )
        goto LABEL_19;
      v8 = v14;
      v6 = pv;
      v7 = WPP_GLOBAL_Control;
    }
    if ( v8 )
      goto LABEL_31;
    if ( !CMonitorManager::IsRenderMirrorEnabled(this, v11, (unsigned __int16 **)&pv) )
    {
      v6 = pv;
LABEL_30:
      v7 = WPP_GLOBAL_Control;
LABEL_31:
      if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v7 + 7) & 0x800000) != 0
        && *((_BYTE *)v7 + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)v7 + 2), 0x2Au, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids, a2);
      }
      CMonitorManager::RemoveMonitor(this, v15, 1);
      CoTaskMemFree(v6);
      goto LABEL_36;
    }
LABEL_19:
    v9 = (_QWORD *)((char *)v15 + 160);
    if ( *((_QWORD *)v15 + 23) >= 8uLL )
      v9 = (_QWORD *)*v9;
    v6 = pv;
    if ( !(unsigned int)_o__wcsicmp(v9, pv) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x29u, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids);
      }
      CoTaskMemFree(v6);
      v10 = v15;
      goto LABEL_27;
    }
    goto LABEL_30;
  }
LABEL_36:
  MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v11);
  v10 = v15;
  if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
  {
LABEL_27:
    if ( v10 )
      (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_43;
  }
  if ( v15 )
    (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_39:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Bu,
      (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
      MonitorForCaptureDeviceIfAppropriate);
  }
LABEL_43:
  if ( v13[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  if ( v11 )
    ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->Release)(v11);
}
