/*
 * XREFs of std::_Global_new_std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long___lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801C3EFC
 * Callers:
 *     Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_Init @ 0x1801CD1D8 (Concurrency--task_long_--_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56_ea_1801CD1D8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1801C42A4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Par.c)
 */

_QWORD *__fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long___lambda_921a5a526b2b3e27a0030faf56813293___(
        __int64 a1)
{
  _QWORD *v3; // [rsp+48h] [rbp+10h]

  v3 = operator new(0x140uLL);
  *v3 = off_18042DBB8;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    v3 + 1,
    a1);
  v3[1] = &CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::`vftable';
  return v3;
}
