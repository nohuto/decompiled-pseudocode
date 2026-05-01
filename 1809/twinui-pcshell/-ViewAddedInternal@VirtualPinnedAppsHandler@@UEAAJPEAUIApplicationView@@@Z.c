/*
 * XREFs of ?ViewAddedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x18006E080
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18039231C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::ViewAddedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const WCHAR *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v10; // rdx
  const WCHAR *v11; // rcx
  LPVOID pv[3]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  const WCHAR *v14; // [rsp+78h] [rbp+10h]

  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPVOID *))(*(_QWORD *)a2 + 136LL))(a2, pv);
  v5 = v4;
  if ( v4 == -2147023728 )
    goto LABEL_4;
  if ( v4 >= 0 )
  {
    v6 = (const WCHAR *)pv[0];
    v14 = (const WCHAR *)pv[0];
    v7 = *((_QWORD *)this + 12);
    v8 = *((_QWORD *)this + 13);
    if ( v7 != v8 )
    {
      while ( 1 )
      {
        v11 = (const WCHAR *)v7;
        if ( *(_QWORD *)(v7 + 24) >= 8uLL )
          v11 = *(const WCHAR **)v7;
        if ( CompareStringOrdinal(v11, -1, v6, -1, 1) == 2 )
          break;
        v7 += 32LL;
        if ( v7 == v8 )
          goto LABEL_4;
        v6 = v14;
      }
      v4 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, 1);
      v5 = v4;
      if ( v4 < 0 )
      {
        v10 = 299LL;
        goto LABEL_16;
      }
    }
LABEL_4:
    v5 = 0;
    goto LABEL_5;
  }
  v10 = 295LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
    (const char *)(unsigned int)v4);
LABEL_5:
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v5;
}
