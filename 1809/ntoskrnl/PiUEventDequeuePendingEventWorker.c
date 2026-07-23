/*
 * XREFs of PiUEventDequeuePendingEventWorker @ 0x14058FA80
 * Callers:
 *     PiUEventNotifyClient @ 0x140590938 (PiUEventNotifyClient.c)
 *     PiUEventHandleGetEvent @ 0x1405A0A1C (PiUEventHandleGetEvent.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406C9338 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleVetoEvent @ 0x140700A70 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiUEventDereferenceEventEntry @ 0x14058FAD8 (PiUEventDereferenceEventEntry.c)
 */

void __fastcall PiUEventDequeuePendingEventWorker(__int64 a1, void *a2, char a3)
{
  void **v4; // rdx
  void **v5; // rax

  v4 = *(void ***)a2;
  if ( v4[1] != a2 || (v5 = (void **)*((_QWORD *)a2 + 1), *v5 != a2) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( !a3 )
    --*(_DWORD *)(a1 + 128);
  PiUEventDereferenceEventEntry(*((PVOID *)a2 + 3));
  ExFreePoolWithTag(a2, 0x59706E50u);
}
