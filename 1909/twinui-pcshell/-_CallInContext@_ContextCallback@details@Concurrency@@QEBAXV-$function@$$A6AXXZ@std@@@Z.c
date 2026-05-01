/*
 * XREFs of ?_CallInContext@_ContextCallback@details@Concurrency@@QEBAXV?$function@$$A6AXXZ@std@@@Z @ 0x1801EB880
 * Callers:
 *     _lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator() @ 0x1801E4674 (_lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator().c)
 * Callees:
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1801E36A0 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Concurrency::details::_ContextCallback::_CallInContext(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+28h] [rbp-50h] BYREF

  v4 = std::function<void (void)>::function<void (void)>((__int64)&v7, a2);
  Concurrency::details::_ContextCallback::_CallInContext(a1, v4, 0LL);
  return std::_Func_class<void,>::_Tidy(a2, v5);
}
