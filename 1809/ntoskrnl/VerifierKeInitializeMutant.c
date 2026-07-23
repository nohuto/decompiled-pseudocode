/*
 * XREFs of VerifierKeInitializeMutant @ 0x14093AA50
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInitializeMutantCommon @ 0x14093BDD4 (ViKeInitializeMutantCommon.c)
 *     VfDeadlockAcquireResource @ 0x14093C514 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x14093D0E0 (VfDeadlockInitializeResource.c)
 */

__int64 __fastcall VerifierKeInitializeMutant(int a1, char a2)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ViKeInitializeMutantCommon();
  result = VfDeadlockInitializeResource(a1);
  if ( a2 )
    return VfDeadlockAcquireResource(a1, retaddr);
  return result;
}
