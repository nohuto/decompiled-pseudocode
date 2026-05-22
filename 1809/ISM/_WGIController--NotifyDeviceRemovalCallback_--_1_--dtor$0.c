/*
 * XREFs of _WGIController::NotifyDeviceRemovalCallback_::_1_::dtor$0 @ 0x18013189E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WGIController::NotifyDeviceRemovalCallback_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<WGIController::DeviceRemovalEventArgs>::~unique_ptr<WGIController::DeviceRemovalEventArgs>((__int64 **)(a2 + 64));
}
