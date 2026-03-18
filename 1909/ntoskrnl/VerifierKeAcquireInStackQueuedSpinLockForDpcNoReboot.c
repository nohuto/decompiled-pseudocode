/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x140977C90
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140977C14 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  return VerifierKeAcquireInStackQueuedSpinLockForDpcCommon(a1, retaddr, a2);
}
