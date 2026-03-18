/*
 * XREFs of RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C004F6D4
 * Callers:
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 */

LONG __fastcall RIMSignalAllPriorPnpWorkToCompleteWaiters(__int64 a1)
{
  LONG result; // eax
  LONG v3; // r8d

  result = WPP_RECORDER_SF_q(gRimLog, 3, 21, 43, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, a1);
  v3 = *(_DWORD *)(a1 + 880);
  if ( v3 )
  {
    result = KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 872), 0, v3, 0);
    *(_DWORD *)(a1 + 880) = 0;
  }
  return result;
}
