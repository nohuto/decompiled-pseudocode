/*
 * XREFs of ?VirtualDesktopCreated@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180354AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x180354D1C (-_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z.c)
 */

__int64 __fastcall VirtualDesktopItemCollection::VirtualDesktopCreated(
        VirtualDesktopItemCollection *this,
        struct IVirtualDesktop *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = VirtualDesktopItemCollection::_AddDesktopItem(
         (VirtualDesktopItemCollection *)((char *)this - 144),
         a2,
         *((_QWORD *)this - 15),
         0);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
