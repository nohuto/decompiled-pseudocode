/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x140181710
 * Callers:
 *     KiExecuteDpc @ 0x1401814F0 (KiExecuteDpc.c)
 *     KiInitMachineDependent @ 0x1401815A0 (KiInitMachineDependent.c)
 *     KiDeregisterNmiSxCallback @ 0x14028F210 (KiDeregisterNmiSxCallback.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1400D6E90 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(int a1, struct _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  v2 = KiProcessorIndexToNumberMappingTable[a1];
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
