/*
 * XREFs of EtwpCoverageSamplerDelete @ 0x140904B50
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageSamplerCleanup @ 0x1409049BC (EtwpCoverageSamplerCleanup.c)
 */

unsigned int __fastcall EtwpCoverageSamplerDelete(__int64 a1)
{
  return EtwpCoverageSamplerCleanup(a1);
}
