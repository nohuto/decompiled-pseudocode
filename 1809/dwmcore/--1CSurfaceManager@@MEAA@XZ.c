/*
 * XREFs of ??1CSurfaceManager@@MEAA@XZ @ 0x180152DCC
 * Callers:
 *     ??_ECSurfaceManager@@MEAAPEAXI@Z @ 0x1801530A0 (--_ECSurfaceManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x18008AC60 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801521F4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180152CF8 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

void __fastcall CSurfaceManager::~CSurfaceManager(struct _RTL_CRITICAL_SECTION *this)
{
  bool v2; // zf
  HANDLE LockSemaphore; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  void *SpinCount; // rcx
  HANDLE OwningThread; // rcx
  HANDLE v7; // rcx
  struct _RTL_GENERIC_TABLE *p_LockSemaphore; // rdi
  PVOID v9; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CSurfaceManager::`vftable'{for `CMILRefCountBase'};
  this->OwningThread = &CSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  this[2].OwningThread = &CSurfaceManager::`vftable'{for `CLegacySurfaceManager'};
  qword_180308A80 = 0LL;
  qword_180308270 = 0LL;
  v2 = this[8].OwningThread == 0LL;
  LOBYTE(this[8].SpinCount) = 1;
  if ( !v2 )
  {
    SetEvent(this[8].LockSemaphore);
    WaitForSingleObject(this[8].OwningThread, 0xFFFFFFFF);
    CloseHandle(this[8].OwningThread);
    this[8].OwningThread = 0LL;
  }
  LockSemaphore = this[8].LockSemaphore;
  if ( LockSemaphore )
    CloseHandle(LockSemaphore);
  CSurfaceManager::ReleaseAdapterInfo((CSurfaceManager *)this);
  DebugInfo = this[13].DebugInfo;
  if ( DebugInfo )
    UnmapViewOfFile(DebugInfo);
  SpinCount = (void *)this[12].SpinCount;
  if ( SpinCount )
    CloseHandle(SpinCount);
  OwningThread = this[13].OwningThread;
  if ( OwningThread )
    CloseHandle(OwningThread);
  v7 = this[13].LockSemaphore;
  if ( v7 )
    CloseHandle(v7);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&this[11].DebugInfo);
  CMmcssTask::UnloadRuntime((CMmcssTask *)&this[9]);
  DeleteCriticalSection(this + 9);
  CLegacySurfaceManager::~CLegacySurfaceManager(&this[2].OwningThread);
  this->OwningThread = &CCompositionSurfaceManager::`vftable';
  p_LockSemaphore = (struct _RTL_GENERIC_TABLE *)&this->LockSemaphore;
  while ( 1 )
  {
    RestartKey = 0LL;
    v9 = RtlEnumerateGenericTableWithoutSplaying(p_LockSemaphore, &RestartKey);
    if ( !v9 )
      break;
    if ( !RtlDeleteElementGenericTable(p_LockSemaphore, v9) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
}
