/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____lambda_d5a453c259c1c666423c9d39fc9189fd___ @ 0x1801CEF50
 * Callers:
 *     ?RunCallbackWithTabTransferEventBrokerAsync@TabViewManager@@AEAAJV?$function@$$A6AJPEAUITabTransferEventBroker@Experience@Shell@Internal@Windows@@@Z@std@@@Z @ 0x1801E48B0 (-RunCallbackWithTabTransferEventBrokerAsync@TabViewManager@@AEAAJV-$function@$$A6AJPEAUITabTrans.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180053B90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd___::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____lambda_d5a453c259c1c666423c9d39fc9189fd___ @ 0x1801CDE14 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____lambda_d5a453c259c1c666423c9d39fc9189fd___(
        __int64 *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rax
  volatile int *v5; // rdx
  _QWORD *v6; // rdi

  *a1 = 0LL;
  v4 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd___::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____lambda_d5a453c259c1c666423c9d39fc9189fd___(
           v4,
           a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v5);
    *a1 = (__int64)v6;
  }
  return a1;
}
