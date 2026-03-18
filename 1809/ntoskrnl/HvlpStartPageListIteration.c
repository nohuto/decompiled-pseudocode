/*
 * XREFs of HvlpStartPageListIteration @ 0x14027A4D8
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140277148 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140277440 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x140277ACC (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x14027A3C0 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x14027A454 (HvlpSetupPageListIteration.c)
 */

int *__fastcall HvlpStartPageListIteration(int a1)
{
  int *result; // rax

  result = HvlpSetupPageListIteration(a1, 0);
  if ( result )
    return (int *)HvlpInvokeGetPageListHypercall((__int64)result, 0LL);
  return result;
}
