/*
 * XREFs of _WGIController::NotifyDeviceAttach_::_1_::dtor$1 @ 0x1800AA88D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall WGIController::NotifyDeviceAttach_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::unique_ptr<WGIController::DeviceAttachEventArgs>::~unique_ptr<WGIController::DeviceAttachEventArgs>(
           (WGIController::DeviceAttachEventArgs **)(a2 + 104),
           a2);
}
