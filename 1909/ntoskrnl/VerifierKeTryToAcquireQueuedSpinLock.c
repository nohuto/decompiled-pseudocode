/*
 * XREFs of VerifierKeTryToAcquireQueuedSpinLock @ 0x140978B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14097968C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeTryToAcquireQueuedSpinLock(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140446328;
  v4 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 148LL);
  LOBYTE(v4) = 2;
  v5 = ViKeRaiseIrqlSanityChecks(v4, 0LL);
  result = ((__int64 (__fastcall *)(__int64, __int64))pXdvKeTryToAcquireQueuedSpinLock)(a1, a2);
  if ( v5 )
    *(_WORD *)(v5 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
