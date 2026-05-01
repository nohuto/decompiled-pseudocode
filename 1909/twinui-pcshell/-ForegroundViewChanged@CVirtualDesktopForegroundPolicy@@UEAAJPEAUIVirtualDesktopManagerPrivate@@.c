/*
 * XREFs of ?ForegroundViewChanged@CVirtualDesktopForegroundPolicy@@UEAAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIApplicationView@@@Z @ 0x180072C80
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtualDesktop@@@Z @ 0x18040A134 (-_FindDesktopForView@CVirtualDesktopForegroundPolicy@@AEAAJPEAUIApplicationView@@PEAPEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopForegroundPolicy::ForegroundViewChanged(
        CVirtualDesktopForegroundPolicy *this,
        struct IVirtualDesktopManagerPrivate *a2,
        struct IVirtualDesktopSwitchAnimator *a3,
        struct IApplicationView *a4)
{
  __int64 v8; // rcx
  int v9; // eax
  int DesktopForView; // ebx
  __int64 v11; // rcx
  struct IUnknown *v12; // rcx
  int v14; // eax
  int v15; // eax
  int v16; // [rsp+20h] [rbp-30h]
  struct IVirtualDesktop *v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  struct IUnknown *v19[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v21; // [rsp+70h] [rbp+20h] BYREF

  v19[1] = (struct IUnknown *)-2LL;
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    v19[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v8 + 72LL))(v8, v19) < 0
      || (unsigned int)SHIsSameObject((struct IUnknown *)a4, v19[0]) )
    {
      v18 = 0LL;
      v9 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerPrivate *, __int64 *))(*(_QWORD *)a2 + 224LL))(
             a2,
             &v18);
      DesktopForView = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA1,
          (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
          (const char *)(unsigned int)v9,
          v16);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**((_QWORD **)this + 3)
                                                                                              + 24LL))(
                  *((_QWORD *)this + 3),
                  a4,
                  v18) )
      {
        DesktopForView = 0;
      }
      else
      {
        v17 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        DesktopForView = CVirtualDesktopForegroundPolicy::_FindDesktopForView(this, a4, &v17);
        if ( DesktopForView >= 0 )
        {
          v21 = 3;
          v14 = (*(__int64 (__fastcall **)(struct IVirtualDesktopManagerPrivate *, __int64, struct IVirtualDesktop *, int *))(*(_QWORD *)a2 + 272LL))(
                  a2,
                  v18,
                  v17,
                  &v21);
          if ( v14 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xA7,
              (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
              (const char *)(unsigned int)v14,
              v16);
          v15 = (*(__int64 (__fastcall **)(struct IVirtualDesktopSwitchAnimator *, struct IVirtualDesktop *, bool))(*(_QWORD *)a3 + 24LL))(
                  a3,
                  v17,
                  v21 != 3);
          DesktopForView = v15;
          if ( v15 < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xA8,
              (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
              (const char *)(unsigned int)v15,
              v16);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      }
      v11 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    else
    {
      DesktopForView = 0;
    }
    v12 = v19[0];
    if ( v19[0] )
    {
      v19[0] = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
    }
  }
  else
  {
    DesktopForView = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopforegroundpolicy.cpp",
      (const char *)0x80010108LL,
      v16);
  }
  return (unsigned int)DesktopForView;
}
