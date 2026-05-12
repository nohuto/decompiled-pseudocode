/*
 * XREFs of RaidCreateAdapter @ 0x1C001BD10
 * Callers:
 *     RaDriverAddDevice @ 0x1C001C030 (RaDriverAddDevice.c)
 * Callees:
 *     RaidCreateDeferredQueue @ 0x1C001BEF8 (RaidCreateDeferredQueue.c)
 *     StorCreateIoGateway @ 0x1C001BF3C (StorCreateIoGateway.c)
 *     StorCreateDictionary @ 0x1C001BF98 (StorCreateDictionary.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     RaCreateBus @ 0x1C006A910 (RaCreateBus.c)
 *     RaidCreateResourceList @ 0x1C006A934 (RaidCreateResourceList.c)
 *     RaidCreateDma @ 0x1C006C578 (RaidCreateDma.c)
 *     RaCreateMiniport @ 0x1C006C598 (RaCreateMiniport.c)
 */

void __fastcall RaidCreateAdapter(_DWORD *a1)
{
  PEX_RUNDOWN_REF_CACHE_AWARE CacheAwareRundownProtection; // rax

  memset(a1, 0, 0x1700uLL);
  *a1 = 0;
  *((_QWORD *)a1 + 18) = a1 + 34;
  *((_QWORD *)a1 + 17) = a1 + 34;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 16);
  *((_QWORD *)a1 + 28) = a1 + 54;
  *((_QWORD *)a1 + 27) = a1 + 54;
  KeInitializeSpinLock((PKSPIN_LOCK)a1 + 26);
  InitializeSListHead((PSLIST_HEADER)a1 + 15);
  InitializeSListHead((PSLIST_HEADER)a1 + 321);
  a1[14] = -1;
  if ( (int)StorCreateDictionary(a1 + 40) >= 0 )
  {
    CacheAwareRundownProtection = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x6D526152u);
    *((_QWORD *)a1 + 34) = CacheAwareRundownProtection;
    if ( CacheAwareRundownProtection )
    {
      RaCreateMiniport(a1 + 78);
      RaidCreateDma(a1 + 180);
      a1[70] = 0;
      a1[71] = 0;
      a1[72] = 0;
      *((_BYTE *)a1 + 292) = 0;
      RaidCreateResourceList(a1 + 74);
      RaCreateBus(a1 + 154);
      *((_QWORD *)a1 + 94) = 0LL;
      *((_QWORD *)a1 + 95) = 0LL;
      *((_QWORD *)a1 + 96) = 0LL;
      StorCreateIoGateway((PKSPIN_LOCK)a1 + 104);
      RaidCreateDeferredQueue(a1 + 288);
      RaidCreateDeferredQueue(a1 + 384);
      a1[324] = 134684677;
      a1[344] = 134684677;
      a1[364] = 134684677;
      KeInitializeTimer((PKTIMER)a1 + 27);
      KeInitializeTimer((PKTIMER)a1 + 30);
      KeInitializeTimer((PKTIMER)(a1 + 1070));
      KeInitializeTimer((PKTIMER)(a1 + 1388));
      a1[22] = 2;
      *((_BYTE *)a1 + 106) = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 88);
      KeInitializeSpinLock((PKSPIN_LOCK)a1 + 710);
    }
  }
}
