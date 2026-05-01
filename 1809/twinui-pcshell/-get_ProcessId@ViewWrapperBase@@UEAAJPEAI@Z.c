/*
 * XREFs of ?get_ProcessId@ViewWrapperBase@@UEAAJPEAI@Z @ 0x180246710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_ProcessId(ViewWrapperBase *this, unsigned int *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 20) + 296LL);
  AcquireSRWLockShared(v4);
  *a2 = (*(__int64 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)this + 744LL))(this);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return 0LL;
}
