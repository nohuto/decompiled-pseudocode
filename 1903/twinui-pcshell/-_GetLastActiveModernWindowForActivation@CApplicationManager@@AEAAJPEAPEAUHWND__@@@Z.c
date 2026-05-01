/*
 * XREFs of ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x18011C8D4
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x180076D70 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180076F0C (-_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18011C1BC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_GetLastActiveModernWindowForActivation(CApplicationManager *this, HWND *a2)
{
  int LastActiveModernApp; // ebx
  struct IImmersiveApplicationInternal *v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  LastActiveModernApp = CApplicationManager::_GetLastActiveModernApp(this, &v6);
  if ( LastActiveModernApp >= 0 )
  {
    LastActiveModernApp = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD, HWND *))(*(_QWORD *)v6 + 312LL))(
                            v6,
                            0LL,
                            a2);
    if ( LastActiveModernApp == -2147023598 )
      CApplicationManager::_ForgetApplicationNoLock(this, v6, 1u);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  return (unsigned int)LastActiveModernApp;
}
