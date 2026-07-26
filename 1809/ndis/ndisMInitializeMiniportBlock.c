/*
 * XREFs of ndisMInitializeMiniportBlock @ 0x1C00CB1EC
 * Callers:
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C00163F8 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C001E500 (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     NdisInitializeEvent @ 0x1C001E540 (NdisInitializeEvent.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00C2CD0 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     NdisAllocateRefCount @ 0x1C00C42B0 (NdisAllocateRefCount.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C010EAFC (ndisMInitializeMiniportBlockFront.c)
 */

void __fastcall ndisMInitializeMiniportBlock(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  struct NDISWATCHDOG__ *Watchdog; // rax
  __int64 v8; // rcx

  memset((void *)a2, 0, a3);
  _NDIS_MINIPORT_BLOCK::_NDIS_MINIPORT_BLOCK((_NDIS_MINIPORT_BLOCK *)a2);
  *(_QWORD *)(a2 + 3792) = a1;
  ndisMInitializeMiniportBlockFront((PVOID)a2);
  *(_QWORD *)(a2 + 3912) = 1LL;
  *(_DWORD *)(a2 + 4092) = 1;
  *(_WORD *)(a2 + 4024) = _InterlockedExchangeAdd(&ndisInstanceNumber, 1u) + 1;
  *(_QWORD *)(a2 + 4744) = a2 + 4736;
  *(_QWORD *)(a2 + 4736) = a2 + 4736;
  *(_QWORD *)(a2 + 4768) = a2 + 4760;
  *(_QWORD *)(a2 + 4760) = a2 + 4760;
  *(_QWORD *)(a2 + 4792) = a2 + 4784;
  *(_QWORD *)(a2 + 4784) = a2 + 4784;
  *(_QWORD *)(a2 + 5824) = a2 + 5816;
  *(_QWORD *)(a2 + 5816) = a2 + 5816;
  NdisInitializeEvent((PNDIS_EVENT)(a2 + 3760));
  KeInitializeEvent((PRKEVENT)(a2 + 4256), NotificationEvent, 1u);
  KeInitializeSpinLock((PKSPIN_LOCK)(a2 + 3904));
  KeInitializeSemaphore((PRKSEMAPHORE)(a2 + 3952), 1, 1);
  KeInitializeSemaphore((PRKSEMAPHORE)(a2 + 3984), 1, 1);
  *(_QWORD *)(a2 + 4368) = 0LL;
  *(_QWORD *)(a2 + 4360) = ndisPowerIrpWorker;
  *(_QWORD *)(a2 + 4344) = 0LL;
  *(_QWORD *)(a2 + 4392) = ndisPowerIrpWorker;
  *(_QWORD *)(a2 + 4400) = 0LL;
  *(_QWORD *)(a2 + 4376) = 0LL;
  *(_QWORD *)(a2 + 5336) = ndisMUpdateInterfaceWorker;
  *(_QWORD *)(a2 + 5344) = a2;
  *(_QWORD *)(a2 + 5320) = 0LL;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 4152), 0x2020444Eu, 0, 0, 0x20u);
  *(_QWORD *)(a2 + 4928) = NdisAllocateRefCount(0x6Du, 0);
  *(_QWORD *)(a2 + 4936) = NdisAllocateRefCount(5u, 0);
  v5 = *(_QWORD *)(a2 + 3792);
  if ( *(_DWORD *)(v5 + 904) != 1
    || (v8 = *(_QWORD *)(v5 + 352)) == 0
    || (v6 = 5520LL, *(_QWORD *)(v8 + 64) == *(_QWORD *)(v5 + 176)) )
  {
    v6 = 5512LL;
  }
  Watchdog = ndisAllocateWatchdog();
  wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,-1,std::nullptr_t>>::reset(
    (struct NDISWATCHDOG__ **)(v6 + a2),
    Watchdog);
}
