/*
 * XREFs of ??1InternalHitTestResult@HitTestHelper@@QEAA@XZ @ 0x18006A9B8
 * Callers:
 *     _MPCInputRouter::HitTest_::_1_::dtor$2 @ 0x18003C140 (_MPCInputRouter--HitTest_--_1_--dtor$2.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$3 @ 0x18003C1A0 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$3.c)
 *     _DragNDropProcessor::HitTest_::_1_::dtor$0 @ 0x18006C0CF (_DragNDropProcessor--HitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0 @ 0x1800C44D0 (_DWMInputRouter--HitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0_0 @ 0x1800C469D (_DWMInputRouter--HitTest_--_1_--dtor$0_0.c)
 *     _DWMInputRouter::RequestUIAHitTest_::_1_::dtor$0 @ 0x1800C5284 (_DWMInputRouter--RequestUIAHitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::RequestViewHitTestHelper_::_1_::dtor$0 @ 0x1800C54F1 (_DWMInputRouter--RequestViewHitTestHelper_--_1_--dtor$0.c)
 *     _TestCommands::RequestHitTest_::_1_::dtor$1 @ 0x1800F93CD (_TestCommands--RequestHitTest_--_1_--dtor$1.c)
 *     _DragNDropProcessorLegacy::HitTest_::_1_::dtor$0 @ 0x1800FF520 (_DragNDropProcessorLegacy--HitTest_--_1_--dtor$0.c)
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
