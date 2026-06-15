/*
 * XREFs of ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800FE3A0
 * Callers:
 *     ?OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ @ 0x1800FD8C8 (-OnAudioMirrorEnabledChange@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x180059690 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180059750 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800B58C4 (WPP_SF_qS.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FBA98 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800FCC78 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800FF2B0 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMonitorManager::OnMonitorEnabledChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  int MonitorForCaptureDeviceIfAppropriate; // ebx
  wchar_t *v6; // rbx
  CAudioSessionManager *v7; // rcx
  int v8; // eax
  struct CMonitorManager::CaptureMonitor *v9; // rcx
  struct IMMDevice *v10; // [rsp+30h] [rbp-20h] BYREF
  wchar_t *String2; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-10h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  struct CMonitorManager::CaptureMonitor *v14; // [rsp+98h] [rbp+48h] BYREF

  v12[1] = -2LL;
  v10 = 0LL;
  v12[0] = 0LL;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           a2,
                                           &v10);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_37;
  MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, _QWORD *))v10->lpVtbl->QueryInterface)(
                                           v10,
                                           &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                           v12);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_37;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v12[0] + 24LL))(
                                           v12[0],
                                           &v13);
  if ( MonitorForCaptureDeviceIfAppropriate < 0 )
    goto LABEL_37;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, a2);
  }
  CMonitorManager::FindMonitor((__int64)this, (struct IUnknown **)&v14, a2);
  if ( v14 )
  {
    v6 = 0LL;
    String2 = 0LL;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x27u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids);
      v7 = WPP_GLOBAL_Control;
    }
    if ( *((_BYTE *)v14 + 12) )
      goto LABEL_29;
    v8 = v13;
    if ( v13 == 1 )
    {
      if ( CMonitor::IsCaptureMonitorEnabled(v10, &String2, 0LL) )
        goto LABEL_19;
      v8 = v13;
      v6 = String2;
      v7 = WPP_GLOBAL_Control;
    }
    if ( v8 )
      goto LABEL_29;
    if ( !CMonitorManager::IsRenderMirrorEnabled(this, v10, &String2) )
    {
      v6 = String2;
LABEL_28:
      v7 = WPP_GLOBAL_Control;
LABEL_29:
      if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v7 + 7) & 0x800000) != 0
        && *((_BYTE *)v7 + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)v7 + 2), 0x29u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids, a2);
      }
      CMonitorManager::RemoveMonitor(this, v14);
      CoTaskMemFree(v6);
      goto LABEL_34;
    }
LABEL_19:
    v6 = String2;
    if ( !_wcsicoll(*((const wchar_t **)v14 + 10), String2) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids);
      }
      CoTaskMemFree(v6);
      v9 = v14;
      goto LABEL_25;
    }
    goto LABEL_28;
  }
LABEL_34:
  MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v10);
  v9 = v14;
  if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
  {
LABEL_25:
    if ( v9 )
      (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_41;
  }
  if ( v14 )
    (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_37:
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Au,
      (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
      MonitorForCaptureDeviceIfAppropriate);
  }
LABEL_41:
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  if ( v10 )
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
}
