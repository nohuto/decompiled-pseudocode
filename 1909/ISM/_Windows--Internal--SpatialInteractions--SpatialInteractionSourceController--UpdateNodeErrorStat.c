/*
 * XREFs of _Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus_::_1_::dtor$0 @ 0x180169455
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::UpdateNodeErrorStatus_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::unique_any_array_ptr<HOLOGRAPHIC_DEVICE_ERROR_STATUS,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<HOLOGRAPHIC_DEVICE_ERROR_STATUS,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>(a2 + 56);
}
