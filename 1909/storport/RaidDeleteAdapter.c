/*
 * XREFs of RaidDeleteAdapter @ 0x1C0037AAC
 * Callers:
 *     RaDriverAddDevice @ 0x1C001A5F0 (RaDriverAddDevice.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00742D0 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C00064F0 (StorFreeContiguousIoResources.c)
 *     RaidDeleteDeferredQueue @ 0x1C0039474 (RaidDeleteDeferredQueue.c)
 *     RaDriverDeleteDevice @ 0x1C00394E8 (RaDriverDeleteDevice.c)
 *     StorFreeContiguousMemory @ 0x1C006B82C (StorFreeContiguousMemory.c)
 *     RaDeleteBus @ 0x1C006F1D4 (RaDeleteBus.c)
 *     RaidDeleteDma @ 0x1C00747E4 (RaidDeleteDma.c)
 *     RaDeleteMiniport @ 0x1C0074EF8 (RaDeleteMiniport.c)
 *     RaidDeleteResourceList @ 0x1C0074F74 (RaidDeleteResourceList.c)
 *     PortFreeDriverParameters @ 0x1C0075C40 (PortFreeDriverParameters.c)
 */

void __fastcall RaidDeleteAdapter(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // si
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v8; // rcx
  void *v9; // rcx
  KIRQL v10; // di
  void *v11; // rcx
  PSLIST_ENTRY v12; // rbp
  USHORT HighestNodeNumber; // ax
  unsigned int v14; // edi
  unsigned int v15; // esi
  PSLIST_ENTRY v16; // rax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  signed __int32 v21[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 2112);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2112));
  if ( (*(_DWORD *)(a1 + 2144) & 2) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 2120), 0);
  *(_DWORD *)(a1 + 2144) = 0;
  *(_QWORD *)(a1 + 2120) = 0LL;
  KeReleaseSpinLock(v1, v3);
  RaidDeleteResourceList(a1 + 280);
  LOBYTE(v4) = *(_BYTE *)(a1 + 4450) == 0;
  RaDeleteMiniport(a1 + 296, v4);
  if ( *(_DWORD *)(a1 + 744) )
    StorFreeContiguousMemory(a1 + 696, a1 + 728);
  v5 = *(_QWORD *)(a1 + 4632);
  if ( v5 )
  {
    StorFreeContiguousIoResources(a1, v5);
    *(_QWORD *)(a1 + 4632) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 4450) )
    RaidDeleteDma((void *)(a1 + 696));
  RaDeleteBus(a1 + 592);
  RaidDeleteDeferredQueue(a1 + 1088);
  RaidDeleteDeferredQueue(a1 + 1472);
  v6 = *(_QWORD *)(a1 + 2080);
  *(_DWORD *)a1 = -1;
  if ( v6 )
  {
    PortFreeDriverParameters();
    *(_QWORD *)(a1 + 2080) = 0LL;
  }
  v7 = *(void **)(a1 + 4456);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 4456) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 2056));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5560));
  RaDriverDeleteDevice(a1);
  v8 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 256);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v8 )
  {
    ExFreeCacheAwareRundownProtection(v8);
    *(_QWORD *)(a1 + 256) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 4449) )
  {
    v9 = *(void **)(a1 + 4440);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x72446152u);
      *(_QWORD *)(a1 + 4440) = 0LL;
    }
  }
  if ( (*(_BYTE *)(a1 + 4740) & 1) != 0 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
    if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
    {
      g_RaidPerfRedirectGroupCount = 0;
      _InterlockedOr(v21, 0);
      ExFreePoolWithTag(g_RaidPerProcessorState, 0x72446152u);
      ExFreePoolWithTag(g_RaidDPCRedirectionProcessors, 0x72446152u);
      g_RaidPerProcessorState = 0LL;
      g_RaidDPCRedirectionProcessors = 0LL;
    }
    KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v10);
    v11 = *(void **)(a1 + 4760);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x72446152u);
      *(_QWORD *)(a1 + 4760) = 0LL;
    }
  }
  if ( *(int *)(a1 + 4744) > 1 )
  {
    v12 = 0LL;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v14 = 0;
    v15 = HighestNodeNumber + 1;
    if ( HighestNodeNumber != -1 )
    {
LABEL_25:
      v16 = ExpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4752) + ((unsigned __int64)v14 << 6)));
      while ( 1 )
      {
        v12 = v16;
        if ( !HIDWORD(v16[1].Next) )
          break;
        v16 = v16->Next;
        if ( !v16 )
        {
          if ( ++v14 < v15 )
            goto LABEL_25;
          break;
        }
      }
    }
    ExFreePoolWithTag(v12, 0x54436152u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 4752), 0x54436152u);
  }
  v17 = *(void **)(a1 + 4808);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x54456152u);
    *(_QWORD *)(a1 + 4808) = 0LL;
  }
  v18 = *(void **)(a1 + 4960);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x4D566152u);
    *(_QWORD *)(a1 + 4960) = 0LL;
  }
  if ( !*(_DWORD *)(a1 + 144) )
    ExFreePoolWithTag(*(PVOID *)(a1 + 160), 0x74636944u);
  v19 = *(void **)(a1 + 48);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  v20 = *(void **)(a1 + 5408);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0x45436152u);
    *(_QWORD *)(a1 + 5408) = 0LL;
  }
  *(_DWORD *)(a1 + 4992) = -1;
  *(_DWORD *)(a1 + 4996) = 0;
  *(_QWORD *)(a1 + 5000) = 0LL;
}
