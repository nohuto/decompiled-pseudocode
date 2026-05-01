/*
 * XREFs of ?PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180392530
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18039249C (-PinViewNoGroupPropagateInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualPinnedAppsHandler::PinViewNoGroupPropagateInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  const WCHAR *v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r14
  const WCHAR *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  LPCWCH lpString2; // [rsp+38h] [rbp-18h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  LPCWCH v15; // [rsp+80h] [rbp+30h]

  if ( !(*(unsigned int (__fastcall **)(VirtualPinnedAppsHandler *))(*(_QWORD *)this + 128LL))(this) )
  {
    lpString2 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
    v12 = -1LL;
    v13 = -1LL;
    if ( (*(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a2 + 136LL))(a2, &lpString2) >= 0 )
    {
      v4 = lpString2;
      v15 = lpString2;
      v5 = *((_QWORD *)this + 12);
      v6 = *((_QWORD *)this + 13);
      if ( v5 != v6 )
      {
        while ( 1 )
        {
          v7 = (const WCHAR *)v5;
          if ( *(_QWORD *)(v5 + 24) >= 8uLL )
            v7 = *(const WCHAR **)v5;
          if ( CompareStringOrdinal(v7, -1, v4, -1, 1) == 2 )
            break;
          v5 += 32LL;
          if ( v5 == v6 )
            break;
          v4 = v15;
        }
      }
    }
    v8 = VirtualPinnedAppsHandler::PinViewNoGroupPropagateInternal(this, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v8);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
      return v9;
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  }
  return 0LL;
}
