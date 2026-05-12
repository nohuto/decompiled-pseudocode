/*
 * XREFs of RaidDeleteAdapter @ 0x1C003A9C4
 * Callers:
 *     RaDriverAddDevice @ 0x1C001C030 (RaDriverAddDevice.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0073F5C (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C0007F20 (StorFreeContiguousIoResources.c)
 *     RaidDeleteDeferredQueue @ 0x1C003C1B4 (RaidDeleteDeferredQueue.c)
 *     RaDriverDeleteDevice @ 0x1C003C29C (RaDriverDeleteDevice.c)
 *     StorFreeContiguousMemory @ 0x1C006A944 (StorFreeContiguousMemory.c)
 *     RaDeleteBus @ 0x1C006BD34 (RaDeleteBus.c)
 *     RaidDeleteDma @ 0x1C0074460 (RaidDeleteDma.c)
 *     RaDeleteMiniport @ 0x1C0074B28 (RaDeleteMiniport.c)
 *     RaidDeleteResourceList @ 0x1C0074BA4 (RaidDeleteResourceList.c)
 *     PortFreeDriverParameters @ 0x1C0075B40 (PortFreeDriverParameters.c)
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
  void *v21; // rcx
  signed __int32 v22[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 2176);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2176));
  if ( (*(_DWORD *)(a1 + 2208) & 2) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 2184), 0);
  *(_DWORD *)(a1 + 2208) = 0;
  *(_QWORD *)(a1 + 2184) = 0LL;
  KeReleaseSpinLock(v1, v3);
  RaidDeleteResourceList(a1 + 296);
  LOBYTE(v4) = *(_BYTE *)(a1 + 4514) == 0;
  RaDeleteMiniport(a1 + 312, v4);
  if ( *(_DWORD *)(a1 + 768) )
    StorFreeContiguousMemory(a1 + 720, a1 + 752);
  v5 = *(_QWORD *)(a1 + 4696);
  if ( v5 )
  {
    StorFreeContiguousIoResources(a1, v5);
    *(_QWORD *)(a1 + 4696) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 4514) )
    RaidDeleteDma((void *)(a1 + 720));
  RaDeleteBus(a1 + 616);
  RaidDeleteDeferredQueue(a1 + 1152);
  RaidDeleteDeferredQueue(a1 + 1536);
  v6 = *(_QWORD *)(a1 + 2144);
  *(_DWORD *)a1 = -1;
  if ( v6 )
  {
    PortFreeDriverParameters();
    *(_QWORD *)(a1 + 2144) = 0LL;
  }
  v7 = *(void **)(a1 + 4520);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 4520) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 2120));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5696));
  RaDriverDeleteDevice(a1);
  v8 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 272);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v8 )
  {
    ExFreeCacheAwareRundownProtection(v8);
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 4513) )
  {
    v9 = *(void **)(a1 + 4504);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x72446152u);
      *(_QWORD *)(a1 + 4504) = 0LL;
    }
  }
  if ( (*(_BYTE *)(a1 + 4804) & 1) != 0 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
    if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
    {
      g_RaidPerfRedirectGroupCount = 0;
      _InterlockedOr(v22, 0);
      ExFreePoolWithTag(g_RaidPerProcessorState, 0x72446152u);
      ExFreePoolWithTag(g_RaidDPCRedirectionProcessors, 0x72446152u);
      g_RaidPerProcessorState = 0LL;
      g_RaidDPCRedirectionProcessors = 0LL;
    }
    KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v10);
    v11 = *(void **)(a1 + 4824);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0x72446152u);
      *(_QWORD *)(a1 + 4824) = 0LL;
    }
  }
  if ( *(int *)(a1 + 4808) > 1 )
  {
    v12 = 0LL;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v14 = 0;
    v15 = HighestNodeNumber + 1;
    if ( HighestNodeNumber != -1 )
    {
LABEL_25:
      v16 = ExpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4816) + ((unsigned __int64)v14 << 6)));
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
    ExFreePoolWithTag(*(PVOID *)(a1 + 4816), 0x54436152u);
  }
  v17 = *(void **)(a1 + 4872);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x51536152u);
    *(_QWORD *)(a1 + 4872) = 0LL;
  }
  v18 = *(void **)(a1 + 5040);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x4D566152u);
    *(_QWORD *)(a1 + 5040) = 0LL;
  }
  if ( !*(_DWORD *)(a1 + 160) )
    ExFreePoolWithTag(*(PVOID *)(a1 + 176), 0x74636944u);
  v19 = *(void **)(a1 + 48);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  v20 = *(void **)(a1 + 5544);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0x45436152u);
    *(_QWORD *)(a1 + 5544) = 0LL;
  }
  v21 = *(void **)(a1 + 5272);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0x54456152u);
    *(_QWORD *)(a1 + 5272) = 0LL;
  }
  *(_DWORD *)(a1 + 5120) = -1;
  *(_DWORD *)(a1 + 5124) = 0;
  *(_QWORD *)(a1 + 5128) = 0LL;
}
