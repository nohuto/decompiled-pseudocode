/*
 * XREFs of _WGIController::NotifyInputReportCallback_::_1_::dtor$0 @ 0x1800AAE26
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall WGIController::NotifyInputReportCallback_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<WGIController::InputReportEventArgs>::~unique_ptr<WGIController::InputReportEventArgs>(
           (WGIController::InputReportEventArgs **)(a2 + 56),
           a2);
}
