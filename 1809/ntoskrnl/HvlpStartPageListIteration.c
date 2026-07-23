/*
 * XREFs of HvlpStartPageListIteration @ 0x14027A7C8
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140277438 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140277730 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x140277DBC (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpInvokeGetPageListHypercall @ 0x14027A6B0 (HvlpInvokeGetPageListHypercall.c)
 *     HvlpSetupPageListIteration @ 0x14027A744 (HvlpSetupPageListIteration.c)
 */

int *__fastcall HvlpStartPageListIteration(int a1)
{
  int *result; // rax

  result = HvlpSetupPageListIteration(a1, 0);
  if ( result )
    return (int *)HvlpInvokeGetPageListHypercall((__int64)result, 0LL);
  return result;
}
