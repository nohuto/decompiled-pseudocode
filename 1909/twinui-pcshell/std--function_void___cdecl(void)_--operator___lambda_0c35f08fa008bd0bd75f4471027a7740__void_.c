/*
 * XREFs of std::function_void___cdecl(void)_::operator___lambda_0c35f08fa008bd0bd75f4471027a7740__void_ @ 0x18030A86C
 * Callers:
 *     ?_SetUnwrappedAsyncOp@?$_Task_impl@_N@details@Concurrency@@QEAAXPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18030E28C (-_SetUnwrappedAsyncOp@-$_Task_impl@_N@details@Concurrency@@QEAAXPE$AAU-$IAsyncOperation@_N@Found.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801C9F14 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?_Swap@?$_Func_class@X$$V@std@@IEAAXAEAV12@@Z @ 0x18030E3D8 (-_Swap@-$_Func_class@X$$V@std@@IEAAXAEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function_void___cdecl_void__::operator___lambda_0c35f08fa008bd0bd75f4471027a7740__void_(
        __int64 a1,
        __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF

  v3 = __abi_winrt_ptr_ctor(*a2);
  v6[0] = off_1805B8628;
  v6[1] = __abi_winrt_ptr_ctor(v3);
  v6[7] = v6;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  std::_Func_class<void,>::_Swap(v6, a1);
  std::_Func_class<void,>::_Tidy((__int64)v6, v4);
  return a1;
}
