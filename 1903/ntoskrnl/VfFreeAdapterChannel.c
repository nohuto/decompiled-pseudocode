/*
 * XREFs of VfFreeAdapterChannel @ 0x140969480
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ViRemoveChannelWcb @ 0x140327FE8 (ViRemoveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140967908 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140967C00 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140967D20 (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x14096BD94 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14096C0D8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14096C3A4 (ViGetRealDmaOperation.c)
 */

void __fastcall VfFreeAdapterChannel(__int64 a1)
{
  void (__fastcall *RealDmaOperation)(__int64); // rbx
  __int64 AdapterInformationInternal; // rsi
  __int64 v4; // rbx

  VF_ASSERT_IRQL(2u);
  RealDmaOperation = (void (__fastcall *)(__int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaOperation(a1);
  if ( AdapterInformationInternal )
  {
    _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 188), 0);
    v4 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, 0LL);
    if ( v4 )
    {
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v4 + 48));
      if ( *(_QWORD *)(v4 + 96) )
        ViFreeMapRegisterFile(AdapterInformationInternal);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v4);
    }
  }
}
