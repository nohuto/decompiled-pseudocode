/*
 * XREFs of ?ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x1800730C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1803F8210 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::ViewAddedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  const WCHAR *v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v11; // rdx
  const WCHAR *v12; // rcx
  LPVOID pv[3]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  const WCHAR *v15; // [rsp+78h] [rbp+10h]

  pv[0] = 0LL;
  v4 = *(_QWORD *)a2;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(v4 + 136))(a2, pv);
  v6 = v5;
  if ( v5 == -2147023728 )
    goto LABEL_4;
  if ( v5 >= 0 )
  {
    v7 = (const WCHAR *)pv[0];
    v15 = (const WCHAR *)pv[0];
    v8 = *((_QWORD *)this + 12);
    v9 = *((_QWORD *)this + 13);
    if ( v8 != v9 )
    {
      while ( 1 )
      {
        v12 = (const WCHAR *)v8;
        if ( *(_QWORD *)(v8 + 24) >= 8uLL )
          v12 = *(const WCHAR **)v8;
        if ( CompareStringOrdinal(v12, -1, v7, -1, 1) == 2 )
          break;
        v8 += 32LL;
        if ( v8 == v9 )
          goto LABEL_4;
        v7 = v15;
      }
      v5 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, 1);
      v6 = v5;
      if ( v5 < 0 )
      {
        v11 = 299LL;
        goto LABEL_16;
      }
    }
LABEL_4:
    v6 = 0;
    goto LABEL_5;
  }
  v11 = 295LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
    (const char *)(unsigned int)v5);
LABEL_5:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v6;
}
