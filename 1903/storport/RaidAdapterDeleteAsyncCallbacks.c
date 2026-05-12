/*
 * XREFs of RaidAdapterDeleteAsyncCallbacks @ 0x1C0033304
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C0073254 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0073524 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterCancelPauseTimer @ 0x1C0033240 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDisConnectMSIInterrupt @ 0x1C00727DC (RaidAdapterDisConnectMSIInterrupt.c)
 *     RaidAdapterDisConnectNonMSIInterrupt @ 0x1C0072828 (RaidAdapterDisConnectNonMSIInterrupt.c)
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

  KeCancelTimer((PKTIMER)(a1 + 1664));
  if ( *(_DWORD *)(a1 + 5552) )
    KeCancelTimer((PKTIMER)(a1 + 5416));
  v2 = KfRaiseIrql(2u);
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 1856));
  RaidAdapterCancelPauseTimer(a1, (struct _KTIMER *)(a1 + 4216));
  KeLowerIrql(v2);
  KeFlushQueuedDpcs();
  if ( *(_BYTE *)(a1 + 4449) )
  {
    RaidAdapterDisConnectMSIInterrupt(a1);
    *(_BYTE *)(a1 + 4449) = 0;
    *(_QWORD *)(a1 + 4432) = 0LL;
  }
  else if ( *(_QWORD *)(a1 + 664) )
  {
    RaidAdapterDisConnectNonMSIInterrupt(a1);
  }
  v5 = *(void **)(a1 + 5032);
  if ( v5 )
  {
    PoUnregisterPowerSettingCallback(v5);
    *(_QWORD *)(a1 + 5032) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 5048);
  if ( v6 )
  {
    PoUnregisterCoalescingCallback(v6, v3, v4);
    *(_QWORD *)(a1 + 5048) = 0LL;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4880); ++i )
    PoUnregisterPowerSettingCallback(*(PVOID *)(*(_QWORD *)(a1 + 4896) + 8LL * i));
  v8 = *(void **)(a1 + 4888);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_DWORD *)(a1 + 4880) = 0;
    *(_QWORD *)(a1 + 4888) = 0LL;
    *(_QWORD *)(a1 + 4896) = 0LL;
  }
  v9 = *(void **)(a1 + 5056);
  if ( v9 )
  {
    PoUnregisterPowerSettingCallback(v9);
    *(_QWORD *)(a1 + 5056) = 0LL;
  }
  v10 = *(_BYTE *)(a1 + 109);
  if ( (v10 & 8) != 0 )
  {
    *(_BYTE *)(a1 + 109) = v10 & 0xF7;
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 5064), 0);
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5064));
  }
}
