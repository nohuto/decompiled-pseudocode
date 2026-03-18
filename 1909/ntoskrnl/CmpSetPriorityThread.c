/*
 * XREFs of CmpSetPriorityThread @ 0x14013CE20
 * Callers:
 *     CmpDoFileWrite @ 0x14063954C (CmpDoFileWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
