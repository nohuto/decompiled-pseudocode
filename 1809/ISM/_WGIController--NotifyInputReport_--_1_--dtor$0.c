/*
 * XREFs of _WGIController::NotifyInputReport_::_1_::dtor$0 @ 0x1801318B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WGIController::NotifyInputReport_::_1_::dtor_0(__int64 a1, __int64 **a2)
{
  std::unique_ptr<WGIController::InputReportEventArgs>::~unique_ptr<WGIController::InputReportEventArgs>(
    a2 + 13,
    (const struct std::nothrow_t *)a2);
}
