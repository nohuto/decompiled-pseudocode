/*
 * XREFs of ?TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z @ 0x18038AC74
 * Callers:
 *     ?TabletModeChanged@VirtualDesktopTabletModePolicy@@UEAAJW4_TABLETMODESTATE@@PEAUIAppLayout@@@Z @ 0x18038AA70 (-TabletModeChanged@VirtualDesktopTabletModePolicy@@UEAAJW4_TABLETMODESTATE@@PEAUIAppLayout@@@Z.c)
 *     ?TabletModePositionerControlLost@VirtualDesktopTabletModePolicy@@UEAAJPEAUIAppLayout@@@Z @ 0x18038ABE0 (-TabletModePositionerControlLost@VirtualDesktopTabletModePolicy@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopTabletModePolicy::TransitionToDesktopMode(
        VirtualDesktopTabletModePolicy *this,
        struct IAppLayout *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v14[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v15; // [rsp+40h] [rbp-31h] BYREF
  __int64 v16; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v18[16]; // [rsp+68h] [rbp-9h] BYREF
  __int64 v19; // [rsp+78h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v17[1] = -2LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
  v4 = *((_QWORD *)this + 10);
  v16 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  if ( !a2 )
    goto LABEL_19;
  *(_QWORD *)v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  v5 = (*(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64))(*(_QWORD *)a2 + 136LL))(a2, 0LL, 1LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = 0LL;
    while ( (*(int (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)v14 + 24LL))(*(_QWORD *)v14, 1LL, v18) >= 0 )
    {
      v15 = 0LL;
      v9 = *((_QWORD *)this + 8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 80LL))(
             v9,
             v19,
             *((_QWORD *)this + 6),
             &v15) >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 184LL))(v19, v17);
        if ( v10 >= 0 )
        {
          if ( v17[0] > v8 )
          {
            v8 = v17[0];
            Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v16, &v15);
          }
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            100LL,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
            (const char *)(unsigned int)v10);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
    v5 = (*(__int64 (__fastcall **)(struct IAppLayout *, _QWORD, __int64))(*(_QWORD *)a2 + 136LL))(a2, 0LL, 1LL);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 111LL;
      goto LABEL_14;
    }
    v4 = v16;
    while ( (*(int (__fastcall **)(_QWORD, __int64, _BYTE *))(**(_QWORD **)v14 + 24LL))(*(_QWORD *)v14, 1LL, v18) >= 0 )
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 7) + 208LL))(
        *((_QWORD *)this + 7),
        v19,
        v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
LABEL_19:
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 296LL))(*((_QWORD *)this + 7), v4);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 248LL))(*((_QWORD *)this + 7), v4);
      v6 = v11;
      if ( v11 >= 0 )
        goto LABEL_24;
      v12 = 122LL;
    }
    else
    {
      v12 = 120LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_24;
  }
  v7 = 89LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
    (const char *)(unsigned int)v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
LABEL_24:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v6;
}
