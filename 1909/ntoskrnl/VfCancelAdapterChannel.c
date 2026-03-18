/*
 * XREFs of VfCancelAdapterChannel @ 0x1409690C0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViRemoveChannelWcb @ 0x140327A38 (ViRemoveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140967908 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140967C00 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x14096BD94 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14096C0D8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14096C3A4 (ViGetRealDmaOperation.c)
 */

char __fastcall VfCancelAdapterChannel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64); // rbx
  __int64 AdapterInformationInternal; // rbp
  char v8; // al
  char v9; // di
  __int64 v10; // rbx

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v8 = RealDmaOperation(a1, a2, a3);
  v9 = v8;
  if ( AdapterInformationInternal )
  {
    if ( v8 )
    {
      v10 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, a3);
      if ( v10 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v10 + 48));
        if ( *(_QWORD *)(v10 + 96) )
          ViFreeMapRegisterFile(AdapterInformationInternal);
        ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v10);
      }
    }
  }
  return v9;
}
