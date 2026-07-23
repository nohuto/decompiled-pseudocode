/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockNoReboot @ 0x14093A680
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x14093A4FC (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockNoReboot(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  return VerifierKeAcquireInStackQueuedSpinLockCommon(a1, retaddr, a2);
}
