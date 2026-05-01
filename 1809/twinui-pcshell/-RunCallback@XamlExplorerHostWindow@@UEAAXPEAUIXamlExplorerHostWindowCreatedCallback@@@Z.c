/*
 * XREFs of ?RunCallback@XamlExplorerHostWindow@@UEAAXPEAUIXamlExplorerHostWindowCreatedCallback@@@Z @ 0x180264230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180263348 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971___ @ 0x18026365C (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlExplorerHostWindow::RunCallback(
        XamlExplorerHostWindow *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2)
{
  RTL_SRWLOCK *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  XamlExplorerHostWindow *v9; // [rsp+30h] [rbp-20h] BYREF
  XamlExplorerHostWindow *v10; // [rsp+38h] [rbp-18h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v11; // [rsp+40h] [rbp-10h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v12; // [rsp+80h] [rbp+30h] BYREF
  XamlExplorerHostWindow *v13; // [rsp+88h] [rbp+38h] BYREF
  RTL_SRWLOCK *v14; // [rsp+90h] [rbp+40h]
  _QWORD *v15; // [rsp+98h] [rbp+48h]

  v4 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockExclusive((PSRWLOCK)this + 12);
  v14 = v4;
  v13 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v12 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  if ( *((_QWORD *)this + 9) )
  {
    v5 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v15 = v5;
    v9 = this;
    v10 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v11 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v6 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971___(
           v5,
           (__int64)&v9);
    v15 = v6;
    v7 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 9), 0LL, (__int64)v6);
    v8 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 16LL))(v6, v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
