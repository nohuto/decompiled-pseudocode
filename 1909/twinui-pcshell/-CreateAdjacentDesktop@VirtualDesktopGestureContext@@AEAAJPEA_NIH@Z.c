/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x180413F24
 * Callers:
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x180416578 (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x180414010 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 */

__int64 __fastcall VirtualDesktopGestureContext::CreateAdjacentDesktop(
        VirtualDesktopGestureContext *this,
        bool *a2,
        unsigned int a3,
        int a4)
{
  VirtualDesktopGestureWindow **v5; // rbx
  VirtualDesktopGestureWindow **v8; // rsi
  VirtualDesktopGestureWindow *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  int v13[4]; // [rsp+20h] [rbp-38h]
  struct tagRECT v14; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0;
  v5 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 9);
  v8 = &v5[*((_QWORD *)this + 10)];
  if ( v5 == v8 )
    return 0LL;
  v13[1] = 0;
  while ( 1 )
  {
    v9 = *v5;
    v13[0] = a4 * (*((_DWORD *)*v5 + 44) - *((_DWORD *)*v5 + 42));
    v13[2] = *((_DWORD *)*v5 + 44) - *((_DWORD *)*v5 + 42) + v13[0];
    v13[3] = *((_DWORD *)*v5 + 45) - *((_DWORD *)*v5 + 43);
    v14 = *(struct tagRECT *)v13;
    v10 = VirtualDesktopGestureWindow::CreateAdjacentDesktop(v9, a2, a3, &v14);
    v11 = v10;
    if ( v10 < 0 )
      break;
    if ( ++v5 == v8 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12D,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v10);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29A,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)v11);
  return v11;
}
