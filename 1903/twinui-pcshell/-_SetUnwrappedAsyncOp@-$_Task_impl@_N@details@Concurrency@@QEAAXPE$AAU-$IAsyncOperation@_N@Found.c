/*
 * XREFs of ?_SetUnwrappedAsyncOp@?$_Task_impl@_N@details@Concurrency@@QEAAXPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x1802EEDCC
 * Callers:
 *     ??$_AsyncInit@_N_N@_Task_impl_base@details@Concurrency@@SAXAEBV?$shared_ptr@U?$_Task_impl@_N@details@Concurrency@@@std@@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x1802EBB10 (--$_AsyncInit@_N_N@_Task_impl_base@details@Concurrency@@SAXAEBV-$shared_ptr@U-$_Task_impl@_N@det.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802B3920 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802B3A08 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     std::function_void___cdecl(void)_::operator___lambda_0c35f08fa008bd0bd75f4471027a7740__void_ @ 0x1802EB3BC (std--function_void___cdecl(void)_--operator___lambda_0c35f08fa008bd0bd75f4471027a7740__void_.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Concurrency::details::_Task_impl<bool>::_SetUnwrappedAsyncOp(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64, __int64 *); // rdi
  char v4; // si
  int v5; // eax
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, __int64, __int64 *); // [rsp+58h] [rbp+10h]
  _Mtx_t v11; // [rsp+60h] [rbp+18h]

  v10 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))a2;
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(a2);
  v10 = v3;
  v4 = 0;
  v11 = (_Mtx_t)(a1 + 32);
  v5 = _Mtx_lock((_Mtx_t)(a1 + 32));
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( *(_DWORD *)(a1 + 8) == 2 )
  {
    v4 = 1;
  }
  else if ( *(_DWORD *)(a1 + 8) != 4 && *(_DWORD *)(a1 + 8) != 3 )
  {
    *(_DWORD *)(a1 + 8) = 1;
    v9 = __abi_winrt_ptr_ctor((__int64)v3);
    std::function_void___cdecl_void__::operator___lambda_0c35f08fa008bd0bd75f4471027a7740__void_(a1 + 376, &v9);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v6 = _Mtx_unlock(v11);
  if ( v6 )
    std::_Throw_C_error(v6);
  if ( v4 )
  {
    v7 = __abi_winrt_cast_to(0, v3, (__int64)&_uuidof__AUIAsyncInfo_Foundation_Windows__);
    v9 = v7;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v3 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v3)[2])(v3);
}
