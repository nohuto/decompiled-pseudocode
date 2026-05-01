/*
 * XREFs of ??0CTimer@LambdaHelpers@@QEAA@W4TIMER_KIND@1@PEAUILambda@@@Z @ 0x18022BC30
 * Callers:
 *     ??$Make@VCTimer@LambdaHelpers@@AEAW4TIMER_KIND@2@PEAUILambda@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCTimer@LambdaHelpers@@@12@AEAW4TIMER_KIND@LambdaHelpers@@$$QEAPEAUILambda@@@Z @ 0x1802294C4 (--$Make@VCTimer@LambdaHelpers@@AEAW4TIMER_KIND@2@PEAUILambda@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LambdaHelpers::CTimer::CTimer(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITimerLambda>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = &LambdaHelpers::CTimer::`vftable';
  *(_DWORD *)(a1 + 20) = GetCurrentThreadId();
  *(_QWORD *)(a1 + 24) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  *(_QWORD *)(a1 + 32) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
