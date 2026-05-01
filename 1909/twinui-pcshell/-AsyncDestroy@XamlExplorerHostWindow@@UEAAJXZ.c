/*
 * XREFs of ?AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ @ 0x1802DBE40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x1802DB2F8 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc___ @ 0x1802DB708 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc.c)
 *     ?Cloak@XamlExplorerHostWindow@@AEAAXXZ @ 0x1802DC1C8 (-Cloak@XamlExplorerHostWindow@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlExplorerHostWindow::AsyncDestroy(XamlExplorerHostWindow *this)
{
  RTL_SRWLOCK *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  XamlExplorerHostWindow *v9; // [rsp+28h] [rbp-30h] BYREF
  XamlExplorerHostWindow *v10; // [rsp+30h] [rbp-28h] BYREF
  XamlExplorerHostWindow *v11; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+68h] [rbp+10h]
  _QWORD *v13; // [rsp+70h] [rbp+18h]
  __int64 v14; // [rsp+78h] [rbp+20h]

  v2 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockShared((PSRWLOCK)this + 12);
  v12 = v2;
  XamlExplorerHostWindow::Cloak(this);
  if ( *((_QWORD *)this + 9) )
  {
    v11 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v3 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v13 = v3;
    v9 = this;
    v10 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v4 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc___(
           v3,
           (__int64)&v9);
    v13 = v4;
    v5 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 9), 0LL, (__int64)v4);
    v6 = v5;
    v14 = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 16LL))(v4, v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    v7 = 0;
  }
  else
  {
    v7 = -2147019873;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v7;
}
