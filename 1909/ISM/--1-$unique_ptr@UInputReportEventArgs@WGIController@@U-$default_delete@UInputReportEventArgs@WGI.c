/*
 * XREFs of ??1?$unique_ptr@UInputReportEventArgs@WGIController@@U?$default_delete@UInputReportEventArgs@WGIController@@@std@@@std@@QEAA@XZ @ 0x1800A8930
 * Callers:
 *     _WGIController::NotifyInputReport_::_1_::dtor$0 @ 0x1800AABAE (_WGIController--NotifyInputReport_--_1_--dtor$0.c)
 *     _WGIController::NotifyInputReportCallback_::_1_::dtor$0 @ 0x1800AAE26 (_WGIController--NotifyInputReportCallback_--_1_--dtor$0.c)
 * Callees:
 *     ??_GInputReportEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8CAC (--_GInputReportEventArgs@WGIController@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<WGIController::InputReportEventArgs>::~unique_ptr<WGIController::InputReportEventArgs>(
        WGIController::InputReportEventArgs **a1,
        unsigned int a2)
{
  WGIController::InputReportEventArgs *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return WGIController::InputReportEventArgs::`scalar deleting destructor'(v2, a2);
  return result;
}
