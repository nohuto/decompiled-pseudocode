/*
 * XREFs of SepDeReferenceSharedSidEntries @ 0x1408E24DC
 * Callers:
 *     SepFreeTokenCapabilities @ 0x140087E1C (SepFreeTokenCapabilities.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlRemoveEntryHashTable @ 0x140085E50 (RtlRemoveEntryHashTable.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SepFindSharedSidEntry @ 0x1408E2994 (SepFindSharedSidEntry.c)
 */

void __fastcall SepDeReferenceSharedSidEntries(PSID *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  __int64 SharedSidEntry; // rax
  void *v7; // rsi
  __int64 v8; // rcx
  volatile signed __int64 *v9; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(g_SepSidMapping, 0LL);
  if ( a2 )
  {
    v5 = a2;
    do
    {
      SharedSidEntry = SepFindSharedSidEntry(*a1);
      v7 = (void *)SharedSidEntry;
      v8 = _InterlockedDecrement64((volatile signed __int64 *)(SharedSidEntry + 24));
      if ( v8 <= 0 )
      {
        if ( v8 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(
               *(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8),
               (PRTL_DYNAMIC_HASH_TABLE_ENTRY)SharedSidEntry,
               0LL) )
        {
          ExFreePoolWithTag(v7, 0);
        }
      }
      a1 += 2;
      --v5;
    }
    while ( v5 );
  }
  v9 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  KeLeaveCriticalRegion();
}
