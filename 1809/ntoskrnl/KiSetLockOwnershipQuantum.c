/*
 * XREFs of KiSetLockOwnershipQuantum @ 0x140117520
 * Callers:
 *     KiDeferredReadyThread @ 0x1400C3370 (KiDeferredReadyThread.c)
 *     KiSetPriorityBoost @ 0x1401174C8 (KiSetPriorityBoost.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiSetLockOwnershipQuantum(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( a2 > v2 || (result = (unsigned int)KiLockQuantumTarget, v2 - a2 < (unsigned int)KiLockQuantumTarget) )
  {
    result = a2 + (unsigned int)KiLockQuantumTarget;
    *(_QWORD *)(a1 + 32) = result;
  }
  return result;
}
