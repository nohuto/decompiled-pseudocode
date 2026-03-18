/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140A08CDC
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140A06DD0 (PopInitializeDirectedDrips.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopInitializeWorkItem @ 0x14075ADE0 (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14075ADF8 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x14075AE34 (PopDirectedDripsUmInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140444B60 = 0LL;
  dword_140444ADC = 0;
  dword_140444BA0 = 0;
  qword_140444CF8 = -1LL;
  unk_140444B68 = 0;
  dword_140444B6C = 0;
  qword_140444AE8 = (__int64)&qword_140444AE0;
  qword_140444AE0 = (__int64)&qword_140444AE0;
  word_140444AD8 = 1;
  byte_140444ADA = 6;
  dword_140444B10 = -1946157056;
  byte_140444B70 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140444B78,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140444BA8, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140444C48, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  memset(&qword_140444D00, 0, 0x1D0uLL);
  qword_140444D00 = 0LL;
  PopDirectedDripsDiagLock = 0LL;
  qword_140436E58 = (__int64)&PopDirectedDripsDiagList;
  PopDirectedDripsDiagList = (__int64)&PopDirectedDripsDiagList;
  PopDirectedDripsUmInitialize();
}
