/*
 * XREFs of ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1803ACD1C
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1803AC550 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x1803AC93C (-_GetMonitorForAppSwitch@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@PEAUIImmersiveApplicatio.c)
 *     ?_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveMonitor@@PEAPEAU3@PEA_N@Z @ 0x1803ACEC4 (-_GetValidDefaultMonitor@CSwitchController@@AEAAJW4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersive.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchController::_GetMonitorForAppSwitchWithPreference(
        IUnknown **a1,
        __int64 a2,
        unsigned int a3,
        struct IImmersiveApplication *a4,
        struct IImmersiveMonitor **a5)
{
  struct IImmersiveMonitor **v9; // rsi
  __int64 v10; // rcx
  unsigned int MonitorForAppSwitch; // eax
  unsigned int v12; // ebx
  struct IImmersiveMonitor *v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v14[1] = (struct IImmersiveMonitor *)-2LL;
  v9 = a5;
  *a5 = 0LL;
  v14[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v14);
  if ( (int)CSwitchController::_GetValidDefaultMonitor(v10, a3, a2, v14, &a5) >= 0 && (_BYTE)a5 )
    MonitorForAppSwitch = (**(__int64 (__fastcall ***)(struct IImmersiveMonitor *, GUID *, struct IImmersiveMonitor **))v14[0])(
                            v14[0],
                            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                            v9);
  else
    MonitorForAppSwitch = CSwitchController::_GetMonitorForAppSwitch(a1, v14[0], a4, v9);
  v12 = MonitorForAppSwitch;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v14);
  return v12;
}
