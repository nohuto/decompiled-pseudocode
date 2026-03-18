/*
 * XREFs of PsRevertToSelf @ 0x1408C7270
 * Callers:
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 * Callees:
 *     PsImpersonateClient @ 0x1405DE340 (PsImpersonateClient.c)
 */

void PsRevertToSelf(void)
{
  PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
}
