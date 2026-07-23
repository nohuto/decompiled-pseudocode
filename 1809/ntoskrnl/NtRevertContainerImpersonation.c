/*
 * XREFs of NtRevertContainerImpersonation @ 0x1402EA230
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 */

NTSTATUS NtRevertContainerImpersonation(void)
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
