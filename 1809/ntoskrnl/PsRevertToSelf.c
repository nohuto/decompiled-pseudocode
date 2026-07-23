/*
 * XREFs of PsRevertToSelf @ 0x14088A590
 * Callers:
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
