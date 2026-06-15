/*
 * XREFs of ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800FE720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800FCC78 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1801022BC (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMonitorManager::OnPauseOnBatteryChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  int v5; // eax
  struct IUnknown *v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  struct IUnknown *v8[3]; // [rsp+28h] [rbp-18h] BYREF
  char v9; // [rsp+50h] [rbp+10h] BYREF
  struct IMMDevice *v10; // [rsp+68h] [rbp+28h] BYREF

  v8[1] = (struct IUnknown *)-2LL;
  v10 = 0LL;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
         *((_QWORD *)this + 8),
         a2,
         &v10);
  if ( v5 < 0
    || (v5 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v10->lpVtbl->QueryInterface)(
               v10,
               &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
               &v7),
        v5 < 0)
    || (v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL))(v7, &v9), v5 < 0) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Du,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        v5);
    }
  }
  else
  {
    CMonitorManager::FindMonitor((__int64)this, v8, a2);
    v6 = v8[0];
    if ( v8[0] )
    {
      CMonitor::OnPauseOnBatteryChanged((CMonitor *)v8[0][8].lpVtbl, v10);
      v6 = v8[0];
    }
    if ( v6 )
      ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v10 )
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
}
