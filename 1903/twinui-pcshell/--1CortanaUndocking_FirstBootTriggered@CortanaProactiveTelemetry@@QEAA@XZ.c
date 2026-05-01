/*
 * XREFs of ??1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801C4E5C
 * Callers:
 *     Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801C146C (Concurrency--task_long_--task_long___lambda_921a5a526b2b3e27a0030faf56813293___.c)
 *     Concurrency::create_task__lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801C4068 (Concurrency--create_task__lambda_921a5a526b2b3e27a0030faf56813293___.c)
 *     _lambda_921a5a526b2b3e27a0030faf56813293_::__lambda_921a5a526b2b3e27a0030faf56813293_ @ 0x1801C4A78 (_lambda_921a5a526b2b3e27a0030faf56813293_--__lambda_921a5a526b2b3e27a0030faf56813293_.c)
 *     Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::__InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_ @ 0x1801C4B20 (Concurrency--task_long_--_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56_ea_1801C4B20.c)
 *     _lambda_921a5a526b2b3e27a0030faf56813293_::operator() @ 0x1801C57B8 (_lambda_921a5a526b2b3e27a0030faf56813293_--operator().c)
 *     __lambda_921a5a526b2b3e27a0030faf56813293_::operator()_::_1_::dtor$0 @ 0x1801C5A5D (__lambda_921a5a526b2b3e27a0030faf56813293_--operator()_--_1_--dtor$0.c)
 *     ?RefreshFirstTime@CortanaStoreAppHelper@@YAJXZ @ 0x1801C7D58 (-RefreshFirstTime@CortanaStoreAppHelper@@YAJXZ.c)
 *     _CortanaStoreAppHelper::RefreshFirstTime_::_1_::dtor$0 @ 0x1801C7E2E (_CortanaStoreAppHelper--RefreshFirstTime_--_1_--dtor$0.c)
 *     std::_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long_::_Delete_this @ 0x1801CCDA0 (std--_Func_impl_no_alloc__lambda_921a5a526b2b3e27a0030faf56813293__long_--_Delete_this.c)
 *     Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync_::_Init @ 0x1801CD1D8 (Concurrency--task_long_--_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56_ea_1801CD1D8.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801C6918 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::~CortanaUndocking_FirstBootTriggered(
        CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered *this)
{
  *(_QWORD *)this = &CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
