/*
 * XREFs of ?GetDesktopsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1803EC090
 * Callers:
 *     ?GetDesktops@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z @ 0x1803EC000 (-GetDesktops@CVirtualDesktopManager@@UEAAJPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetDesktopsInternal(CVirtualDesktopManager *this, struct IObjectArray **a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, struct IObjectArray **))(**((_QWORD **)this + 9) + 40LL))(
         *((_QWORD *)this + 9),
         &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
         a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
