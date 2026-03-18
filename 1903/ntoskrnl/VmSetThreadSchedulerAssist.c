/*
 * XREFs of VmSetThreadSchedulerAssist @ 0x140329420
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadSchedulerAssist @ 0x1402AEBF4 (KeSetThreadSchedulerAssist.c)
 */

void __fastcall VmSetThreadSchedulerAssist(struct _KTHREAD *a1, void *a2, int a3)
{
  KeSetThreadSchedulerAssist(a1, a2, a3);
}
