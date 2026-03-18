/*
 * XREFs of ??1CManipulationManager@@EEAA@XZ @ 0x1801E9BC0
 * Callers:
 *     ??_ECManipulationManager@@EEAAPEAXI@Z @ 0x1801E9EE0 (--_ECManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801521F4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ??1MCCollections@@QEAA@XZ @ 0x1801E9D9C (--1MCCollections@@QEAA@XZ.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@AEAAXXZ @ 0x1801ECCE8 (-ShutDownManipulationThread@CManipulationManager@@AEAAXXZ.c)
 */

void __fastcall CManipulationManager::~CManipulationManager(CManipulationManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  char *v6; // rbx
  __int64 v7; // rbp
  char *v8; // rcx
  __int64 v9; // rax
  void *v10; // rcx
  int v11; // ebx

  *(_QWORD *)this = &CManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  v2 = *((_QWORD *)this + 49);
  if ( v2 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 48);
  v3 = *((_QWORD *)this + 46);
  if ( v3 )
  {
    *((_QWORD *)this + 46) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 45);
  v4 = *((_QWORD *)this + 43);
  if ( v4 )
  {
    *((_QWORD *)this + 43) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 42);
  v5 = *((_QWORD *)this + 40);
  if ( v5 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 33);
  v6 = (char *)this + 200;
  do
  {
    v7 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
    v8 = *(char **)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v9 = *(_QWORD *)v8, *(char **)(*(_QWORD *)v8 + 8LL) != v8) )
      __fastfail(3u);
    *(_QWORD *)v6 = v9;
    *(_QWORD *)(v9 + 8) = v6;
    if ( v8 != v6 )
    {
      v7 = *((_QWORD *)v8 + 2);
      operator delete(v8);
      --*((_DWORD *)this + 54);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  }
  while ( v7 );
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v10 = (void *)*((_QWORD *)this + 23);
  if ( v10 )
  {
    v11 = 0;
    if ( *((int *)this + 48) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(*((_QWORD *)this + 23) + 8LL * v11++));
      while ( v11 < *((_DWORD *)this + 48) );
      v10 = (void *)*((_QWORD *)this + 23);
    }
    WPF::ProcessHeapImpl::Free(v10);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  MCCollections::~MCCollections((CManipulationManager *)((char *)this + 120));
  CMmcssTask::UnloadRuntime((CManipulationManager *)((char *)this + 40));
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 1);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
