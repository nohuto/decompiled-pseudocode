/*
 * XREFs of ?SetPositionerPriority@CApplicationViewBase@@UEAAJPEAUIShellPositionerPriority@@@Z @ 0x1800646F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewBase::SetPositionerPriority(RTL_SRWLOCK *this, struct IShellPositionerPriority *a2)
{
  RTL_SRWLOCK *v2; // rdi
  struct IShellPositionerPriority *Ptr; // rcx

  v2 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  Ptr = (struct IShellPositionerPriority *)this[13].Ptr;
  if ( Ptr != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)a2 + 8LL))(a2);
      Ptr = (struct IShellPositionerPriority *)this[13].Ptr;
    }
    this[13].Ptr = a2;
    if ( Ptr )
      (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
