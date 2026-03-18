/*
 * XREFs of CmpSetPriorityThread @ 0x14013C840
 * Callers:
 *     CmpDoFileWrite @ 0x1406362EC (CmpDoFileWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
