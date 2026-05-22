/*
 * XREFs of _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$2 @ 0x18013329D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor_2(
        __int64 a1,
        const struct std::nothrow_t *a2)
{
  std::unique_ptr<_HIDP_BUTTON_CAPS [0]>::~unique_ptr<_HIDP_BUTTON_CAPS [0]>((void **)(*((_QWORD *)a2 + 8) + 128LL), a2);
}
