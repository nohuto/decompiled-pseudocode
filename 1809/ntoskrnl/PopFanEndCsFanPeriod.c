/*
 * XREFs of PopFanEndCsFanPeriod @ 0x14087787C
 * Callers:
 *     PopFanUpdateRunningState @ 0x1407526E0 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x140877930 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x1402DFDF8 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140418388;
  if ( qword_140418388 < (unsigned __int64)qword_140418390 )
    v0 = qword_140418390;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140418390) / 0x989680uLL);
}
