/*
 * XREFs of ?CurrentVirtualDesktopChanged@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180354740
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIVirtualDesktopItemInternal@@@?$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18035438C (--$As@UIVirtualDesktopItemInternal@@@-$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRe.c)
 *     ??4?$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z @ 0x18035462C (--4-$ObservableProperty@_N@@QEAAAEB_N$$QEA_N@Z.c)
 */

__int64 __fastcall VirtualDesktopItemCollection::CurrentVirtualDesktopChanged(
        VirtualDesktopItemCollection *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  _QWORD *v3; // rdi
  _QWORD *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  struct IUnknown **v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  struct IUnknown **v12; // rax
  int v13; // ebx
  __int64 v14; // rax
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  char v19; // [rsp+60h] [rbp+30h] BYREF
  __int64 *v20; // [rsp+78h] [rbp+48h] BYREF

  v3 = (_QWORD *)*((_QWORD *)this - 16);
  v6 = &v3[*((_QWORD *)this - 15)];
  while ( 1 )
  {
    if ( v3 == v6 )
      return 0LL;
    v20 = 0LL;
    v7 = Microsoft::WRL::ComPtr<IObservableItem>::As<IVirtualDesktopItemInternal>(v3, (__int64 *)&v20);
    v8 = v7;
    if ( v7 < 0 )
      break;
    v9 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v20 + 72))(v20, &v16);
    v10 = SHIsSameObject(*v9, a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v11 = *v20;
    if ( v10 )
    {
      v19 = 0;
    }
    else
    {
      v12 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 72))(v20, &v17);
      v13 = SHIsSameObject(*v12, a3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      if ( !v13 )
        goto LABEL_8;
      v19 = 1;
      v11 = *v20;
    }
    v14 = (*(__int64 (**)(void))(v11 + 56))();
    ObservableProperty<bool>::operator=(v14, &v19);
LABEL_8:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    ++v3;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8C,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemcollection.cpp",
    (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  return v8;
}
