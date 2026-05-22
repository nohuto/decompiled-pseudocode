/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U_HIDP_BUTTON_CAPS@@U?$default_delete@$$BY0A@U_HIDP_BUTTON_CAPS@@@std@@@std@@QEAA@XZ @ 0x18006622C
 * Callers:
 *     _VariableSizedPayloadStorage_InputInfo_::VariableSizedPayloadStorage_InputInfo__::_1_::dtor$0 @ 0x1801316C1 (_VariableSizedPayloadStorage_InputInfo_--VariableSizedPayloadStorage_InputInfo__--_1_--dtor$0.c)
 *     _SpatialInteractionDevices::GetHandedness_::_1_::dtor$0 @ 0x180133194 (_SpatialInteractionDevices--GetHandedness_--_1_--dtor$0.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$2 @ 0x18013329D (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$2.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$3 @ 0x1801332B6 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$3.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$4 @ 0x1801332CF (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$4.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$5 @ 0x1801332E8 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$5.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$6 @ 0x180133301 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$6.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$7 @ 0x18013331A (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$7.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$8 @ 0x180133333 (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$8.c)
 *     _SpatialInteractionDevices::HID_HANDLE::HID_HANDLE_::_1_::dtor$9 @ 0x18013334C (_SpatialInteractionDevices--HID_HANDLE--HID_HANDLE_--_1_--dtor$9.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnumerateDevices_::_1_::dtor$1 @ 0x180133398 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--_ea_180133398.c)
 *     _InputEventPayloadBuffer::InputEventPayloadBuffer_::_1_::dtor$0 @ 0x1801356FF (_InputEventPayloadBuffer--InputEventPayloadBuffer_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<_HIDP_BUTTON_CAPS [0]>::~unique_ptr<_HIDP_BUTTON_CAPS [0]>(
        void **a1,
        const struct std::nothrow_t *a2)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    operator delete(v2, a2);
}
