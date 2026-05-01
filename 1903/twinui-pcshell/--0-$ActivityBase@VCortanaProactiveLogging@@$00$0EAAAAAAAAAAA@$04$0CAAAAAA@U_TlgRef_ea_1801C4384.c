/*
 * XREFs of ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801C4384
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long___lambda_921a5a526b2b3e27a0030faf56813293__const_&_ @ 0x1801C3E6C (std--_Global_new_std--_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long___lambd.c)
 *     Concurrency::create_task__lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801C4068 (Concurrency--create_task__lambda_921a5a526b2b3e27a0030faf56813293___.c)
 *     Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_ @ 0x1801C460C (Concurrency--task_long_--_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concu.c)
 *     _lambda_6beee81bb2061f57cf9eaca4a4fea397_::operator() @ 0x1801C5328 (_lambda_6beee81bb2061f57cf9eaca4a4fea397_--operator().c)
 *     _lambda_921a5a526b2b3e27a0030faf56813293_::operator() @ 0x1801C57B8 (_lambda_921a5a526b2b3e27a0030faf56813293_--operator().c)
 *     _lambda_f8fc68a596a1d4698bf0d7673b0f23f8_::operator() @ 0x1801C5AB8 (_lambda_f8fc68a596a1d4698bf0d7673b0f23f8_--operator().c)
 *     ?RefreshFirstTime@CortanaStoreAppHelper@@YAJXZ @ 0x1801C7D58 (-RefreshFirstTime@CortanaStoreAppHelper@@YAJXZ.c)
 *     Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_Init @ 0x1801CD1D8 (Concurrency--task_long_--_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56_ea_1801CD1D8.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180049904 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ??4?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1801C51EC (--4-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Par.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    0LL,
    1);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 13) = 0LL;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_BYTE *)a1 + 120) = 0;
  *((_DWORD *)a1 + 33) = 0;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::operator=(
    a1,
    a2);
  return a1;
}
