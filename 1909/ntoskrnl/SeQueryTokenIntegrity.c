/*
 * XREFs of SeQueryTokenIntegrity @ 0x140139F78
 * Callers:
 *     EtwpPsProvTraceProcess @ 0x140683C20 (EtwpPsProvTraceProcess.c)
 * Callees:
 *     SepCopyTokenIntegrity @ 0x1400E4838 (SepCopyTokenIntegrity.c)
 */

void __stdcall SeQueryTokenIntegrity(PACCESS_TOKEN Token, PSID_AND_ATTRIBUTES IntegritySA)
{
  SepCopyTokenIntegrity((__int64)Token);
}
