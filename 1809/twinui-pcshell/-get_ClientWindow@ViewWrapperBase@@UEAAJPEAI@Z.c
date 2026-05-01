/*
 * XREFs of ?get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z @ 0x180246020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::get_ClientWindow(ViewWrapperBase *this, unsigned int *a2)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int v5; // eax
  unsigned int v6; // ebx

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 17) + 296LL);
  AcquireSRWLockShared(v4);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 3) + 728LL))((char *)this - 24);
  *a2 = v5;
  v6 = v5 == 0 ? 0x80070490 : 0;
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v6;
}
