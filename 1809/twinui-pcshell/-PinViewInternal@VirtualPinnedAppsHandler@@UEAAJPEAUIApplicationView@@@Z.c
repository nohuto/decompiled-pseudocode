/*
 * XREFs of ?PinViewInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180392360
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18039231C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::PinViewInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  const WCHAR *v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r14
  bool v7; // si
  const WCHAR *v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  LPCWCH lpString2; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  LPCWCH v16; // [rsp+80h] [rbp+30h]

  if ( !(*(unsigned int (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)this + 128LL))(this) )
  {
    lpString2 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
    v13 = -1LL;
    v14 = -1LL;
    if ( (*(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a2 + 136LL))(a2, &lpString2) < 0
      || (v4 = lpString2, v16 = lpString2, v5 = *((_QWORD *)this + 12), v6 = *((_QWORD *)this + 13), v5 == v6) )
    {
LABEL_10:
      v7 = 0;
    }
    else
    {
      v7 = 1;
      while ( 1 )
      {
        v8 = (const WCHAR *)v5;
        if ( *(_QWORD *)(v5 + 24) >= 8uLL )
          v8 = *(const WCHAR **)v5;
        if ( CompareStringOrdinal(v8, -1, v4, -1, 1) == 2 )
          break;
        v5 += 32LL;
        if ( v5 == v6 )
          goto LABEL_10;
        v4 = v16;
      }
    }
    v9 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, v7);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v9);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
      return v10;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  }
  return 0LL;
}
