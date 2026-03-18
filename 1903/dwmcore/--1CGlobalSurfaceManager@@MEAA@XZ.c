/*
 * XREFs of ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x18019C10C
 * Callers:
 *     ??_GCGlobalSurfaceManager@@MEAAPEAXI@Z @ 0x18019C330 (--_GCGlobalSurfaceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseAdapterInfo@CGlobalSurfaceManager@@AEAAXXZ @ 0x1800D3CC4 (-ReleaseAdapterInfo@CGlobalSurfaceManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180188C10 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18019C254 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

void __fastcall CGlobalSurfaceManager::~CGlobalSurfaceManager(struct _RTL_CRITICAL_SECTION *this)
{
  bool v1; // zf
  HANDLE LockSemaphore; // rcx
  const void *v4; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  HANDLE v6; // rcx
  void *SpinCount; // rcx
  PRTL_CRITICAL_SECTION_DEBUG v8; // rcx

  v1 = this[8].OwningThread == 0LL;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CGlobalSurfaceManager::`vftable'{for `CMILRefCountBase'};
  LOBYTE(this[8].SpinCount) = 1;
  this->OwningThread = &CGlobalSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  this[2].LockSemaphore = &CGlobalSurfaceManager::`vftable';
  if ( !v1 )
  {
    SetEvent(this[8].LockSemaphore);
    WaitForSingleObject(this[8].OwningThread, 0xFFFFFFFF);
    CloseHandle(this[8].OwningThread);
    this[8].OwningThread = 0LL;
  }
  LockSemaphore = this[8].LockSemaphore;
  if ( LockSemaphore )
    CloseHandle(LockSemaphore);
  CGlobalSurfaceManager::ReleaseAdapterInfo((CGlobalSurfaceManager *)this);
  v4 = *(const void **)&this[14].LockCount;
  if ( v4 )
    UnmapViewOfFile(v4);
  DebugInfo = this[14].DebugInfo;
  if ( DebugInfo )
    CloseHandle(DebugInfo);
  v6 = this[14].LockSemaphore;
  if ( v6 )
    CloseHandle(v6);
  SpinCount = (void *)this[14].SpinCount;
  if ( SpinCount )
    CloseHandle(SpinCount);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&this[12].LockCount);
  v8 = this[12].DebugInfo;
  if ( v8 )
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&v8->Type + 8LL))(v8);
  DeleteCriticalSection(this + 11);
  CMmcssTask::UnloadRuntime((CMmcssTask *)&this[9]);
  DeleteCriticalSection(this + 9);
  CLegacySurfaceManager::~CLegacySurfaceManager((CLegacySurfaceManager *)&this[2].LockSemaphore);
  CSurfaceManager::~CSurfaceManager((CSurfaceManager *)this);
}
