/*
 * XREFs of ?Release@ResourceManagerServerProxy@@UEAAKXZ @ 0x1800552D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Release(ResourceManagerServerProxy *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(ResourceManagerServerProxy *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return v1;
}
