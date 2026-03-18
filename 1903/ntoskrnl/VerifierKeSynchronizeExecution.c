/*
 * XREFs of VerifierKeSynchronizeExecution @ 0x140978B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14097968C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeSynchronizeExecution(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_1404465EC;
  v6 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 152LL);
  LOBYTE(v6) = *(_BYTE *)(a1 + 93);
  ViKeRaiseIrqlSanityChecks(v6, 0LL);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))pXdvKeSynchronizeExecution)(a1, a2, a3);
}
