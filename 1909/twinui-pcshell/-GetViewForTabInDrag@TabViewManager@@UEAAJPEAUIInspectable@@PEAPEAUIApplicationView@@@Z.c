/*
 * XREFs of ?GetViewForTabInDrag@TabViewManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z @ 0x180250670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabViewManager::GetViewForTabInDrag(
        TabViewManager *this,
        struct IInspectable *a2,
        struct IApplicationView **a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IInspectable *, struct IApplicationView **))(**((_QWORD **)this + 156)
                                                                                              + 32LL))(
           *((_QWORD *)this + 156),
           a2,
           a3);
}
