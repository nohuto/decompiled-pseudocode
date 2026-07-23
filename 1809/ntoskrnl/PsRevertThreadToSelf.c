/*
 * XREFs of PsRevertThreadToSelf @ 0x14088A560
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
