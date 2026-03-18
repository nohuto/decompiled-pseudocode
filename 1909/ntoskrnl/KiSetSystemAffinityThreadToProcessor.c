/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x14018B7A4
 * Callers:
 *     KiExecuteDpc @ 0x14018B540 (KiExecuteDpc.c)
 *     KiInitMachineDependent @ 0x14018B63C (KiInitMachineDependent.c)
 *     KiDeregisterNmiSxCallback @ 0x1402A5980 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1400FC2F0 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(int a1, struct _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  v2 = KiProcessorIndexToNumberMappingTable[a1];
  *(_QWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
