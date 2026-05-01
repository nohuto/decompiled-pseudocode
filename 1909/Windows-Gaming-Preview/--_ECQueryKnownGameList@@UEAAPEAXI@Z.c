/*
 * XREFs of ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18003DB20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800438AC (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CQueryKnownGameList::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx
  ULONG_PTR SpinCount; // rcx
  HANDLE LockSemaphore; // rcx
  char *v7; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CQueryKnownGameList::`vftable';
  DeleteCriticalSection(this + 19);
  SpinCount = this[18].SpinCount;
  if ( SpinCount )
  {
    this[18].SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  LockSemaphore = this[18].LockSemaphore;
  if ( LockSemaphore )
    operator delete(LockSemaphore, v4);
  v7 = (char *)this->LockSemaphore;
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v7);
  operator delete(this->OwningThread, v4);
  this->RecursionCount = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
