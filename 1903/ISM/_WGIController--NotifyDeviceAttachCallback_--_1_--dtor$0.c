/*
 * XREFs of _WGIController::NotifyDeviceAttachCallback_::_1_::dtor$0 @ 0x1800AA98C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall WGIController::NotifyDeviceAttachCallback_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<WGIController::DeviceAttachEventArgs>::~unique_ptr<WGIController::DeviceAttachEventArgs>(
           (WGIController::DeviceAttachEventArgs **)(a2 + 64),
           a2);
}
