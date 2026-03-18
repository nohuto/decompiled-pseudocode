/*
 * XREFs of VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140977DD0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1402A6F70 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14097968C (ViKeRaiseIrqlSanityChecks.c)
 */

unsigned __int8 __fastcall VerifierKeAcquireQueuedSpinLockRaiseToSynch(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int8 result; // al
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140446328;
  v2 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 148LL);
  LOBYTE(v2) = 12;
  v3 = ViKeRaiseIrqlSanityChecks(v2, 0LL);
  result = KeAcquireQueuedSpinLockRaiseToSynch(a1);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
