/*
 * XREFs of PsRevertThreadToSelf @ 0x1408C6B20
 * Callers:
 *     <none>
 * Callees:
 *     PsImpersonateClient @ 0x1405DEAE0 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall PsRevertThreadToSelf(struct _KTHREAD *a1)
{
  return PsImpersonateClient(a1, 0LL, 0, 0, SecurityImpersonation);
}
