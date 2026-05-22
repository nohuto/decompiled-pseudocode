/*
 * XREFs of _WGIController::NotifyDeviceRemoval_::_1_::dtor$0 @ 0x1800AAA88
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall WGIController::NotifyDeviceRemoval_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<WGIController::DeviceRemovalEventArgs>::~unique_ptr<WGIController::DeviceRemovalEventArgs>(
           (WGIController::DeviceRemovalEventArgs **)(a2 + 88),
           a2);
}
