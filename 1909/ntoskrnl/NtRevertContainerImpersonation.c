/*
 * XREFs of NtRevertContainerImpersonation @ 0x140132B50
 * Callers:
 *     IopProcessWorkItem @ 0x140013BB0 (IopProcessWorkItem.c)
 * Callees:
 *     PspRevertContainerImpersonation @ 0x140036C00 (PspRevertContainerImpersonation.c)
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
