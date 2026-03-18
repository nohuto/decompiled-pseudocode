/*
 * XREFs of ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x180088D64
 * Callers:
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x180088A8C (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 * Callees:
 *     ??0CLegacySurfaceManager@@QEAA@XZ @ 0x180088CB4 (--0CLegacySurfaceManager@@QEAA@XZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800899A8 (--0CMmcssTask@@QEAA@XZ.c)
 */

CSurfaceManager *__fastcall CSurfaceManager::CSurfaceManager(CSurfaceManager *this, struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 24),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  CLegacySurfaceManager::CLegacySurfaceManager((CSurfaceManager *)((char *)this + 96));
  *((_QWORD *)this + 41) = a2;
  *(_QWORD *)this = &CSurfaceManager::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 2) = &CSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  *((_QWORD *)this + 12) = &CSurfaceManager::`vftable'{for `CLegacySurfaceManager'};
  CMmcssTask::CMmcssTask((CSurfaceManager *)((char *)this + 360));
  *((_DWORD *)this + 116) = 0;
  *((_QWORD *)this + 55) = (char *)this + 472;
  *((_QWORD *)this + 56) = (char *)this + 472;
  *((_DWORD *)this + 114) = 2;
  *((_DWORD *)this + 115) = 2;
  return this;
}
