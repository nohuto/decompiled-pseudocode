/*
 * XREFs of ?ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x18007D740
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x18039231C (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualPinnedAppsHandler::ViewAppIdChangedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  const WCHAR *v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // ebx
  const WCHAR *v9; // rcx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  LPCWCH lpString2; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  LPCWCH v18; // [rsp+88h] [rbp+38h] BYREF
  __int64 v19; // [rsp+90h] [rbp+40h] BYREF

  lpString2 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  v15 = -1LL;
  v16 = -1LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a2 + 136LL))(a2, &lpString2) < 0
    || (v4 = lpString2, v18 = lpString2, v5 = *((_QWORD *)this + 12), v6 = *((_QWORD *)this + 13), v5 == v6) )
  {
LABEL_3:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, LPCWCH *))(**((_QWORD **)this + 8) + 120LL))(
           *((_QWORD *)this + 8),
           a2,
           &v18)
      && (_BYTE)v18 )
    {
      v19 = 0LL;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 288LL))(*((_QWORD *)this + 6)) )
      {
        v11 = *((_QWORD *)this + 6);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 224LL))(v11, &v19);
        v7 = v12;
        if ( v12 < 0 )
        {
          v13 = 320LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v12);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
          goto LABEL_5;
        }
      }
      v12 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, __int64))(*(_QWORD *)this + 104LL))(
              this,
              a2,
              v19);
      v7 = v12;
      if ( v12 < 0 )
      {
        v13 = 322LL;
        goto LABEL_19;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    }
  }
  else
  {
    while ( 1 )
    {
      v9 = (const WCHAR *)v5;
      if ( *(_QWORD *)(v5 + 24) >= 8uLL )
        v9 = *(const WCHAR **)v5;
      if ( CompareStringOrdinal(v9, -1, v4, -1, 1) == 2 )
        break;
      v5 += 32LL;
      if ( v5 == v6 )
        goto LABEL_3;
      v4 = v18;
    }
    v10 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, 1);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x135,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_5;
    }
  }
  v7 = 0;
LABEL_5:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  return v7;
}
