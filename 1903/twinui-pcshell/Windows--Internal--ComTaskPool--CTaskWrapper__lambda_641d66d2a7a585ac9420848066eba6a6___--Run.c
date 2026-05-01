/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___::Run @ 0x18008D150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___::Run()
{
  char *v0; // rcx

  v0 = (char *)&CApplicationManagerUtility::g_pIAMGlobals[13].Ptr + 5;
  BYTE5(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) = 1;
  WakeByAddressAll(v0);
}
