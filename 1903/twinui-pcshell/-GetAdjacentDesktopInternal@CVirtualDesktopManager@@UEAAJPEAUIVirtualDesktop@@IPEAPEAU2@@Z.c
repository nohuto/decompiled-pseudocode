/*
 * XREFs of ?GetAdjacentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x1803EBA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetAdjacentDesktopInternal(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        __int64 a3,
        struct IVirtualDesktop **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, __int64, GUID *, struct IVirtualDesktop **))(**((_QWORD **)this + 9) + 72LL))(
           *((_QWORD *)this + 9),
           a2,
           a3,
           &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4,
           a4);
}
