/*
 * XREFs of RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00FB1D0
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 */

int __fastcall RIMSignalAllPriorPnpWorkToCompleteWaiters(__int64 a1)
{
  int result; // eax
  LONG v3; // r8d

  result = WPP_RECORDER_SF_q(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x14u,
             0x26u,
             (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
             a1);
  v3 = *(_DWORD *)(a1 + 888);
  if ( v3 )
  {
    result = KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 880), 0, v3, 0);
    *(_DWORD *)(a1 + 888) = 0;
  }
  return result;
}
