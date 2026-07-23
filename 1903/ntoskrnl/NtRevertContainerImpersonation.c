/*
 * XREFs of NtRevertContainerImpersonation @ 0x140132340
 * Callers:
 *     IopProcessWorkItem @ 0x140013980 (IopProcessWorkItem.c)
 * Callees:
 *     PspRevertContainerImpersonation @ 0x140036810 (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
