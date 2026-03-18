/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1408B31BC
 * Callers:
 *     PopFanUpdateRunningState @ 0x14077C5EC (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x1408B3270 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1402FC790 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140442B68;
  if ( qword_140442B68 < (unsigned __int64)qword_140442B70 )
    v0 = qword_140442B70;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140442B70) / 0x989680uLL);
}
