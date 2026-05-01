/*
 * XREFs of ?ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x180263EE0
 * Callers:
 *     ?Hide@XamlExplorerHostWindow@@UEAAXXZ @ 0x180264170 (-Hide@XamlExplorerHostWindow@@UEAAXXZ.c)
 *     ?Show@XamlExplorerHostWindow@@UEAAXXZ @ 0x180264590 (-Show@XamlExplorerHostWindow@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180263348 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8___ @ 0x180263844 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8.c)
 *     ?Cloak@XamlExplorerHostWindow@@AEAAXXZ @ 0x180264128 (-Cloak@XamlExplorerHostWindow@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall XamlExplorerHostWindow::ChangeVisibility(XamlExplorerHostWindow *this, char a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  XamlExplorerHostWindow *v8; // [rsp+28h] [rbp-30h] BYREF
  char v9; // [rsp+30h] [rbp-28h]
  XamlExplorerHostWindow *v10; // [rsp+38h] [rbp-20h] BYREF
  XamlExplorerHostWindow *v11; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+70h] [rbp+18h]
  __int64 v13; // [rsp+78h] [rbp+20h]

  if ( a2 )
    XamlExplorerHostWindow::Cloak(this);
  if ( *((_QWORD *)this + 9) )
  {
    v11 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v12 = v4;
    v8 = this;
    v9 = a2;
    v10 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v5 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8___(
           v4,
           (__int64)&v8);
    v12 = v5;
    v6 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 9), 0LL, (__int64)v5);
    v7 = v6;
    v13 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 16LL))(v5, v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  }
}
