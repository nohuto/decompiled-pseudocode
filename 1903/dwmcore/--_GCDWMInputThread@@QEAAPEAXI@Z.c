/*
 * XREFs of ??_GCDWMInputThread@@QEAAPEAXI@Z @ 0x1802373B8
 * Callers:
 *     ??1CGlobalInputManager@@MEAA@XZ @ 0x180237228 (--1CGlobalInputManager@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180188C10 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ?Stop@CMit@@QEAAXXZ @ 0x18023B92C (-Stop@CMit@@QEAAXXZ.c)
 */

CDWMInputThread *__fastcall CDWMInputThread::`scalar deleting destructor'(CDWMInputThread *this)
{
  void *v2; // rcx
  void *v3; // rcx

  CMit::Stop(this);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 != (void *)-1LL )
    CloseHandle(v2);
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 != (void *)-1LL )
    CloseHandle(v3);
  *(_QWORD *)this = 0LL;
  CMmcssTask::UnloadRuntime((CDWMInputThread *)((char *)this + 32));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  operator delete(this);
  return this;
}
