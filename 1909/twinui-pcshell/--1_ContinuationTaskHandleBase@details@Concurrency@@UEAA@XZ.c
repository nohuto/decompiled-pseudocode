/*
 * XREFs of ??1_ContinuationTaskHandleBase@details@Concurrency@@UEAA@XZ @ 0x18030BF18
 * Callers:
 *     ??1?$_PPLTaskHandle@EU?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@U_ContinuationTaskHandleBase@details@3@@details@Concurrency@@UEAA@XZ @ 0x18030BE40 (--1-$_PPLTaskHandle@EU-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@.c)
 *     ??_G_ContinuationTaskHandleBase@details@Concurrency@@UEAAPEAXI@Z @ 0x18030C640 (--_G_ContinuationTaskHandleBase@details@Concurrency@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_ContinuationTaskHandleBase::~_ContinuationTaskHandleBase(
        Concurrency::details::_ContinuationTaskHandleBase *this)
{
  *(_QWORD *)this = &Concurrency::details::_ContinuationTaskHandleBase::`vftable';
  Concurrency::details::_ContextCallback::_Reset((Concurrency::details::_ContinuationTaskHandleBase *)((char *)this + 16));
  *(_QWORD *)this = &CCrashDetector::CHandler::`vftable';
}
