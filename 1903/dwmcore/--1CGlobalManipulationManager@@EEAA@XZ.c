/*
 * XREFs of ??1CGlobalManipulationManager@@EEAA@XZ @ 0x180237A00
 * Callers:
 *     ??_ECGlobalManipulationManager@@EEAAPEAXI@Z @ 0x180237DC0 (--_ECGlobalManipulationManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180188C10 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ?ShutDownManipulationThread@CManipulationManager@@IEAAXXZ @ 0x18022D234 (-ShutDownManipulationThread@CManipulationManager@@IEAAXXZ.c)
 *     ??1MCCollections@@QEAA@XZ @ 0x180237BF0 (--1MCCollections@@QEAA@XZ.c)
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180237D80 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall CGlobalManipulationManager::~CGlobalManipulationManager(CGlobalManipulationManager *this)
{
  void *v2; // rcx
  int v3; // ebx

  *(_QWORD *)this = &CGlobalManipulationManager::`vftable';
  CManipulationManager::ShutDownManipulationThread(this);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 43);
  v2 = (void *)*((_QWORD *)this + 41);
  if ( v2 )
  {
    v3 = 0;
    if ( *((int *)this + 84) > 0 )
    {
      do
        Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'(*((_QWORD *)this + 41) + 8LL * v3++);
      while ( v3 < *((_DWORD *)this + 84) );
      v2 = (void *)*((_QWORD *)this + 41);
    }
    operator delete(v2);
    *((_QWORD *)this + 41) = 0LL;
  }
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 85) = 0;
  MCCollections::~MCCollections((CGlobalManipulationManager *)((char *)this + 264));
  CMmcssTask::UnloadRuntime((CGlobalManipulationManager *)((char *)this + 184));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  CManipulationManager::~CManipulationManager(this);
}
