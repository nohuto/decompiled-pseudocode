/*
 * XREFs of ??1InternalHitTestResult@HitTestHelper@@QEAA@XZ @ 0x18002503C
 * Callers:
 *     _DragNDropProcessor::HitTest_::_1_::dtor$0 @ 0x18012ED16 (_DragNDropProcessor--HitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0 @ 0x180132399 (_DWMInputRouter--HitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::RequestViewHitTestHelper_::_1_::dtor$0 @ 0x18013241B (_DWMInputRouter--RequestViewHitTestHelper_--_1_--dtor$0.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$3 @ 0x180132677 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$3.c)
 *     _DragNDropProcessorLegacy::HitTest_::_1_::dtor$0 @ 0x180133D24 (_DragNDropProcessorLegacy--HitTest_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall HitTestHelper::InternalHitTestResult::~InternalHitTestResult(
        HitTestHelper::InternalHitTestResult *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v2);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy((__int64)this + 8);
}
