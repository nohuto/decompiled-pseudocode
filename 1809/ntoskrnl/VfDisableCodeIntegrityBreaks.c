/*
 * XREFs of VfDisableCodeIntegrityBreaks @ 0x1409276B8
 * Callers:
 *     ViInitSystemPhase0 @ 0x1409DAF34 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 VfDisableCodeIntegrityBreaks()
{
  __int64 result; // rax

  result = 0x200000002LL;
  ViCiDefaultActions = 0x200000002LL;
  qword_14097F120 = 0x200000002LL;
  qword_14097F128 = 0x200000002LL;
  return result;
}
