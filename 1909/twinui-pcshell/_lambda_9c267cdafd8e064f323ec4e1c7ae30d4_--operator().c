/*
 * XREFs of _lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator() @ 0x18030C220
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_9c267cdafd8e064f323ec4e1c7ae30d4__void_Windows::Foundation::IAsyncOperation_bool____enum_Windows::Foundation::AsyncStatus_::Invoke @ 0x18030CA60 (Platform--Details--__abi_FunctorCapture__lambda_9c267cdafd8e064f323ec4e1c7ae30d4__v_ea_18030CA60.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1801EBB40 (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802D2F28 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ??$make_exception_ptr@PE$AAVException@Platform@@@std@@YA?AVexception_ptr@0@PE$AAVException@Platform@@@Z @ 0x18030B5B4 (--$make_exception_ptr@PE$AAVException@Platform@@@std@@YA-AVexception_ptr@0@PE$AAVException@Platf.c)
 *     ?GetResults@?$IAsyncOperation@_N@Foundation@Windows@@UE$AAA_NXZ @ 0x18030C958 (-GetResults@-$IAsyncOperation@_N@Foundation@Windows@@UE$AAA_NXZ.c)
 *     ?_FinalizeAndRunContinuations@?$_Task_impl@E@details@Concurrency@@QEAAXE@Z @ 0x18030DDA0 (-_FinalizeAndRunContinuations@-$_Task_impl@E@details@Concurrency@@QEAAXE@Z.c)
 *     ?get@ErrorCode@IAsyncInfo@Foundation@Windows@@UE$AAA?AVHResult@34@XZ @ 0x18030EA40 (-get@ErrorCode@IAsyncInfo@Foundation@Windows@@UE$AAA-AVHResult@34@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()(
        Concurrency::details::_Task_impl_base **a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *),
        int a3)
{
  Concurrency::details::_Task_impl_base **v3; // rbx
  Concurrency::details::_Task_impl_base *v4; // rcx
  char *v5; // rdx
  __int64 v6; // rdi
  unsigned int *v7; // rax
  __int64 Exception; // rsi
  const struct std::exception_ptr *v9; // rdx
  Concurrency::details::_Task_impl_base *v10; // rdi
  std::_Ref_count_base *v11; // rcx
  _BYTE v12[48]; // [rsp+38h] [rbp-30h] BYREF
  char v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h]

  v3 = a1;
  if ( a3 == 2 )
  {
    v4 = *a1;
    v5 = (char *)v4 + 16;
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(Concurrency::details::_Task_impl_base *, char *, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 8LL))(
      v4,
      v5,
      0LL,
      0LL,
      (__int64)v4 + 16);
  }
  else if ( a3 == 3 )
  {
    v6 = __abi_winrt_cast_to(0, a2, (__int64)&_uuidof__AUIAsyncInfo_Foundation_Windows__);
    v7 = (unsigned int *)Windows::Foundation::IAsyncInfo::ErrorCode::get(v6, &v15);
    Exception = Platform::Exception::ReCreateException(*v7);
    v16 = Exception;
    v9 = (const struct std::exception_ptr *)std::make_exception_ptr<Platform::Exception __gc *>(v12, Exception);
    Concurrency::details::_Task_impl_base::_CancelWithException(*v3, v9);
    __ExceptionPtrDestroy(v12);
    if ( Exception )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)Exception + 16LL))(Exception);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    v10 = *a1;
    try
    {
      Windows::Foundation::IAsyncOperation<bool>::GetResults();
      Concurrency::details::_Task_impl<unsigned char>::_FinalizeAndRunContinuations(v10);
    }
    catch ( ... )
    {
      __ExceptionPtrCreate(v12);
      __ExceptionPtrCurrentException(v12);
      Concurrency::details::_Task_impl_base::_CancelWithException(*a1, (const struct std::exception_ptr *)v12);
      __ExceptionPtrDestroy(v12);
      v3 = a1;
    }
  }
  *v3 = 0LL;
  v11 = v3[1];
  v3[1] = 0LL;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
