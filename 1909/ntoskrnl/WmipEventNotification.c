/*
 * XREFs of WmipEventNotification @ 0x14071C340
 * Callers:
 *     <none>
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400EDD84 (WmipUnreferenceRegEntry.c)
 *     ExInterlockedRemoveHeadList @ 0x14010A430 (ExInterlockedRemoveHeadList.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipProcessEvent @ 0x14071C3AC (WmipProcessEvent.c)
 */

__int64 WmipEventNotification()
{
  PLIST_ENTRY v0; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  int v2; // edx
  __int64 Flink; // rcx
  __int64 result; // rax

  do
  {
    v0 = ExInterlockedRemoveHeadList(&WmipNPEvent, &WmipNPNotificationSpinlock);
    Blink = v0[1].Blink;
    v2 = (int)Blink[2].Blink;
    LODWORD(Blink[2].Blink) = 0;
    HIDWORD(Blink->Blink) = 0;
    LODWORD(Blink->Blink) = v2;
    WmipProcessEvent(Blink);
    Flink = (__int64)v0[1].Flink;
    if ( Flink )
      WmipUnreferenceRegEntry(Flink);
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&WmipEventWorkItems, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
