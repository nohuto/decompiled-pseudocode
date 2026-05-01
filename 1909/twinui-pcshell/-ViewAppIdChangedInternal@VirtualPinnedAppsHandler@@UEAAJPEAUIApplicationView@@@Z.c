/*
 * XREFs of ?ViewAppIdChangedInternal@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180082980
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180034EE0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180417920 (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualPinnedAppsHandler::ViewAppIdChangedInternal(
        VirtualPinnedAppsHandler *this,
        struct IApplicationView *a2)
{
  int (__fastcall *v4)(struct IApplicationView *, LPCWCH *); // rbx
  const WCHAR *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  const WCHAR *v10; // rcx
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rdx
  LPCWCH lpString2; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  __int64 v18; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  LPCWCH v20; // [rsp+88h] [rbp+38h] BYREF
  __int64 v21; // [rsp+90h] [rbp+40h] BYREF

  lpString2 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v4 = *(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  v17 = -1LL;
  v18 = -1LL;
  if ( v4(a2, &lpString2) < 0
    || (v5 = lpString2, v20 = lpString2, v6 = *((_QWORD *)this + 12), v7 = *((_QWORD *)this + 13), v6 == v7) )
  {
LABEL_3:
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, LPCWCH *))(**((_QWORD **)this + 8) + 120LL))(
           *((_QWORD *)this + 8),
           a2,
           &v20)
      && (_BYTE)v20 )
    {
      v21 = 0LL;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 288LL))(*((_QWORD *)this + 6)) )
      {
        v12 = *((_QWORD *)this + 6);
        v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 224LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
        v14 = v13(v12, &v21);
        v8 = v14;
        if ( v14 < 0 )
        {
          v15 = 320LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
            (const char *)(unsigned int)v14);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
          goto LABEL_5;
        }
      }
      v14 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, struct IApplicationView *, __int64))(*(_QWORD *)this + 104LL))(
              this,
              a2,
              v21);
      v8 = v14;
      if ( v14 < 0 )
      {
        v15 = 322LL;
        goto LABEL_19;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    }
  }
  else
  {
    while ( 1 )
    {
      v10 = (const WCHAR *)v6;
      if ( *(_QWORD *)(v6 + 24) >= 8uLL )
        v10 = *(const WCHAR **)v6;
      if ( CompareStringOrdinal(v10, -1, v5, -1, 1) == 2 )
        break;
      v6 += 32LL;
      if ( v6 == v7 )
        goto LABEL_3;
      v5 = v20;
    }
    v11 = VirtualPinnedAppsHandler::PinViewInternal(this, a2, 1);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x135,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_5;
    }
  }
  v8 = 0;
LABEL_5:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString2);
  return v8;
}
