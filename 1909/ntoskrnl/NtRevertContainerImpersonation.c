/*
 * XREFs of NtRevertContainerImpersonation @ 0x140132B50
 * Callers:
 *     IopProcessWorkItem @ 0x140013BB0 (IopProcessWorkItem.c)
 * Callees:
 *     PspRevertContainerImpersonation @ 0x140036C00 (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
