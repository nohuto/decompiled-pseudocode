/*
 * XREFs of RaidCreateAdapter @ 0x1C001D14C
 * Callers:
 *     RaDriverAddDevice @ 0x1C001CE20 (RaDriverAddDevice.c)
 * Callees:
 *     RaidCreateDeferredQueue @ 0x1C001D32C (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C001D370 (StorCreateIoGateway.c)
 *     StorCreateDictionary @ 0x1C001D3CC (StorCreateDictionary.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     RaCreateBus @ 0x1C006A8F8 (RaCreateBus.c)
 *     RaidCreateResourceList @ 0x1C006A91C (RaidCreateResourceList.c)
 *     RaidCreateDma @ 0x1C006DF68 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C006DF88 (RaCreateMiniport.c)
 */

void __fastcall RaidCreateAdapter(__int64 a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset((void *)a1, 0, 0x1680uLL);
  *(_QWORD *)(a1 + 128) = a1 + 120;
  *(_QWORD *)(a1 + 120) = a1 + 120;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 112));
  *(_QWORD *)(a1 + 208) = a1 + 200;
  *(_QWORD *)(a1 + 200) = a1 + 200;
  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 192));
  InitializeSListHead((PSLIST_HEADER)(a1 + 224));
  InitializeSListHead((PSLIST_HEADER)(a1 + 5008));
  *(_DWORD *)(a1 + 56) = -1;
  if ( (int)StorCreateDictionary(a1 + 144) >= 0 )
  {
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
    *(_QWORD *)(a1 + 256) = CacheAwareRundownProtection;
    if ( CacheAwareRundownProtection )
    {
      RaCreateMiniport(a1 + 296);
      RaidCreateDma(a1 + 696);
      *(_DWORD *)(a1 + 264) = 0;
      *(_DWORD *)(a1 + 268) = 0;
      *(_DWORD *)(a1 + 272) = 0;
      *(_BYTE *)(a1 + 276) = 0;
      RaidCreateResourceList(a1 + 280);
      RaCreateBus(a1 + 592);
      *(_QWORD *)(a1 + 728) = 0LL;
      *(_QWORD *)(a1 + 736) = 0LL;
      *(_QWORD *)(a1 + 744) = 0LL;
      StorCreateIoGateway((PKSPIN_LOCK)(a1 + 768));
      RaidCreateDeferredQueue(a1 + 1088);
      RaidCreateDeferredQueue(a1 + 1472);
      *(_DWORD *)(a1 + 1232) = 134684677;
      *(_DWORD *)(a1 + 1312) = 134684677;
      *(_DWORD *)(a1 + 1392) = 134684677;
      KeInitializeTimer((PKTIMER)(a1 + 1664));
      KeInitializeTimer((PKTIMER)(a1 + 1856));
      KeInitializeTimer((PKTIMER)(a1 + 4216));
      KeInitializeTimer((PKTIMER)(a1 + 5416));
      *(_DWORD *)(a1 + 88) = 2;
      *(_BYTE *)(a1 + 106) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 680));
      KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 5544));
    }
  }
}
