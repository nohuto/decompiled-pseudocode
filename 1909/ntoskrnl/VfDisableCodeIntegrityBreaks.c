/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x140965BD4
 * Callers:
 *     ViInitSystemPhase0 @ 0x140A1E29C (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 VfDisableCodeIntegrityBreaks()
{
  __int64 result; // rax

  result = 0x200000002LL;
  ViCiDefaultActions = 0x200000002LL;
  qword_1409C0118 = 0x200000002LL;
  qword_1409C0120 = 0x200000002LL;
  return result;
}
