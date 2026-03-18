/*
 * XREFs of ??0CGlobalSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x1800E07BC
 * Callers:
 *     ?Create@CGlobalSurfaceManager@@SAJPEAVCComposition@@PEAPEAVCSurfaceManager@@PEAPEAX2@Z @ 0x1800E01EC (-Create@CGlobalSurfaceManager@@SAJPEAVCComposition@@PEAPEAVCSurfaceManager@@PEAPEAX2@Z.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800E0EF0 (--0CMmcssTask@@QEAA@XZ.c)
 *     ??0CLegacySurfaceManager@@QEAA@XZ @ 0x1800E10C0 (--0CLegacySurfaceManager@@QEAA@XZ.c)
 */

CGlobalSurfaceManager *__fastcall CGlobalSurfaceManager::CGlobalSurfaceManager(
        CGlobalSurfaceManager *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 24),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  *((_QWORD *)this + 12) = a2;
  *(_QWORD *)this = &CSurfaceManager::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 2) = &CSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  CLegacySurfaceManager::CLegacySurfaceManager((CGlobalSurfaceManager *)((char *)this + 104));
  *(_QWORD *)this = &CGlobalSurfaceManager::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 2) = &CGlobalSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  *((_QWORD *)this + 13) = &CGlobalSurfaceManager::`vftable';
  CMmcssTask::CMmcssTask((CGlobalSurfaceManager *)((char *)this + 360));
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 11);
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 128) = 0;
  *((_QWORD *)this + 61) = (char *)this + 520;
  *((_QWORD *)this + 62) = (char *)this + 520;
  *((_DWORD *)this + 126) = 2;
  *((_DWORD *)this + 127) = 2;
  return this;
}
