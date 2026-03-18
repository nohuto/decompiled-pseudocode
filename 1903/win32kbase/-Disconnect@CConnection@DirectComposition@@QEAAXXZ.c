/*
 * XREFs of ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C00083B4
 * Callers:
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C00069CC (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C0006C08 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0006C90 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C00079D0 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0008338 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z @ 0x1C0008360 (-GetNewBatches@CConnection@DirectComposition@@QEAAXPEAPEAVCBatch@2@@Z.c)
 *     ?TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ @ 0x1C00085EC (-TryAcquireExclusive@CCriticalSection@DirectComposition@@QEAA_NXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C000F194 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0055CB0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0056EA0 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0057050 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C00824D8 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::Disconnect(DirectComposition::CConnection *this)
{
  char v2; // si
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v4; // rbx
  DirectComposition::CBatch *v5; // rcx
  DirectComposition::CBatch *v6; // rcx
  struct DirectComposition::CBatch *v7; // rax
  unsigned int v8; // edx
  DirectComposition::CBatch *v9; // rax
  DirectComposition::CBatch *v10; // rbx
  void *v11; // rax
  volatile signed __int32 *v12; // rbx
  DirectComposition::CEvent *v13; // rcx
  __int64 v14; // rdi
  DirectComposition::CBatch *v15; // rbx
  DirectComposition::CBatch *v16; // rbx
  struct DirectComposition::CBatch *v17; // rbx
  struct _ERESOURCE *v18; // rbx
  struct _ERESOURCE *v19; // rbx
  struct _ERESOURCE *v20; // rbx
  struct _ERESOURCE *v21; // rbx
  struct DirectComposition::CBatch *v22; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v3, 1u);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  if ( *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 37) = 0;
    v2 = 1;
  }
  DirectComposition::CConnection::DiscardAllCompositionFrames(this);
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CConnection *)((char *)this + 192));
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CConnection *)((char *)this + 192),
    0LL);
  v5 = (DirectComposition::CBatch *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v5 )
  {
    do
    {
      v15 = *(DirectComposition::CBatch **)v5;
      DirectComposition::CBatch::ReturnToApplication(v5, 0);
      v5 = v15;
    }
    while ( v15 );
  }
  v6 = (DirectComposition::CBatch *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v6 )
  {
    do
    {
      v16 = *(DirectComposition::CBatch **)v6;
      DirectComposition::CBatch::ReturnToApplication(v6, 0);
      v6 = v16;
    }
    while ( v16 );
  }
  v7 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  v22 = v7;
  if ( v7 )
  {
    do
    {
      v17 = *(struct DirectComposition::CBatch **)v7;
      DirectComposition::CBatch::ReturnToApplication(v7, 0);
      v7 = v17;
    }
    while ( v17 );
    v22 = 0LL;
  }
  DirectComposition::CConnection::GetNewBatches((union _SLIST_HEADER *)this, &v22);
  v9 = v22;
  if ( v22 )
  {
    do
    {
      v10 = *(DirectComposition::CBatch **)v9;
      DirectComposition::CBatch::ReturnToApplication(v9, 0);
      v9 = v10;
    }
    while ( v10 );
    v22 = 0LL;
  }
  if ( v2 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      v11 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
              (DirectComposition::CConnection *)((char *)this + 24),
              &v23);
      v12 = (volatile signed __int32 *)v11;
      if ( !v11 )
        break;
      if ( _InterlockedCompareExchange((volatile signed __int32 *)v11 + 6, 3, 4) != 4
        && !_InterlockedCompareExchange((volatile signed __int32 *)v11 + 6, 1, 0)
        && DirectComposition::CCriticalSection::TryAcquireExclusive(*((PERESOURCE *)v11 + 4)) )
      {
        if ( _InterlockedCompareExchange(v12 + 6, 2, 1) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *, _QWORD))(*(_QWORD *)v12 + 48LL))(v12, 0LL);
        ExReleaseResourceLite(*((PERESOURCE *)v12 + 4));
        KeLeaveCriticalRegion();
      }
    }
  }
  v13 = (DirectComposition::CEvent *)*((_QWORD *)this + 10);
  if ( v13 )
  {
    DirectComposition::CEvent::`scalar deleting destructor'(v13, v8);
    *((_QWORD *)this + 10) = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  v14 = *((_QWORD *)this + 19);
  ExReleaseResourceLite(*(PERESOURCE *)(v14 + 32));
  KeLeaveCriticalRegion();
  do
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 24), 2, 1) == 1 )
    {
      v18 = *(struct _ERESOURCE **)(v14 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v18, 1u);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, 0LL);
      v19 = *(struct _ERESOURCE **)(*(_QWORD *)(v14 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v19, 1u);
      if ( DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v14 + 40)) )
        *(_DWORD *)(v14 + 24) = 4;
      ExReleaseResourceLite(*(PERESOURCE *)(v14 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v14 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 24), 5, 4) == 4 )
    {
      v20 = *(struct _ERESOURCE **)(v14 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v20, 1u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
      v21 = *(struct _ERESOURCE **)(*(_QWORD *)(v14 + 40) + 8LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v21, 1u);
      if ( !DirectComposition::CConnection::IsConnected(*(DirectComposition::CConnection **)(v14 + 40)) )
        *(_DWORD *)(v14 + 24) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(v14 + 32));
      KeLeaveCriticalRegion();
      ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v14 + 40) + 8LL));
      KeLeaveCriticalRegion();
    }
  }
  while ( *(_DWORD *)(v14 + 24) == 1 );
}
