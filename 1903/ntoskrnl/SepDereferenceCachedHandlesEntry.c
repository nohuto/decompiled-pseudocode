/*
 * XREFs of SepDereferenceCachedHandlesEntry @ 0x14061F644
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140085B14 (SepSetTokenBnoIsolation.c)
 *     SepTokenDeleteMethod @ 0x14060AB50 (SepTokenDeleteMethod.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlRemoveEntryHashTable @ 0x140085E50 (RtlRemoveEntryHashTable.c)
 *     SepCloseCachedTokenHandles @ 0x140087DD0 (SepCloseCachedTokenHandles.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  __int64 v6; // rax
  BOOLEAN v8; // r14
  char v9; // bl
  void *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 88;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 88, 0LL);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v6 <= 0 )
  {
    if ( v6 )
      __fastfail(0xEu);
    v8 = RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v3 + 8), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2, 0LL);
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v8 )
    {
      SepCloseCachedTokenHandles(*(_DWORD *)(a2 + 56), *(HANDLE **)(a2 + 64));
      v10 = *(void **)(a2 + 64);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
    return v4;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
