/*
 * XREFs of PsRevertToSelf @ 0x140889350
 * Callers:
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x140637B70 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
