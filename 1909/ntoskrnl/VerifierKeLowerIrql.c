/*
 * XREFs of VerifierKeLowerIrql @ 0x1409782F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogCommon @ 0x1409794DC (ViKeIrqlLogCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x140979548 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeLowerIrql(char a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx

  LOBYTE(a2) = a1;
  v3 = ViKeLowerIrqlSanityChecks(KeGetCurrentIrql(), a2);
  LOBYTE(v4) = a1;
  ((void (__fastcall *)(__int64))pXdvKeLowerIrql)(v4);
  return ViKeIrqlLogCommon(v3, 1LL);
}
