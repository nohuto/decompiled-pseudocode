/*
 * XREFs of ??0CGlobalManipulationManager@@AEAA@PEAVCComposition@@@Z @ 0x1800E0C2C
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x1800E1210 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800C1A14 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800E0EF0 (--0CMmcssTask@@QEAA@XZ.c)
 */

CGlobalManipulationManager *__fastcall CGlobalManipulationManager::CGlobalManipulationManager(
        CGlobalManipulationManager *this,
        struct CComposition *a2)
{
  char *v3; // rcx
  __int64 v4; // rdx
  CGlobalManipulationManager *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CManipulationManager::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v3 = (char *)this + 104;
  *((_DWORD *)v3 + 4) = 0;
  v3[20] = 0;
  *((_QWORD *)v3 + 1) = v3;
  *(_QWORD *)v3 = v3;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v3 + 24));
  *(_QWORD *)this = &CGlobalManipulationManager::`vftable';
  CMmcssTask::CMmcssTask((CGlobalManipulationManager *)((char *)this + 184));
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  QpcTimeConverter::QpcTimeConverter((CGlobalManipulationManager *)((char *)this + 384));
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  v4 = ((unsigned __int64)(2000 * g_qpcFrequency.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  result = this;
  *((_QWORD *)this + 47) = (v4 + ((unsigned __int64)(2000 * g_qpcFrequency.QuadPart - v4) >> 1)) >> 9;
  return result;
}
