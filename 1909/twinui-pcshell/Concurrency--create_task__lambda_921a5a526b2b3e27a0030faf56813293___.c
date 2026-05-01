/*
 * XREFs of Concurrency::create_task__lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801E3078
 * Callers:
 *     ?RefreshFirstTime@CortanaStoreAppHelper@@YAJXZ @ 0x1801E6D78 (-RefreshFirstTime@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1801896A4 (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801E048C (Concurrency--task_long_--task_long___lambda_921a5a526b2b3e27a0030faf56813293___.c)
 *     ??$_Assign_range@PEAPEAX@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterator_tag@1@@Z @ 0x1801E2C48 (--$_Assign_range@PEAPEAX@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXPEAPEAX0Uforward_iterato.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801E33A4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgRef_ea_1801E33A4.c)
 *     ??1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1801E3E7C (--1CortanaUndocking_FirstBootTriggered@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ??1task_options@Concurrency@@QEAA@XZ @ 0x1801E41B4 (--1task_options@Concurrency@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Concurrency::create_task__lambda_921a5a526b2b3e27a0030faf56813293___(
        _QWORD *a1,
        CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered *a2,
        __int64 a3)
{
  __int128 v7; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C8h]
  __int64 v9; // [rsp+48h] [rbp-C0h]
  __int64 v10; // [rsp+50h] [rbp-B8h]
  _QWORD v11[40]; // [rsp+60h] [rbp-A8h] BYREF
  _UNKNOWN *retaddr; // [rsp+1C0h] [rbp+B8h]

  v9 = -2LL;
  v11[39] = a2;
  v10 = a3;
  v7 = 0LL;
  v8 = 0LL;
  *(_BYTE *)(a3 + 48) = 1;
  *(_QWORD *)(a3 + 56) = retaddr;
  if ( (__int128 *)(a3 + 64) != &v7 )
    std::vector<void *>::_Assign_range<void * *>(a3 + 64, 0LL, 0LL);
  std::vector<void *>::_Tidy((__int64)&v7);
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v11);
  v11[0] = &CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::`vftable';
  Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293___(
    a1,
    (CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered *)v11,
    a3);
  CortanaProactiveTelemetry::CortanaUndocking_FirstBootTriggered::~CortanaUndocking_FirstBootTriggered(a2);
  Concurrency::task_options::~task_options((Concurrency::task_options *)a3);
  return a1;
}
