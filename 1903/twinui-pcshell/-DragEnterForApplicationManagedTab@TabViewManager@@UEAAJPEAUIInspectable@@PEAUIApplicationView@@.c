/*
 * XREFs of ?DragEnterForApplicationManagedTab@TabViewManager@@UEAAJPEAUIInspectable@@PEAUIApplicationView@@@Z @ 0x18022E850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::DragEnterForApplicationManagedTab(
        TabViewManager *this,
        struct IInspectable *a2,
        struct IApplicationView *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IInspectable *, struct IApplicationView *))(**((_QWORD **)this + 156)
                                                                                             + 40LL))(
           *((_QWORD *)this + 156),
           a2,
           a3);
}
