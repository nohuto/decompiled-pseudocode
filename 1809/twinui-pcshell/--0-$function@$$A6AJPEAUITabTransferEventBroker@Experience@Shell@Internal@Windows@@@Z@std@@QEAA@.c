/*
 * XREFs of ??0?$function@$$A6AJPEAUITabTransferEventBroker@Experience@Shell@Internal@Windows@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1801D4594
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd___::CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd_____lambda_d5a453c259c1c666423c9d39fc9189fd___ @ 0x1801CDE14 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d5a453c259c1c666423c9d39fc9189fd___--CTaskW.c)
 *     wil::RunWhenCompleteNoThrow_Microsoft::WRL::FtmBase_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64__lambda_5860b5e6cc13572247a78ff58f223768__Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_ @ 0x1801D0E20 (wil--RunWhenCompleteNoThrow_Microsoft--WRL--FtmBase_Windows--Internal--Shell--Experience--TitleB.c)
 *     ?RunCallbackWithTabTransferEventBrokerAsync@TabViewManager@@AEAAJV?$function@$$A6AJPEAUITabTransferEventBroker@Experience@Shell@Internal@Windows@@@Z@std@@@Z @ 0x1801E48B0 (-RunCallbackWithTabTransferEventBrokerAsync@TabViewManager@@AEAAJV-$function@$$A6AJPEAUITabTrans.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_5860b5e6cc13572247a78ff58f223768__0__wistd::details::function_allocator_wistd::_Func_class_long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_long_Windows::Internal::Shell::Experience::ITitleBarFactory_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x1801F0E30 (wistd--_Func_impl_wistd--_Callable_obj__lambda_5860b5e6cc13572247a78ff58f223768__0__ea_1801F0E30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18017B930 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<long (Windows::Internal::Shell::Experience::ITabTransferEventBroker *)>::function<long (Windows::Internal::Shell::Experience::ITabTransferEventBroker *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  *(_QWORD *)(a1 + 56) = 0LL;
  v4 = *(_QWORD *)(a2 + 56);
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      *(_QWORD *)(a1 + 56) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, a1);
      std::_Func_class<void,>::_Tidy(a2, v5);
    }
    else
    {
      *(_QWORD *)(a1 + 56) = v4;
      *(_QWORD *)(a2 + 56) = 0LL;
    }
  }
  return a1;
}
