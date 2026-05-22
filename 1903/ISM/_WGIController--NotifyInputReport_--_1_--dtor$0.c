/*
 * XREFs of _WGIController::NotifyInputReport_::_1_::dtor$0 @ 0x1800AACDE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall WGIController::NotifyInputReport_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<WGIController::InputReportEventArgs>::~unique_ptr<WGIController::InputReportEventArgs>(
           (WGIController::InputReportEventArgs **)(a2 + 104),
           a2);
}
