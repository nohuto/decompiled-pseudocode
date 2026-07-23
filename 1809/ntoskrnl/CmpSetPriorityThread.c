/*
 * XREFs of CmpSetPriorityThread @ 0x14013AF2C
 * Callers:
 *     CmpDoFileWrite @ 0x1405B4A60 (CmpDoFileWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
