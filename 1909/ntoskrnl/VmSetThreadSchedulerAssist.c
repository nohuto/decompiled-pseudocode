/*
 * XREFs of VmSetThreadSchedulerAssist @ 0x140328E70
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadSchedulerAssist @ 0x1402AE954 (KeSetThreadSchedulerAssist.c)
 */

void __fastcall VmSetThreadSchedulerAssist(struct _KTHREAD *a1, void *a2, int a3)
{
  KeSetThreadSchedulerAssist(a1, a2, a3);
}
