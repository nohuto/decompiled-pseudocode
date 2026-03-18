/*
 * XREFs of HvlpStartPageListIteration @ 0x14028E6D0
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x14028B308 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x14028B550 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x14028BBFC (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x14028E5AC (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x14028E650 (HvlpSetupPageListIteration.c)
 */

int *__fastcall HvlpStartPageListIteration(int a1)
{
  int *result; // rax

  result = HvlpSetupPageListIteration(a1, 0);
  if ( result )
    return (int *)HvlpInvokeGetPageListHypercall((__int64)result, 0LL);
  return result;
}
