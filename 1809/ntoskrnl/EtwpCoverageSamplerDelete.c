/*
 * XREFs of EtwpCoverageSamplerDelete @ 0x1408C9000
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCoverageSamplerCleanup @ 0x1408C8E68 (EtwpCoverageSamplerCleanup.c)
 */

unsigned int __fastcall EtwpCoverageSamplerDelete(__int64 a1)
{
  return EtwpCoverageSamplerCleanup(a1);
}
