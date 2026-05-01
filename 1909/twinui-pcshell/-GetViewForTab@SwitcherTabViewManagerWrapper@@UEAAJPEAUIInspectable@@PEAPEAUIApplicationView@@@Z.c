/*
 * XREFs of ?GetViewForTab@SwitcherTabViewManagerWrapper@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z @ 0x1802E8D90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitcherTabViewManagerWrapper::GetViewForTab(
        SwitcherTabViewManagerWrapper *this,
        struct IInspectable *a2,
        struct IApplicationView **a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IInspectable *, struct IApplicationView **))(**((_QWORD **)this + 4)
                                                                                              + 24LL))(
           *((_QWORD *)this + 4),
           a2,
           a3);
}
