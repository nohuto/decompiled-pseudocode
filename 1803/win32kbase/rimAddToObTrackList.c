/*
 * XREFs of rimAddToObTrackList @ 0x1C00DE964
 * Callers:
 *     RawInputManagerDeviceObjectCreate @ 0x1C00F1C60 (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C00F1EC4 (RawInputManagerInputObserverObjectCreate.c)
 *     RawInputManagerObjectCreate @ 0x1C00F20B4 (RawInputManagerObjectCreate.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimAddToObTrackList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // eax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  struct _LIST_ENTRY *v9; // rcx
  struct _LIST_ENTRY *v10; // rax

  RIMLockExclusive((__int64)&gObListLock);
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 == 1 )
  {
    Blink = gObRimList.Blink;
    v6 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimList.Blink->Flink != &gObRimList )
      __fastfail(3u);
    v6->Flink = &gObRimList;
    *(_QWORD *)(a1 + 24) = Blink;
    Blink->Flink = v6;
    gObRimList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
  }
  else if ( v4 == 2 )
  {
    v7 = (_QWORD *)qword_1C01A5EE0;
    v8 = (_QWORD *)(a1 + 16);
    if ( *(__int64 **)qword_1C01A5EE0 != &gObRimDevList )
      __fastfail(3u);
    *v8 = &gObRimDevList;
    *(_QWORD *)(a1 + 24) = v7;
    *v7 = v8;
    qword_1C01A5EE0 = a1 + 16;
  }
  else
  {
    if ( v4 != 3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
    v9 = gObRimInputObserverList.Blink;
    v10 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimInputObserverList.Blink->Flink != &gObRimInputObserverList )
      __fastfail(3u);
    v10->Flink = &gObRimInputObserverList;
    *(_QWORD *)(a1 + 24) = v9;
    v9->Flink = v10;
    gObRimInputObserverList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
