/*
 * XREFs of ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C006E820
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C006E680 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C000BD18 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C0015188 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C006E648 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C006EBC8 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::ConfirmFrame(DirectComposition::CConnection *this)
{
  struct _ERESOURCE *v1; // rbx
  __int64 v3; // r14
  struct _ERESOURCE *v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *i; // rbx
  __int64 v11; // rdx
  unsigned int v12; // edx
  char v13; // al
  __int64 v14; // r12
  void *v15; // rcx
  __int64 v16; // r15
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // edi
  struct _ERESOURCE *v21; // rbx
  LARGE_INTEGER *v22; // rbx
  __int64 v23; // rcx

  v1 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v1, 1u);
  v3 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v3 )
  {
    do
    {
      v12 = *(_DWORD *)(v3 + 112);
      v13 = *(_BYTE *)(v3 + 32) & 0xFD;
      v14 = *(_QWORD *)v3;
      *(_BYTE *)(v3 + 32) = v13;
      if ( v12 )
      {
        DirectComposition::CConnection::ReleaseShellResourceAccess(
          *(DirectComposition::CConnection **)(*(_QWORD *)(v3 + 8) + 40LL),
          v12);
        v13 = *(_BYTE *)(v3 + 32);
        *(_DWORD *)(v3 + 112) = 0;
      }
      if ( (v13 & 4) == 0 )
        DirectComposition::CApplicationChannel::NotifyBatchProcessed(
          *(DirectComposition::CApplicationChannel **)(v3 + 8),
          (struct DirectComposition::CBatch *)v3);
      v15 = *(void **)(v3 + 96);
      v16 = *(_QWORD *)(v3 + 8);
      if ( v15 )
        ObfDereferenceObject(v15);
      *(_BYTE *)(v3 + 32) &= ~0x10u;
      v17 = *(_DWORD *)(v3 + 20) == 6;
      *(_QWORD *)(v3 + 96) = 0LL;
      if ( v17 )
      {
        v19 = *(_QWORD *)(v16 + 40);
        v20 = *(_DWORD *)(v16 + 28);
        v21 = *(struct _ERESOURCE **)(v19 + 16);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v21, 1u);
        DirectComposition::CLinearObjectTableBase::ReleaseHandle(
          (DirectComposition::CLinearObjectTableBase *)(v19 + 24),
          v20);
        ExReleaseResourceLite(*(PERESOURCE *)(v19 + 16));
        KeLeaveCriticalRegion();
        Win32FreePool(v3);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, 1LL);
      }
      else
      {
        v18 = *(_QWORD *)(v16 + 360);
        *(_DWORD *)(v16 + 380) = *(_DWORD *)(v3 + 16);
        if ( v18 && !*(_QWORD *)(v16 + 368) )
          KeSetEvent(*(PRKEVENT *)(v18 + 8), 1, 0);
        if ( (*(_BYTE *)(v3 + 32) & 8) != 0 )
          *(_BYTE *)(v16 + 242) = 0;
        if ( (*(_BYTE *)(v16 + 241) & 4) != 0 )
        {
          v22 = *(LARGE_INTEGER **)(v16 + 720);
          v22[8].LowPart = *(_DWORD *)(v3 + 16);
          v22[7] = KeQueryPerformanceCounter(0LL);
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v16 + 192), (PSLIST_ENTRY)v3);
        KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v16 + 216) + 8LL), 1, 0);
      }
      v3 = v14;
    }
    while ( v14 );
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  v5 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v4, 1u);
  while ( 1 )
  {
    v6 = *((_QWORD *)this + 6);
    v7 = v5;
    if ( v5 < v6 )
    {
      v8 = (_QWORD *)(*((_QWORD *)this + 3) + v5 * *((_QWORD *)this + 7));
      do
      {
        if ( *v8 )
          break;
        ++v7;
        v8 = (_QWORD *)((char *)v8 + *((_QWORD *)this + 7));
      }
      while ( v7 < v6 );
    }
    if ( v7 >= v6 )
      break;
    _mm_lfence();
    v5 = v7 + 1;
    v9 = *(_QWORD *)(v7 * *((_QWORD *)this + 7) + *((_QWORD *)this + 3));
    if ( !v9 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  for ( i = (_QWORD *)*((_QWORD *)this + 24); i != (_QWORD *)((char *)this + 192); i = (_QWORD *)*i )
  {
    v11 = i[6];
    if ( v11 )
    {
      v23 = *(_QWORD *)(i[2] + 16LL);
      if ( v23 )
        MmUnmapViewOfSection(v23, v11);
      i[6] = 0LL;
    }
    i[4] = 0LL;
    i[5] = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
}
