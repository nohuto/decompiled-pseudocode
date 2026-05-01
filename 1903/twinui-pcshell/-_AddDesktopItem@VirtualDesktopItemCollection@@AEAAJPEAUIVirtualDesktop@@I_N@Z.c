/*
 * XREFs of ?_AddDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@I_N@Z @ 0x180354D1C
 * Callers:
 *     ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180354904 (-RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUI.c)
 *     ?VirtualDesktopCreated@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180354AC0 (-VirtualDesktopCreated@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ObservableProperty@I@@QEAAAEBIAEBI@Z @ 0x18035457C (--4-$ObservableProperty@I@@QEAAAEBIAEBI@Z.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x18035462C (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 *     ?_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z @ 0x180354F7C (-_SetTitle@VirtualDesktopItemCollection@@AEAAXPEAUIVirtualDesktopItem@@@Z.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180360B0C (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 */

__int64 __fastcall VirtualDesktopItemCollection::_AddDesktopItem(
        VirtualDesktopItemCollection *this,
        struct IUnknown *a2,
        int a3,
        unsigned __int8 a4)
{
  __int64 v4; // rbx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rax
  VirtualDesktopItemCollection *v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  struct IVirtualDesktopItem *v18; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v19; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IVirtualDesktopItem *v21; // [rsp+60h] [rbp+20h] BYREF
  int v22; // [rsp+70h] [rbp+30h] BYREF

  v22 = a3;
  v4 = *((_QWORD *)this + 20);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  v8 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, GUID *, struct IVirtualDesktopItem **))(*(_QWORD *)v4 + 24LL))(
         v4,
         a2,
         &GUID_8335a836_e567_41a4_8778_62f004524ceb,
         &v18);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)v18 + 48LL))(v18);
    ObservableProperty<unsigned int>::operator=(v10, &v22);
    VirtualDesktopItemCollection::_SetTitle(v11, v18);
    v19 = 0LL;
    v12 = *((_QWORD *)this + 21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    v13 = (*(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v12 + 48LL))(v12, &v19);
    v9 = v13;
    if ( v13 >= 0 )
    {
      LOBYTE(v21) = (unsigned int)SHIsSameObject(v19, a2) != 0;
      v16 = (*(__int64 (__fastcall **)(struct IVirtualDesktopItem *))(*(_QWORD *)v18 + 56LL))(v18);
      ObservableProperty<bool>::operator=(v16, &v21);
      v21 = v18;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
      v9 = ObservableObjectArray::_AddItem(this, &v21, 2 * (unsigned int)a4);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      if ( v9 >= 0 )
      {
LABEL_8:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        goto LABEL_9;
      }
      v14 = (unsigned int)v9;
      v15 = 87LL;
    }
    else
    {
      v14 = (unsigned int)v13;
      v15 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
      (const char *)v14);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4E,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
    (const char *)(unsigned int)v8);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return (unsigned int)v9;
}
