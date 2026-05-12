/*
 * XREFs of RaidAdapterReleaseResources @ 0x1C0074128
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00742D0 (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00745C8 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterStop @ 0x1C0015CAC (RaidAdapterStop.c)
 *     RaidPnPPassToMiniPort @ 0x1C0016918 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C00346F4 (RaidAdapterDeleteAsyncCallbacks.c)
 *     WPP_SF_ @ 0x1C0038C2C (WPP_SF_.c)
 *     RaAdapterDeregisterFromIdleDetection @ 0x1C0040574 (RaAdapterDeregisterFromIdleDetection.c)
 *     RaidFreeMappingList @ 0x1C0044524 (RaidFreeMappingList.c)
 *     RaFreeRaidResources @ 0x1C004AA04 (RaFreeRaidResources.c)
 */

void __fastcall RaidAdapterReleaseResources(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  struct _IO_WORKITEM *v5; // rcx
  void *v6; // rcx
  unsigned int i; // edi
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  Interval.QuadPart = 0LL;
  if ( *(_QWORD *)(a1 + 296) && (*(_BYTE *)(a1 + 109) & 0x20) != 0 )
    RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), v4, a3, 0LL, 0);
  v5 = *(struct _IO_WORKITEM **)(a1 + 5680);
  if ( v5 )
  {
    IoFreeWorkItem(v5);
    *(_QWORD *)(a1 + 5680) = 0LL;
  }
  RaAdapterDeregisterFromIdleDetection(a1);
  v6 = *(void **)(a1 + 5400);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x57506152u);
    *(_QWORD *)(a1 + 5400) = 0LL;
  }
  RaidAdapterDeleteAsyncCallbacks(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  RaidAdapterStop(a1);
  for ( i = 0; i < 0x258; ++i )
  {
    if ( !*(_DWORD *)(a1 + 4968) && !*(_DWORD *)(a1 + 4208) )
      break;
    if ( i < 0x32
      && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Bu,
        (__int64)&WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids);
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
      (__int64)&WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids);
  }
  RaFreeRaidResources((PSLIST_HEADER)(a1 + 832), *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4450));
  RaidFreeMappingList((void **)(a1 + 760));
}
