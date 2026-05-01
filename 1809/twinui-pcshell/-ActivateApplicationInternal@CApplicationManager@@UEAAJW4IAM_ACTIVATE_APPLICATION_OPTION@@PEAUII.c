/*
 * XREFs of ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x18005D890
 * Callers:
 *     ?ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICATION_OPTION@@@Z @ 0x18005D870 (-ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICA.c)
 * Callees:
 *     ?_PrepareAppForActivation@CApplicationManager@@AEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x18005D988 (-_PrepareAppForActivation@CApplicationManager@@AEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImme.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x1800F62C8 (-_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplicati.c)
 */

__int64 __fastcall CApplicationManager::ActivateApplicationInternal(
        __int64 a1,
        unsigned int a2,
        struct IImmersiveApplication *a3)
{
  int v6; // ebx
  HWND LastActivePopup; // rbx
  BOOL v8; // eax
  HWND v9; // rdi
  HWND hWnd; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = CApplicationManager::_PrepareAppForActivation(a1 - 240, a2, a3, &hWnd);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 >= 0 )
  {
    LastActivePopup = GetLastActivePopup(hWnd);
    v8 = IsWindowVisible(LastActivePopup);
    v9 = hWnd;
    if ( v8 )
      v9 = LastActivePopup;
    if ( SetForegroundWindow(v9) )
    {
      v6 = 0;
      if ( IsIconic(hWnd) )
        SwitchToThisWindow(hWnd, 1);
      if ( !(unsigned int)IsShellFrameWindow(v9) )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        CApplicationManager::_AttemptPendingActivationTracking((CApplicationManager *)(a1 - 240), v9, a3);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[18].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[18].Ptr,
        v9,
        3LL);
    }
    else
    {
      return (unsigned int)-2147024891;
    }
  }
  return (unsigned int)v6;
}
