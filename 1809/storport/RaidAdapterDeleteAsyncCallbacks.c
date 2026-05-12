/*
 * XREFs of RaidAdapterDeleteAsyncCallbacks @ 0x1C0037768
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C0073DA0 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0074084 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterCancelPauseTimer @ 0x1C00376A0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDisConnectMSIInterrupt @ 0x1C00733E0 (RaidAdapterDisConnectMSIInterrupt.c)
 *     RaidAdapterDisConnectNonMSIInterrupt @ 0x1C007342C (RaidAdapterDisConnectNonMSIInterrupt.c)
 */

void __fastcall RaidAdapterDeleteAsyncCallbacks(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  void *v5; // rcx
  __int64 v6; // rcx
  unsigned int i; // ebx
  void *v8; // rcx
  void *v9; // rcx
  char v10; // al

  KeCancelTimer((PKTIMER)(a1 + 1728));
  if ( *(_DWORD *)(a1 + 5688) )
    KeCancelTimer((PKTIMER)(a1 + 5552));
  v2 = KfRaiseIrql(2u);
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 1920));
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 4280));
  KeLowerIrql(v2);
  KeFlushQueuedDpcs();
  if ( *(_BYTE *)(a1 + 4513) )
  {
    RaidAdapterDisConnectMSIInterrupt(a1);
    *(_BYTE *)(a1 + 4513) = 0;
    *(_QWORD *)(a1 + 4496) = 0LL;
  }
  else if ( *(_QWORD *)(a1 + 688) )
  {
    RaidAdapterDisConnectNonMSIInterrupt(a1);
  }
  v5 = *(void **)(a1 + 5160);
  if ( v5 )
  {
    PoUnregisterPowerSettingCallback(v5);
    *(_QWORD *)(a1 + 5160) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 5176);
  if ( v6 )
  {
    PoUnregisterCoalescingCallback(v6, v3, v4);
    *(_QWORD *)(a1 + 5176) = 0LL;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4960); ++i )
    PoUnregisterPowerSettingCallback(*(PVOID *)(*(_QWORD *)(a1 + 4976) + 8LL * i));
  v8 = *(void **)(a1 + 4968);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_DWORD *)(a1 + 4960) = 0;
    *(_QWORD *)(a1 + 4968) = 0LL;
    *(_QWORD *)(a1 + 4976) = 0LL;
  }
  v9 = *(void **)(a1 + 5184);
  if ( v9 )
  {
    PoUnregisterPowerSettingCallback(v9);
    *(_QWORD *)(a1 + 5184) = 0LL;
  }
  v10 = *(_BYTE *)(a1 + 109);
  if ( (v10 & 8) != 0 )
  {
    *(_BYTE *)(a1 + 109) = v10 & 0xF7;
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5192), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5192));
  }
}
