/*
 * XREFs of PsRevertToSelf @ 0x1408C6B50
 * Callers:
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x1405DEAE0 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
