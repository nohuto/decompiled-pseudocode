/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140A09208
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140A072EC (PopInitializeDirectedDrips.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopInitializeWorkItem @ 0x14075F670 (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14075F688 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x14075F6C4 (PopDirectedDripsUmInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140444840 = 0LL;
  dword_1404447BC = 0;
  dword_140444880 = 0;
  qword_1404449D8 = -1LL;
  unk_140444848 = 0;
  dword_14044484C = 0;
  qword_1404447C8 = (__int64)&qword_1404447C0;
  qword_1404447C0 = (__int64)&qword_1404447C0;
  word_1404447B8 = 1;
  byte_1404447BA = 6;
  dword_1404447F0 = -1946157056;
  byte_140444850 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140444858,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140444888, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140444928, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  memset(&qword_1404449E0, 0, 0x1D0uLL);
  qword_1404449E0 = 0LL;
  PopDirectedDripsDiagLock = 0LL;
  qword_140436DD8 = (__int64)&PopDirectedDripsDiagList;
  PopDirectedDripsDiagList = (__int64)&PopDirectedDripsDiagList;
  PopDirectedDripsUmInitialize();
}
