/*
 * XREFs of PiUEventDequeuePendingEventWorker @ 0x14066A544
 * Callers:
 *     PiUEventHandleGetEvent @ 0x140668B34 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyClient @ 0x14066AC34 (PiUEventNotifyClient.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406E8EA4 (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleVetoEvent @ 0x14072C730 (PiUEventHandleVetoEvent.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiUEventDereferenceEventEntry @ 0x14066A6E0 (PiUEventDereferenceEventEntry.c)
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
