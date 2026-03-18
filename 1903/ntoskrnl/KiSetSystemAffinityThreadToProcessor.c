/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x14018AE14
 * Callers:
 *     KiExecuteDpc @ 0x14018ABB0 (KiExecuteDpc.c)
 *     KiInitMachineDependent @ 0x14018ACAC (KiInitMachineDependent.c)
 *     KiDeregisterNmiSxCallback @ 0x1402A5C20 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1400F8850 (KeSetSystemGroupAffinityThread.c)
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
