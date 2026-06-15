/*
 * XREFs of ??_GCAudioDGProcess@@QEAAPEAXI@Z @ 0x1800BE8B4
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800C1920 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004DDDC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioDGProcess *__fastcall CAudioDGProcess::`scalar deleting destructor'(CAudioDGProcess *this, void *a2)
{
  wil::details *v3; // rcx
  wil::details *v4; // rcx
  char *v5; // rcx

  v3 = (wil::details *)*((_QWORD *)this + 15);
  if ( v3 )
    wil::details::CloseHandle(v3, a2);
  v4 = (wil::details *)*((_QWORD *)this + 14);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  v5 = (char *)*((_QWORD *)this + 11);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
