/*
 * XREFs of ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C005A310
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C005A170 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C000FB98 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C005A13C (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C005A6D8 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z @ 0x1C006D16C (-ReleaseHandle@CLinearObjectTableBase@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ii @ 0x1C0167D98 (McTemplateK0ii.c)
 */

void __fastcall DirectComposition::CConnection::ConfirmFrame(DirectComposition::CConnection *this)
{
  struct _ERESOURCE *v1; // rbx
  __int64 v3; // r8
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _ERESOURCE *v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *i; // rbx
  __int64 v14; // rdx
  unsigned int v15; // edx
  char v16; // al
  __int64 v17; // r12
  void *v18; // rcx
  __int64 v19; // r15
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rsi
  unsigned int v23; // edi
  struct _ERESOURCE *v24; // rbx
  LARGE_INTEGER *v25; // rbx
  __int64 v26; // rcx

  v1 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v1, 1u);
  v4 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v4 )
  {
    do
    {
      v15 = *(_DWORD *)(v4 + 112);
      v16 = *(_BYTE *)(v4 + 32) & 0xFD;
      v17 = *(_QWORD *)v4;
      *(_BYTE *)(v4 + 32) = v16;
      if ( v15 )
      {
        DirectComposition::CConnection::ReleaseShellResourceAccess(
          *(DirectComposition::CConnection **)(*(_QWORD *)(v4 + 8) + 40LL),
          v15);
        v16 = *(_BYTE *)(v4 + 32);
        *(_DWORD *)(v4 + 112) = 0;
      }
      if ( (v16 & 4) == 0 )
        DirectComposition::CApplicationChannel::NotifyBatchProcessed(
          *(DirectComposition::CApplicationChannel **)(v4 + 8),
          (struct DirectComposition::CBatch *)v4);
      v18 = *(void **)(v4 + 96);
      v19 = *(_QWORD *)(v4 + 8);
      if ( v18 )
        ObfDereferenceObject(v18);
      *(_BYTE *)(v4 + 32) &= ~0x10u;
      v20 = *(_DWORD *)(v4 + 20) == 6;
      *(_QWORD *)(v4 + 96) = 0LL;
      if ( v20 )
      {
        v22 = *(_QWORD *)(v19 + 40);
        v23 = *(_DWORD *)(v19 + 28);
        v24 = *(struct _ERESOURCE **)(v22 + 16);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v24, 1u);
        DirectComposition::CLinearObjectTableBase::ReleaseHandle(
          (DirectComposition::CLinearObjectTableBase *)(v22 + 24),
          v23);
        ExReleaseResourceLite(*(PERESOURCE *)(v22 + 16));
        KeLeaveCriticalRegion();
        Win32FreePool(v4);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, 1LL);
      }
      else
      {
        v21 = *(_QWORD *)(v19 + 360);
        *(_DWORD *)(v19 + 380) = *(_DWORD *)(v4 + 16);
        if ( v21 && !*(_QWORD *)(v19 + 368) )
          KeSetEvent(*(PRKEVENT *)(v21 + 8), 1, 0);
        if ( (*(_BYTE *)(v4 + 32) & 8) != 0 )
          *(_BYTE *)(v19 + 240) &= ~0x80u;
        if ( (*(_BYTE *)(v19 + 241) & 0x10) != 0 )
        {
          v25 = *(LARGE_INTEGER **)(v19 + 720);
          v25[9].LowPart = *(_DWORD *)(v4 + 16);
          v25[8] = KeQueryPerformanceCounter(0LL);
        }
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v19 + 192), (PSLIST_ENTRY)v4);
        KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v19 + 216) + 8LL), 1, 0);
      }
      v4 = v17;
    }
    while ( v17 );
  }
  v5 = *((int *)this + 65);
  v6 = (unsigned int)(*((_DWORD *)this + 64) - v5);
  *((_DWORD *)this + 64) = v6;
  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
    McTemplateK0ii(v6, v5, v3, (int)v6, v5);
  v7 = (struct _ERESOURCE *)*((_QWORD *)this + 2);
  v8 = 0LL;
  *((_DWORD *)this + 65) = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v7, 1u);
  while ( 1 )
  {
    v9 = *((_QWORD *)this + 6);
    v10 = v8;
    if ( v8 < v9 )
    {
      v11 = (_QWORD *)(*((_QWORD *)this + 3) + v8 * *((_QWORD *)this + 7));
      do
      {
        if ( *v11 )
          break;
        ++v10;
        v11 = (_QWORD *)((char *)v11 + *((_QWORD *)this + 7));
      }
      while ( v10 < v9 );
    }
    if ( v10 >= v9 )
      break;
    _mm_lfence();
    v8 = v10 + 1;
    v12 = *(_QWORD *)(v10 * *((_QWORD *)this + 7) + *((_QWORD *)this + 3));
    if ( !v12 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  for ( i = (_QWORD *)*((_QWORD *)this + 24); i != (_QWORD *)((char *)this + 192); i = (_QWORD *)*i )
  {
    v14 = i[6];
    if ( v14 )
    {
      v26 = *(_QWORD *)(i[2] + 16LL);
      if ( v26 )
        MmUnmapViewOfSection(v26, v14);
      i[6] = 0LL;
    }
    i[4] = 0LL;
    i[5] = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
}
