/*
 * XREFs of ??0CLegacySurfaceManager@@QEAA@XZ @ 0x180088CB4
 * Callers:
 *     ??0CSurfaceManager@@IEAA@PEAVCComposition@@@Z @ 0x180088D64 (--0CSurfaceManager@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CLegacySurfaceManager *__fastcall CLegacySurfaceManager::CLegacySurfaceManager(CLegacySurfaceManager *this)
{
  CLegacySurfaceManager *result; // rax

  *(_QWORD *)this = &CLogicalSurfaceHandleMap::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 8),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<unsigned __int64,CWindowManager::SPRITEENTRY>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *(_QWORD *)this = &CLegacySurfaceManager::`vftable';
  result = this;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  return result;
}
