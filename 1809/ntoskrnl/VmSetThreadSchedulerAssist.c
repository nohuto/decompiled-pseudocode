/*
 * XREFs of VmSetThreadSchedulerAssist @ 0x14030B630
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadSchedulerAssist @ 0x140297C44 (KeSetThreadSchedulerAssist.c)
 */

void __fastcall VmSetThreadSchedulerAssist(struct _KTHREAD *a1, void *a2, __int64 a3)
{
  KeSetThreadSchedulerAssist(a1, a2, a3);
}
