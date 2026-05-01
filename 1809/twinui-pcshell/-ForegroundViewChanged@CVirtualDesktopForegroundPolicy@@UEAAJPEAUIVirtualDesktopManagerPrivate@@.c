/*
 * XREFs of ?ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIApplicationView@@@Z @ 0x18006D640
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtualDesktop@@@Z @ 0x180384B0C (-_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopForegroundPolicy::ForegroundViewChanged(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopSwitchAnimator *a3,
        struct IApplicationView *a4)
{
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // edi
  int DesktopForView; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // edi
  int v17; // [rsp+20h] [rbp-30h]
  struct IVirtualDesktop *v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  struct IUnknown *v20[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v22; // [rsp+80h] [rbp+30h] BYREF

  v20[1] = (struct IUnknown *)-2LL;
  v8 = *((_QWORD *)this + 5);
  v9 = 0;
  if ( !v8 )
  {
    v9 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)0x80010108LL);
    return v9;
  }
  v20[0] = 0LL;
  if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v8 + 72LL))(v8, v20) < 0
    || (unsigned int)SHIsSameObject((struct IUnknown *)a4, v20[0]) )
  {
    v19 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerPrivate *, __int64 *))(*(_QWORD *)a2 + 224LL))(
            a2,
            &v19);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
        (const char *)(unsigned int)v10);
    }
    else
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 3)
                                                                                          + 24LL))(
              *((_QWORD *)this + 3),
              a4,
              v19) )
      {
        v18 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
        DesktopForView = CVirtualDesktopForegroundPolicy::_FindDesktopForView(this, a4, &v18);
        if ( DesktopForView >= 0 )
        {
          v22 = 3;
          v14 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerPrivate *, __int64, struct IVirtualDesktop *, int *))(*(_QWORD *)a2 + 272LL))(
                  a2,
                  v19,
                  v18,
                  &v22);
          if ( v14 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xA7,
              (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
              (const char *)(unsigned int)v14,
              v17);
          v15 = (*(__int64 (__fastcall **)(struct IVirtualDesktopSwitchAnimator *, struct IVirtualDesktop *, bool))(*(_QWORD *)a3 + 24LL))(
                  a3,
                  v18,
                  v22 != 3);
          v16 = v15;
          if ( v15 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA8,
              (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
              (const char *)(unsigned int)v15);
          v9 = v16;
        }
        else
        {
          v9 = DesktopForView;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
        goto LABEL_8;
      }
      v11 = 0;
    }
    v9 = v11;
LABEL_8:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v20);
  return v9;
}
