/*
 * XREFs of CmpSetPriorityThread @ 0x14013AE2C
 * Callers:
 *     CmpDoFileWrite @ 0x1405B3A60 (CmpDoFileWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1400CD870 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
