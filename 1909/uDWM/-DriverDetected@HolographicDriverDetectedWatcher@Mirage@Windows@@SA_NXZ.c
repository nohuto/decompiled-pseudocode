/*
 * XREFs of ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18004156C
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180041424 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180041670 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CAX_NW4Repor.c)
 *     ?GetControlMode@PerceptionSimulationSettings@@SA?AW4SimulationControlMode@@XZ @ 0x180041808 (-GetControlMode@PerceptionSimulationSettings@@SA-AW4SimulationControlMode@@XZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007A1AC (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18007A1F0 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected(void)
{
  char v0; // di
  CONFIGRET Device_Interface_List_SizeW; // eax
  DWORD v2; // eax
  unsigned int v3; // r8d
  CONFIGRET Device_Interface_ListW; // eax
  DWORD v5; // eax
  unsigned int v6; // r8d
  int ControlMode; // ebx
  __int64 v9; // rdx
  WCHAR *v10; // rax
  void *v11; // rdx
  unsigned int v12; // r8d
  const char *v13; // r9
  WCHAR *v14; // rbx
  ULONG ulFlags; // [rsp+20h] [rbp-38h]
  ULONG pulLen; // [rsp+30h] [rbp-28h] BYREF
  GUID InterfaceClassGuid; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v0 = 0;
  InterfaceClassGuid = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  while ( 1 )
  {
    pulLen = 0;
    Device_Interface_List_SizeW = CM_Get_Device_Interface_List_SizeW(&pulLen, &InterfaceClassGuid, 0LL, 0);
    v2 = CM_MapCrToWin32Err(Device_Interface_List_SizeW, 0x507u);
    if ( v2 )
    {
      wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x8F, v3, (const char *)v2, ulFlags);
      __debugbreak();
    }
    v9 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v9 = -1LL;
    v10 = (WCHAR *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                     WPF::g_pProcessHeap,
                     v9);
    v14 = v10;
    if ( !v10 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(retaddr, v11, v12, v13);
      __debugbreak();
    }
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(&InterfaceClassGuid, 0LL, v10, pulLen, 0);
    if ( Device_Interface_ListW != 26 )
    {
      v5 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
      if ( v5 )
      {
        wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x9D, v6, (const char *)v5, ulFlags);
        __debugbreak();
      }
      v0 = 1;
      if ( *v14 )
        break;
    }
    (*(void (__fastcall **)(WPF::HeapBase *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v14);
    if ( v0 )
    {
      ControlMode = PerceptionSimulationSettings::GetControlMode();
      wil::Feature<__WilFeatureTraits_Feature_SimulationDriver>::ReportUsageToService();
      return ControlMode == 2;
    }
  }
  (*(void (__fastcall **)(WPF::HeapBase *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v14);
  return 1;
}
