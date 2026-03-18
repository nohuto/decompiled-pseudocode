/*
 * XREFs of Interrupter_IoWorkItemRequeueDpc @ 0x1C001BD10
 * Callers:
 *     <none>
 * Callees:
 *     Interrupter_DeferToDpcOrWorkItem @ 0x1C001B040 (Interrupter_DeferToDpcOrWorkItem.c)
 */

void __fastcall Interrupter_IoWorkItemRequeueDpc(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  KSPIN_LOCK *v3; // rbx
  KIRQL v5; // al
  __int64 v6; // rcx

  ++*((_DWORD *)Context + 13);
  v3 = (KSPIN_LOCK *)(Context + 208);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 26);
  *((_DWORD *)Context + 24) &= ~8u;
  KeReleaseSpinLock(v3, v5);
  v6 = *(_QWORD *)Context;
  ++*((_DWORD *)Context + 16);
  Interrupter_DeferToDpcOrWorkItem(v6);
  KeSetEvent((PRKEVENT)(Context + 176), 0, 0);
}
