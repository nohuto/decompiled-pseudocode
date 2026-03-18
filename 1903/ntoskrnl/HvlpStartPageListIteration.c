/*
 * XREFs of HvlpStartPageListIteration @ 0x14028E970
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x14028B5A8 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x14028B7F0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x14028BE9C (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x14028E84C (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x14028E8F0 (HvlpSetupPageListIteration.c)
 */

int *__fastcall HvlpStartPageListIteration(int a1)
{
  int *result; // rax

  result = HvlpSetupPageListIteration(a1, 0);
  if ( result )
    return (int *)HvlpInvokeGetPageListHypercall((__int64)result, 0LL);
  return result;
}
