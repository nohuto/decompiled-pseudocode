/*
 * XREFs of PopFanEndCsFanPeriod @ 0x14087663C
 * Callers:
 *     PopFanUpdateRunningState @ 0x140751510 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x1408766F0 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1402DFB08 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_1404172E8;
  if ( qword_1404172E8 < (unsigned __int64)qword_1404172F0 )
    v0 = qword_1404172F0;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_1404172F0) / 0x989680uLL);
}
