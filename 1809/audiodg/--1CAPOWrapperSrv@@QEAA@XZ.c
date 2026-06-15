/*
 * XREFs of ??1CAPOWrapperSrv@@QEAA@XZ @ 0x140044B48
 * Callers:
 *     _ATL::CComCreator_ATL::CComObject_CAPOWrapperSrv___::CreateInstance_::_1_::dtor$1 @ 0x14001FB50 (_ATL--CComCreator_ATL--CComObject_CAPOWrapperSrv___--CreateInstance_--_1_--dtor$1.c)
 *     ??1?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ @ 0x140044788 (--1-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@QEAA@XZ @ 0x1400447D4 (--1-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAPOWrapperSrv::~CAPOWrapperSrv(struct _RTL_CRITICAL_SECTION *this)
{
  char *LockSemaphore; // rcx
  HANDLE OwningThread; // rcx
  __int64 v4; // rcx

  LockSemaphore = (char *)this[2].LockSemaphore;
  if ( (unsigned __int64)(LockSemaphore - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(LockSemaphore);
    this[2].LockSemaphore = 0LL;
  }
  OwningThread = this[2].OwningThread;
  if ( OwningThread )
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  v4 = *(_QWORD *)&this[2].LockCount;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( LOBYTE(this[2].DebugInfo) )
  {
    LOBYTE(this[2].DebugInfo) = 0;
    DeleteCriticalSection(this + 1);
  }
}
