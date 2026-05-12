/*
 * XREFs of RaidAdapterReleaseResources @ 0x1C0073DA0
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0073F5C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0074244 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C0007F20 (StorFreeContiguousIoResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C00144F4 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterStop @ 0x1C0016C60 (RaidAdapterStop.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0037768 (RaidAdapterDeleteAsyncCallbacks.c)
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 *     RaAdapterDeregisterFromIdleDetection @ 0x1C00424FC (RaAdapterDeregisterFromIdleDetection.c)
 *     RaidFreeMappingList @ 0x1C0045E9C (RaidFreeMappingList.c)
 *     RaFreeRaidResources @ 0x1C004BFF8 (RaFreeRaidResources.c)
 */

void __fastcall RaidAdapterReleaseResources(__int64 a1, __int64 a2, char a3)
{
  struct _IO_WORKITEM *v4; // rcx
  void *v5; // rcx
  unsigned int i; // edi
  __int64 v7; // rdx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 312) && (*(_BYTE *)(a1 + 109) & 0x20) != 0 )
    RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL), a3, 0LL, 0);
  v4 = *(struct _IO_WORKITEM **)(a1 + 5840);
  if ( v4 )
  {
    IoFreeWorkItem(v4);
    *(_QWORD *)(a1 + 5840) = 0LL;
  }
  RaAdapterDeregisterFromIdleDetection(a1);
  v5 = *(void **)(a1 + 5536);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x57506152u);
    *(_QWORD *)(a1 + 5536) = 0LL;
  }
  RaidAdapterDeleteAsyncCallbacks(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  RaidAdapterStop(a1);
  for ( i = 0; i < 0x258; ++i )
  {
    if ( !*(_DWORD *)(a1 + 5048) && !*(_DWORD *)(a1 + 4272) )
      break;
    if ( i < 0x32
      && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Bu,
        (__int64)&WPP_2427d071e20036a288b852fd33055616_Traceguids);
    }
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( i >= 0x258
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Cu,
      (__int64)&WPP_2427d071e20036a288b852fd33055616_Traceguids);
  }
  RaFreeRaidResources((PSLIST_HEADER)(a1 + 896), *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4514));
  RaidFreeMappingList((void **)(a1 + 784));
  v7 = *(_QWORD *)(a1 + 112);
  if ( v7 )
  {
    StorFreeContiguousIoResources(a1, v7);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_DWORD *)(a1 + 120) &= ~1u;
  }
}
