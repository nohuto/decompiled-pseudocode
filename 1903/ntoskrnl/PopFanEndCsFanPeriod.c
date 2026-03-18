/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1408B38EC
 * Callers:
 *     PopFanUpdateRunningState @ 0x14077900C (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x1408B39A0 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1402FCCE0 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140442BC8;
  if ( qword_140442BC8 < (unsigned __int64)qword_140442BD0 )
    v0 = qword_140442BD0;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140442BD0) / 0x989680uLL);
}
