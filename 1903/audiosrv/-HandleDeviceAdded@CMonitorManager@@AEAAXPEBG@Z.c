/*
 * XREFs of ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180109E10
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18010C150 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18005DDC0 (-IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x18005DE80 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180108488 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z @ 0x18010A144 (-HandleDeviceArrivalForExistingMonitors@CMonitorManager@@AEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CMonitorManager::HandleDeviceAdded(CMonitorManager *this, const unsigned __int16 *a2)
{
  int MonitorForCaptureDeviceIfAppropriate; // ebx
  unsigned int i; // r15d
  void *v6; // rcx
  char IsCaptureMonitorEnabled; // al
  LPVOID v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  struct IMMDevice *v12; // [rsp+38h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  LPVOID pv[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+30h] BYREF
  int v16; // [rsp+A0h] [rbp+40h] BYREF
  struct IMMDevice *v17; // [rsp+A8h] [rbp+48h] BYREF

  pv[1] = (LPVOID)-2LL;
  v12 = 0LL;
  v13 = 0LL;
  CMonitorManager::HandleDeviceArrivalForExistingMonitors(this, a2);
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           a2,
                                           &v12);
  if ( MonitorForCaptureDeviceIfAppropriate < 0
    || (MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v12->lpVtbl->QueryInterface)(
                                                 v12,
                                                 &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                                 &v13),
        MonitorForCaptureDeviceIfAppropriate < 0)
    || (MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 24LL))(
                                                 v13,
                                                 &v16),
        MonitorForCaptureDeviceIfAppropriate < 0) )
  {
LABEL_6:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x51u,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        MonitorForCaptureDeviceIfAppropriate);
    }
    goto LABEL_10;
  }
  if ( v16 == 1 )
  {
    MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v12);
    if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
      goto LABEL_10;
    goto LABEL_6;
  }
  v11 = 0LL;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 8) + 24LL))(
                                           *((_QWORD *)this + 8),
                                           1LL,
                                           1LL,
                                           &v11);
  if ( MonitorForCaptureDeviceIfAppropriate < 0
    || (MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 24LL))(
                                                 v11,
                                                 &v15),
        MonitorForCaptureDeviceIfAppropriate < 0) )
  {
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    goto LABEL_6;
  }
  for ( i = 0; i < v15; ++i )
  {
    v17 = 0LL;
    pv[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v11 + 32LL))(v11, i, &v17) >= 0 )
    {
      IsCaptureMonitorEnabled = CMonitor::IsCaptureMonitorEnabled(v17, (unsigned __int16 **)pv, 0LL);
      v8 = pv[0];
      if ( IsCaptureMonitorEnabled )
      {
        if ( !(unsigned int)_o__wcsicmp(pv[0], a2) )
        {
          v9 = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v17);
          if ( v9 < 0
            && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x4Fu,
              (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
              v9);
          }
        }
      }
      v6 = v8;
    }
    else
    {
      v6 = 0LL;
    }
    CoTaskMemFree(v6);
    if ( v17 )
      ((void (__fastcall *)(struct IMMDevice *))v17->lpVtbl->Release)(v17);
  }
  v17 = 0LL;
  if ( CMonitorManager::IsRenderMirrorEnabled(this, v12, (unsigned __int16 **)&v17) )
  {
    v10 = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v12);
    if ( v10 < 0
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x50u,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        v10);
    }
  }
  CoTaskMemFree(v17);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_10:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v12 )
    ((void (__fastcall *)(struct IMMDevice *))v12->lpVtbl->Release)(v12);
}
