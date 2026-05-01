/*
 * XREFs of ?MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x180280150
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180263348 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18027C860 (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_30f657ed8e28792729df8e2fc6b34518___ @ 0x18027CB84 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_30f657ed8e28792729df8e2fc6b34518.c)
 *     _lambda_30f657ed8e28792729df8e2fc6b34518_::_lambda_30f657ed8e28792729df8e2fc6b34518_ @ 0x18027D548 (_lambda_30f657ed8e28792729df8e2fc6b34518_--_lambda_30f657ed8e28792729df8e2fc6b34518_.c)
 *     _lambda_30f657ed8e28792729df8e2fc6b34518_::_lambda_30f657ed8e28792729df8e2fc6b34518__0 @ 0x18027D580 (_lambda_30f657ed8e28792729df8e2fc6b34518_--_lambda_30f657ed8e28792729df8e2fc6b34518__0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall XamlAltTabViewHost::MoveVirtualCursor(XamlAltTabViewHost *this, struct tagPOINT *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  int v5; // r15d
  __int64 v6; // rcx
  float y; // xmm1_4
  __int64 v8; // r14
  _QWORD *v9; // rbx
  __int64 *v10; // rdx
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v16[3]; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  _QWORD *v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+48h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v16[2] = (__int64)v4;
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v17 = v5;
  v6 = *((_QWORD *)this + 21);
  if ( v6 )
  {
    y = (float)a2->y;
    *(float *)&v19 = (float)a2->x;
    *((float *)&v19 + 1) = y;
    v8 = __abi_winrt_ptr_ctor(v6);
    v20 = v8;
    lambda_30f657ed8e28792729df8e2fc6b34518_::_lambda_30f657ed8e28792729df8e2fc6b34518_(v16, &v20, (__int64 *)&v19);
    v9 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v19 = v9;
    v10 = lambda_30f657ed8e28792729df8e2fc6b34518_::_lambda_30f657ed8e28792729df8e2fc6b34518__0(&v18, v16);
    v11 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_30f657ed8e28792729df8e2fc6b34518___(v9, v10);
    v19 = v11;
    v12 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 21));
    v21 = v12;
    v13 = Windows::UI::Core::ICoreDispatcher::RunAsync(v12, 0LL, (__int64)v11);
    v14 = v13;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v14);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v11 + 16LL))(v11, v14);
    if ( v16[0] )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16[0] + 16LL))(v16[0], v14);
    if ( v8 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 16LL))(v8, v14);
  }
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
