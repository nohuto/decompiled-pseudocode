/*
 * XREFs of ndisFilterCancelSendNetBufferLists @ 0x1C008F660
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 */

NTSTATUS __fastcall ndisFilterCancelSendNetBufferLists(__int64 a1, __int64 a2)
{
  _QWORD Parameter[9]; // [rsp+30h] [rbp-48h] BYREF

  memset(Parameter, 0, 0x38uLL);
  Parameter[1] = a1;
  Parameter[3] = a2;
  return KeExpandKernelStackAndCalloutEx(
           (PEXPAND_STACK_CALLOUT)ndisFilterCancelSendNetBufferListsInternal,
           Parameter,
           0x4CCCuLL,
           0,
           0LL);
}
