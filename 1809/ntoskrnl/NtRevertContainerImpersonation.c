/*
 * XREFs of NtRevertContainerImpersonation @ 0x1402E9F40
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 */

__int64 NtRevertContainerImpersonation()
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
}
