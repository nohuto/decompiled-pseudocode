/*
 * XREFs of ndisMInitializeMiniportBlock @ 0x1C002F2F8
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x1C00252F0 (NdisAllocateRefCount.c)
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C002CF0C (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@QEAAXPEAUNDISWATCHDOG__@@@Z @ 0x1C002F4DC (-reset@-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ @ 0x1C00FCBA4 (-ndisAllocateWatchdog@@YAPEAUNDISWATCHDOG__@@XZ.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C012EEC0 (ndisMInitializeMiniportBlockFront.c)
 */

__int64 __fastcall ndisMInitializeMiniportBlock(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  struct NDISWATCHDOG__ *Watchdog; // rax
  __int64 v9; // rcx

  memset((void *)a2, 0, a3);
  _NDIS_MINIPORT_BLOCK::_NDIS_MINIPORT_BLOCK((_NDIS_MINIPORT_BLOCK *)a2);
  *(_QWORD *)(a2 + 3760) = a1;
  ndisMInitializeMiniportBlockFront((PVOID)a2);
  *(_QWORD *)(a2 + 3880) = 1LL;
  *(_DWORD *)(a2 + 4060) = 1;
  *(_WORD *)(a2 + 3992) = _InterlockedExchangeAdd(&ndisInstanceNumber, 1u) + 1;
  *(_QWORD *)(a2 + 4704) = a2 + 4696;
  *(_QWORD *)(a2 + 4696) = a2 + 4696;
  *(_QWORD *)(a2 + 4728) = a2 + 4720;
  *(_QWORD *)(a2 + 4720) = a2 + 4720;
  *(_QWORD *)(a2 + 4752) = a2 + 4744;
  *(_QWORD *)(a2 + 4744) = a2 + 4744;
  *(_QWORD *)(a2 + 5760) = a2 + 5752;
  *(_QWORD *)(a2 + 5752) = a2 + 5752;
  KeInitializeEvent((PRKEVENT)(a2 + 3728), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a2 + 4216), NotificationEvent, 1u);
  KeInitializeSpinLock((PKSPIN_LOCK)(a2 + 3872));
  KeInitializeSemaphore((PRKSEMAPHORE)(a2 + 3920), 1, 1);
  KeInitializeSemaphore((PRKSEMAPHORE)(a2 + 3952), 1, 1);
  *(_QWORD *)(a2 + 4328) = 0LL;
  *(_QWORD *)(a2 + 4320) = ndisPowerIrpWorker;
  *(_QWORD *)(a2 + 4304) = 0LL;
  *(_QWORD *)(a2 + 4352) = ndisPowerIrpWorker;
  *(_QWORD *)(a2 + 4360) = 0LL;
  *(_QWORD *)(a2 + 4336) = 0LL;
  *(_QWORD *)(a2 + 5296) = ndisMUpdateInterfaceWorker;
  *(_QWORD *)(a2 + 5304) = a2;
  *(_QWORD *)(a2 + 5280) = 0LL;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 4120), 0x2020444Eu, 0, 0, 0x20u);
  *(_QWORD *)(a2 + 4888) = NdisAllocateRefCount(0x6Eu, 0);
  *(_QWORD *)(a2 + 4896) = NdisAllocateRefCount(5u, 0);
  v5 = *(_QWORD *)(a2 + 3760);
  if ( *(_DWORD *)(v5 + 904) != 1
    || (v9 = *(_QWORD *)(v5 + 352)) == 0
    || (v6 = 5456LL, *(_QWORD *)(v9 + 64) == *(_QWORD *)(v5 + 176)) )
  {
    v6 = 5448LL;
  }
  Watchdog = ndisAllocateWatchdog();
  return wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::reset(
           v6 + a2,
           Watchdog);
}
