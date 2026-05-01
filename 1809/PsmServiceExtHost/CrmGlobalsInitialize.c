/*
 * XREFs of CrmGlobalsInitialize @ 0x1800418B4
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800415FC (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

__int64 *CrmGlobalsInitialize()
{
  __int64 *result; // rax

  memset_0(CrmGlobals, 0, 0x170uLL);
  RtlInitializeSRWLock(&unk_18009BC58);
  dword_18009BC60 = 0;
  xmmword_18009BC68 = 0LL;
  CrmGlobals[0] = 0LL;
  qword_18009BB68 = 0LL;
  RtlInitializeSRWLock(CrmGlobals);
  LODWORD(qword_18009BB68) = 0;
  qword_18009BC78 = 0LL;
  qword_18009BC80 = 0LL;
  RtlInitializeSRWLock(&qword_18009BC78);
  LODWORD(qword_18009BC80) = 0;
  result = &qword_18009BC88;
  qword_18009BC90 = (__int64)&qword_18009BC88;
  qword_18009BC88 = (__int64)&qword_18009BC88;
  return result;
}
