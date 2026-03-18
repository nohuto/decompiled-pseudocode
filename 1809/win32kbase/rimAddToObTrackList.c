/*
 * XREFs of rimAddToObTrackList @ 0x1C00514A0
 * Callers:
 *     RawInputManagerDeviceObjectCreate @ 0x1C0051134 (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerObjectCreate @ 0x1C0051DD0 (RawInputManagerObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C011CB8C (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimAddToObTrackList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  struct _LIST_ENTRY *v6; // rcx
  struct _LIST_ENTRY *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v11; // rax

  RIMLockExclusive((__int64)&gObListLock);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      v8 = (_QWORD *)qword_1C01D0BD8;
      v9 = (_QWORD *)(a1 + 16);
      if ( *(__int64 **)qword_1C01D0BD8 == &gObRimDevList )
      {
        *v9 = &gObRimDevList;
        *(_QWORD *)(a1 + 24) = v8;
        *v8 = v9;
        qword_1C01D0BD8 = a1 + 16;
        goto LABEL_6;
      }
    }
    else
    {
      if ( v5 != 3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
      Blink = gObRimInputObserverList.Blink;
      v11 = (struct _LIST_ENTRY *)(a1 + 16);
      if ( gObRimInputObserverList.Blink->Flink == &gObRimInputObserverList )
      {
        v11->Flink = &gObRimInputObserverList;
        *(_QWORD *)(a1 + 24) = Blink;
        Blink->Flink = v11;
        gObRimInputObserverList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
        goto LABEL_6;
      }
    }
LABEL_13:
    __fastfail(3u);
  }
  v6 = gObRimList.Blink;
  v7 = (struct _LIST_ENTRY *)(a1 + 16);
  if ( gObRimList.Blink->Flink != &gObRimList )
    goto LABEL_13;
  v7->Flink = &gObRimList;
  *(_QWORD *)(a1 + 24) = v6;
  v6->Flink = v7;
  gObRimList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
LABEL_6:
  *(_BYTE *)(a1 + 8) = 1;
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
