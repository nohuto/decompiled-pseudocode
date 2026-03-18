/*
 * XREFs of VerifierKeAcquireQueuedSpinLock @ 0x140970B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14097968C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeAcquireQueuedSpinLock(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rbx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ++dword_1404465E8;
  v2 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 148LL);
  LOBYTE(v2) = 2;
  v3 = ViKeRaiseIrqlSanityChecks(v2, 0LL);
  result = ((__int64 (__fastcall *)(__int64))pXdvKeAcquireQueuedSpinLock)(a1);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
