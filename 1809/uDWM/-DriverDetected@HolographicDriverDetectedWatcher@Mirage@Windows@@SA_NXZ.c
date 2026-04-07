/*
 * XREFs of ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x18003EFC8
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x18003EE70 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003F10C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SimulationDriver@@@wil@@CAX_NW4Repor.c)
 *     ?GetControlMode@PerceptionSimulationSettings@@SA?AW4SimulationControlMode@@XZ @ 0x18003F2A0 (-GetControlMode@PerceptionSimulationSettings@@SA-AW4SimulationControlMode@@XZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180073BE4 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180073C28 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

bool Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected(void)
{
  char v0; // di
  CONFIGRET Device_Interface_List_SizeW; // eax
  DWORD v2; // eax
  unsigned int v3; // r8d
  __int64 v4; // rdx
  WCHAR *v5; // rax
  void *v6; // rdx
  unsigned int v7; // r8d
  const char *v8; // r9
  WCHAR *v9; // rbx
  CONFIGRET Device_Interface_ListW; // eax
  DWORD v11; // eax
  unsigned int v12; // r8d
  int ControlMode; // ebx
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
      JUMPOUT(0x180068B12LL);
    }
    v4 = 2LL * pulLen;
    if ( !is_mul_ok(pulLen, 2uLL) )
      v4 = -1LL;
    v5 = (WCHAR *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    v4);
    v9 = v5;
    if ( !v5 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(retaddr, v6, v7, v8);
      JUMPOUT(0x18003F103LL);
    }
    Device_Interface_ListW = CM_Get_Device_Interface_ListW(&InterfaceClassGuid, 0LL, v5, pulLen, 0);
    if ( Device_Interface_ListW != 26 )
    {
      v11 = CM_MapCrToWin32Err(Device_Interface_ListW, 0x507u);
      if ( v11 )
      {
        wil::details::in1diag3::_FailFast_Win32(retaddr, (void *)0x9D, v12, (const char *)v11, ulFlags);
        __debugbreak();
      }
      v0 = 1;
      if ( *v9 )
        break;
    }
    (*(void (__fastcall **)(WPF::HeapBase *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v9);
    if ( v0 )
    {
      ControlMode = PerceptionSimulationSettings::GetControlMode();
      wil::Feature<__WilFeatureTraits_Feature_SimulationDriver>::ReportUsageToService();
      return ControlMode == 2;
    }
  }
  (*(void (__fastcall **)(WPF::HeapBase *, WCHAR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v9);
  return 1;
}
