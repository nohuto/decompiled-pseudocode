/*
 * XREFs of _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus_::_1_::dtor$1 @ 0x180169461
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_array_ptr<HOLOGRAPHIC_DEVICE_ERROR_STATUS,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::size_address_ptr<unsigned __int64>::~size_address_ptr<unsigned __int64>(a2 + 88);
}
