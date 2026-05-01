/*
 * XREFs of ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18007BA50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetCurrentDesktopInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop **a2)
{
  struct IVirtualDesktop *v4; // rcx
  __int64 result; // rax

  v4 = (struct IVirtualDesktop *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IVirtualDesktop *)*((_QWORD *)this + 17);
  }
  result = 0LL;
  *a2 = v4;
  return result;
}
