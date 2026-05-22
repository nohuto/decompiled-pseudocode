/*
 * XREFs of ??1?$unique_ptr@UDeviceRemovalEventArgs@WGIController@@U?$default_delete@UDeviceRemovalEventArgs@WGIController@@@std@@@std@@QEAA@XZ @ 0x1800A8A60
 * Callers:
 *     _WGIController::NotifyDeviceRemoval_::_1_::dtor$0 @ 0x1800AAA88 (_WGIController--NotifyDeviceRemoval_--_1_--dtor$0.c)
 *     _WGIController::NotifyDeviceRemovalCallback_::_1_::dtor$0 @ 0x1800AAB93 (_WGIController--NotifyDeviceRemovalCallback_--_1_--dtor$0.c)
 * Callees:
 *     ??_GDeviceRemovalEventArgs@WGIController@@QEAAPEAXI@Z @ 0x1800A8DB4 (--_GDeviceRemovalEventArgs@WGIController@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<WGIController::DeviceRemovalEventArgs>::~unique_ptr<WGIController::DeviceRemovalEventArgs>(
        WGIController::DeviceRemovalEventArgs **a1,
        unsigned int a2)
{
  WGIController::DeviceRemovalEventArgs *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return WGIController::DeviceRemovalEventArgs::`scalar deleting destructor'(v2, a2);
  return result;
}
