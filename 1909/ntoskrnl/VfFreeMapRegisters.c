/*
 * XREFs of VfFreeMapRegisters @ 0x1409697F0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084498 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ViRemoveChannelWcb @ 0x140327A38 (ViRemoveChannelWcb.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140967C00 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140967D20 (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x14096BD94 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14096C0D8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14096C3A4 (ViGetRealDmaOperation.c)
 */

void __fastcall VfFreeMapRegisters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  char v7; // bp
  void (__fastcall *RealDmaOperation)(__int64, __int64, _QWORD); // r12
  __int64 AdapterInformationInternal; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rbx

  v4 = 0LL;
  v7 = 0;
  RealDmaOperation = (void (__fastcall *)(__int64, __int64, _QWORD))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v4 = a2;
    if ( a2 == -559026163 )
    {
      a2 = 0LL;
      v7 = 1;
      v4 = 0LL;
    }
    else if ( a2 && *(_DWORD *)a2 == -1393569779 )
    {
      a2 = *(_QWORD *)(a2 + 48);
    }
  }
  RealDmaOperation(a1, a2, a3);
  if ( AdapterInformationInternal )
  {
    if ( v7 == 1 )
      v4 = -559026163LL;
    v10 = ViRemoveChannelWcb(AdapterInformationInternal, v4, 0LL);
    v11 = (_QWORD *)v10;
    if ( v10 )
    {
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v10 + 48));
      if ( v11[12] )
        ViFreeMapRegisterFile(AdapterInformationInternal);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v11);
    }
  }
}
