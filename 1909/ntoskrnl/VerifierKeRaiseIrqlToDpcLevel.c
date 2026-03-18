/*
 * XREFs of VerifierKeRaiseIrqlToDpcLevel @ 0x140978360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x14097467C (ViTargetIncrementCounter.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x14097968C (ViKeRaiseIrqlSanityChecks.c)
 */

__int64 VerifierKeRaiseIrqlToDpcLevel()
{
  __int64 (*v0)(void); // rdi
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v0 = (__int64 (*)(void))pXdvKeRaiseIrqlToDpcLevel;
  ++dword_140446324;
  v1 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 144LL);
  LOBYTE(v1) = 2;
  v2 = ViKeRaiseIrqlSanityChecks(v1, ((unsigned int)MmVerifierData >> 17) & 1);
  result = v0();
  if ( v2 )
    *(_WORD *)(v2 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
