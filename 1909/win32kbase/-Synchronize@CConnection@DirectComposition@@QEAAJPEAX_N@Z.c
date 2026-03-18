/*
 * XREFs of ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C01A18FC
 * Callers:
 *     NtDCompositionSyncWait @ 0x1C01A09B0 (NtDCompositionSyncWait.c)
 * Callees:
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000973C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C000AC58 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C000C254 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C000CF38 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::Synchronize(DirectComposition::CConnection *this, void *a2, char a3)
{
  struct _ERESOURCE *v6; // rbx
  DirectComposition::CBatchSharedMemoryPool ***v7; // rbx
  char *v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rdi
  struct _ERESOURCE *v11; // rbx
  struct _ERESOURCE *v12; // rbx
  struct _ERESOURCE *v13; // rbx
  struct _ERESOURCE *v14; // rbx
  void *v16; // [rsp+30h] [rbp+8h] BYREF

  v6 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v6, 1u);
  v7 = (DirectComposition::CBatchSharedMemoryPool ***)*((_QWORD *)this + 19);
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)v7);
  if ( DirectComposition::CBatch::GetPayloadWritePointer(v7[21], 0x1CuLL, &v16) )
  {
    v8 = (char *)v16;
    *(_DWORD *)v16 = 28;
    *((_DWORD *)v8 + 1) = 353;
    *(_QWORD *)(v8 + 12) = a2;
    v8[20] = a3;
    v9 = DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)v7, 0LL, 1, 0LL);
  }
  else
  {
    v9 = -1073741823;
  }
  v10 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 2, 1) == 1 )
    {
      v11 = *(struct _ERESOURCE **)(v10 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v11, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 48LL))(v10, 0LL);
      v12 = *(struct _ERESOURCE **)(*(_QWORD *)(v10 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v12, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v10 + 40)) )
        *(_DWORD *)(v10 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v10 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 5, 4) == 4 )
    {
      v13 = *(struct _ERESOURCE **)(v10 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v13, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
      v14 = *(struct _ERESOURCE **)(*(_QWORD *)(v10 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v14, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v10 + 40)) )
        *(_DWORD *)(v10 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v10 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v10 + 24) == 1 );
  return v9;
}
