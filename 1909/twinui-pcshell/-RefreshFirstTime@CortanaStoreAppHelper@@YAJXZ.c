/*
 * XREFs of ?RefreshFirstTime@CortanaStoreAppHelper@@YAJXZ @ 0x1801E6D78
 * Callers:
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     Concurrency::create_task__lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801E3078 (Concurrency--create_task__lambda_921a5a526b2b3e27a0030faf56813293___.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801E33A4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801E33A4.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801E3458 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801E3458.c)
 *     ??0task_options@Concurrency@@QEAA@XZ @ 0x1801E3970 (--0task_options@Concurrency@@QEAA@XZ.c)
 *     ??1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3E7C (--1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1801E7B1C (-StartActivity@CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppHelper::RefreshFirstTime(CortanaStoreAppHelper *this)
{
  Concurrency::task_options *v1; // rbx
  __int64 v3; // [rsp+28h] [rbp-E0h] BYREF
  std::_Ref_count_base *v4; // [rsp+30h] [rbp-D8h]
  __int64 v5; // [rsp+38h] [rbp-D0h]
  _BYTE v6[96]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v7[39]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v8[40]; // [rsp+1D8h] [rbp+D0h] BYREF

  v5 = -2LL;
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v8,
    (__int64)"CortanaUndocking_FirstBootTriggered");
  v8[0] = &CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::`vftable';
  CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::StartActivity((CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered *)v8);
  v1 = Concurrency::task_options::task_options((Concurrency::task_options *)v6);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v7,
    (__int64)v8);
  v7[0] = &CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::`vftable';
  Concurrency::create_task__lambda_921a5a526b2b3e27a0030faf56813293___(
    &v3,
    (CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered *)v7,
    (__int64)v1);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::~CortanaUndocking_FirstBootTriggered((CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered *)v8);
  return 0LL;
}
