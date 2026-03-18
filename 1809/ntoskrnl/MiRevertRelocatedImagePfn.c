/*
 * XREFs of MiRevertRelocatedImagePfn @ 0x1405A8A60
 * Callers:
 *     MiValidateImagePfn @ 0x1405A8854 (MiValidateImagePfn.c)
 * Callees:
 *     KeCopyPage @ 0x1401C09B0 (KeCopyPage.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     MiPageHasRelocations @ 0x1405A8B14 (MiPageHasRelocations.c)
 *     MiPerformFixups @ 0x1405DFB58 (MiPerformFixups.c)
 */

__int64 __fastcall MiRevertRelocatedImagePfn(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  ULONG_PTR v7; // rbx

  v4 = *(_QWORD *)(a2 + 96);
  if ( !*(_QWORD *)(v4 + 32) || !(unsigned int)MiPageHasRelocations(v4, a3) )
    return -1LL;
  result = (__int64)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x68496D4Du);
  v7 = result;
  if ( result )
  {
    KeCopyPage(result, a1);
    MiPerformFixups(v7, a2, 0LL, 3);
    return v7;
  }
  return result;
}
