/*
 * XREFs of ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180039B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILRefCountBase::Release(CMILRefCountBase *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CMILRefCountBase *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
  return v1;
}
