/*
 * XREFs of HMAssignmentUnlockWorker @ 0x1C0030D7C
 * Callers:
 *     DestroyThreadsObjects @ 0x1C00281A0 (DestroyThreadsObjects.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 * Callees:
 *     HMUnlockObjectWorker @ 0x1C0030DB0 (HMUnlockObjectWorker.c)
 */

__int64 __fastcall HMAssignmentUnlockWorker(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return HMUnlockObjectWorker(result);
  return result;
}
