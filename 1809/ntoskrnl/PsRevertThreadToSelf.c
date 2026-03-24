/*
 * XREFs of PsRevertThreadToSelf @ 0x140889300
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x140637B70 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
