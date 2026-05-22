/*
 * XREFs of ??1?$unique_ptr@UDeviceAttachEventArgs@WGIController@@U?$default_delete@UDeviceAttachEventArgs@WGIController@@@std@@@std@@QEAA@XZ @ 0x1800A88D4
 * Callers:
 *     _WGIController::NotifyDeviceAttach_::_1_::dtor$1 @ 0x1800AA759 (_WGIController--NotifyDeviceAttach_--_1_--dtor$1.c)
 *     _WGIController::NotifyDeviceAttachCallback_::_1_::dtor$0 @ 0x1800AA85C (_WGIController--NotifyDeviceAttachCallback_--_1_--dtor$0.c)
 * Callees:
 *     ??_GDeviceAttachEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8BAC (--_GDeviceAttachEventArgs@WGIController@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<WGIController::DeviceAttachEventArgs>::~unique_ptr<WGIController::DeviceAttachEventArgs>(
        WGIController::DeviceAttachEventArgs **a1,
        unsigned int a2)
{
  WGIController::DeviceAttachEventArgs *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return WGIController::DeviceAttachEventArgs::`scalar deleting destructor'(v2, a2);
  return result;
}
