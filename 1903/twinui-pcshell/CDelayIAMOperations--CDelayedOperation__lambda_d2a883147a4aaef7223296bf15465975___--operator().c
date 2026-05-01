/*
 * XREFs of CDelayIAMOperations::CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___::operator() @ 0x18010F0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x18011B4FC (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18011F584 (-_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTO.c)
 */

int __fastcall CDelayIAMOperations::CDelayedOperation__lambda_d2a883147a4aaef7223296bf15465975___::operator()(
        __int64 a1)
{
  int result; // eax
  __int64 v3; // rcx

  if ( *(_BYTE *)(a1 + 32)
    || (*(_BYTE *)(a1 + 48) & 4) != 0
    || (result = CApplicationManager::_ActivateIamSpecialWindow(*(CApplicationManager **)(a1 + 16)), result >= 0) )
  {
    result = CApplicationManager::_PerformDesktopActivationCallouts(
               *(_QWORD *)(a1 + 16),
               *(_QWORD *)(a1 + 24),
               *(unsigned int *)(a1 + 48));
  }
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    return SetEvent(*(HANDLE *)(v3 + 8));
  return result;
}
