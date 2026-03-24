/*
 * XREFs of PopFanEndCsFanPeriod @ 0x14087661C
 * Callers:
 *     PopFanUpdateRunningState @ 0x1407514F0 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x1408766D0 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1402DFC08 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140417328;
  if ( qword_140417328 < (unsigned __int64)qword_140417330 )
    v0 = qword_140417330;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140417330) / 0x989680uLL);
}
