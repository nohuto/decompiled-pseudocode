/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140978C20
 * Callers:
 *     <none>
 * Callees:
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1402A70B0 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14097968C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140446328;
  v4 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 148LL);
  LOBYTE(v4) = 12;
  v5 = ViKeRaiseIrqlSanityChecks(v4, 0LL);
  result = KeTryToAcquireQueuedSpinLockRaiseToSynch(a1, a2, v6, v7);
  if ( v5 )
    *(_WORD *)(v5 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
