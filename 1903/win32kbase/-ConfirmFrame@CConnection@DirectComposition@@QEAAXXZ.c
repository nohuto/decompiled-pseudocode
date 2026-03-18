/*
 * XREFs of ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0007D00
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C0007B60 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0007B28 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00080A8 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C000EC58 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C0013E78 (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CConnection::ConfirmFrame(DirectComposition::CConnection *this)
{
  struct _ERESOURCE *v1; // rbx
  __int64 *v3; // r14
  struct _ERESOURCE *v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _QWORD *i; // rbx
  unsigned int v11; // edx
  char v12; // al
  __int64 *v13; // r12
  void *v14; // rcx
  __int64 v15; // r15
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned int v19; // edi
  struct _ERESOURCE *v20; // rbx
  LARGE_INTEGER *v21; // rbx

  v1 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v1, 1u);
  v3 = (__int64 *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v3 )
  {
    do
    {
      v11 = *((_DWORD *)v3 + 28);
      v12 = v3[4] & 0xFD;
      v13 = (__int64 *)*v3;
      *((_BYTE *)v3 + 32) = v12;
      if ( v11 )
      {
        DirectComposition::CConnection::ReleaseShellResourceAccess(
          *(DirectComposition::CConnection **)(v3[1] + 40),
          v11);
        v12 = *((_BYTE *)v3 + 32);
        *((_DWORD *)v3 + 28) = 0;
      }
      if ( (v12 & 4) == 0 )
        DirectComposition::CApplicationChannel::NotifyBatchProcessed(
          (DirectComposition::CApplicationChannel *)v3[1],
          (struct DirectComposition::CBatch *)v3);
      v14 = (void *)v3[12];
      v15 = v3[1];
      if ( v14 )
        ObfDereferenceObject(v14);
      *((_BYTE *)v3 + 32) &= ~0x10u;
      v16 = *((_DWORD *)v3 + 5) == 6;
      v3[12] = 0LL;
      if ( v16 )
      {
        v18 = *(_QWORD *)(v15 + 40);
        v19 = *(_DWORD *)(v15 + 28);
        v20 = *(struct _ERESOURCE **)(v18 + 16);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v20, 1u);
        DirectComposition::CLinearObjectTableBase::ReleaseHandle(
          (DirectComposition::CLinearObjectTableBase *)(v18 + 24),
          v19);
        ExReleaseResourceLite(*(PERESOURCE *)(v18 + 16));
        KeLeaveCriticalRegion();
        Win32FreePool(v3);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, 1LL);
      }
      else
      {
        v17 = *(_QWORD *)(v15 + 360);
        *(_DWORD *)(v15 + 380) = *((_DWORD *)v3 + 4);
        if ( v17 && !*(_QWORD *)(v15 + 368) )
          KeSetEvent(*(PRKEVENT *)(v17 + 8), 1, 0);
        if ( (v3[4] & 8) != 0 )
          *(_BYTE *)(v15 + 240) &= ~0x80u;
        if ( (*(_BYTE *)(v15 + 241) & 8) != 0 )
        {
          v21 = *(LARGE_INTEGER **)(v15 + 720);
          v21[8].LowPart = *((_DWORD *)v3 + 4);
          v21[7] = KeQueryPerformanceCounter(0LL);
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v15 + 192), (PSLIST_ENTRY)v3);
        KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v15 + 216) + 8LL), 1, 0);
      }
      v3 = v13;
    }
    while ( v13 );
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
    if ( i[6] )
    {
      if ( *(_QWORD *)(i[2] + 16LL) )
        MmUnmapViewOfSection();
      i[6] = 0LL;
    }
    i[4] = 0LL;
    i[5] = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
}
