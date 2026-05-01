/*
 * XREFs of Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_ @ 0x1801C460C
 * Callers:
 *     Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801C146C (Concurrency--task_long_--task_long___lambda_921a5a526b2b3e27a0030faf56813293___.c)
 * Callees:
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801C4384 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801C4384.c)
 */

_QWORD *__fastcall Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // rax

  *a1 = &off_18042DBE8;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a2[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  a1[1] = *a2;
  a1[2] = a2[1];
  *a1 = &off_18043D7A8;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 3),
    a3);
  a1[3] = &CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::`vftable';
  return a1;
}
