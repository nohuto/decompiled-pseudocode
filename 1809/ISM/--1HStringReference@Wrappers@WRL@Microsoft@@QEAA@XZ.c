/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180051EF0
 * Callers:
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$3 @ 0x180130C0E (_SpectrumListener--SpectrumListener_--_1_--dtor$3.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$6 @ 0x180130C20 (_SpectrumListener--SpectrumListener_--_1_--dtor$6.c)
 *     _MPCHeadMovementDetector::MPCHeadMovementDetector_::_1_::dtor$9 @ 0x180130CF0 (_MPCHeadMovementDetector--MPCHeadMovementDetector_--_1_--dtor$9.c)
 *     _GetPropertyValue_unsigned___int64__::_1_::dtor$4 @ 0x180130D52 (_GetPropertyValue_unsigned___int64__--_1_--dtor$4.c)
 *     _GetPropertyValue_unsigned_long__::_1_::dtor$4 @ 0x18013190B (_GetPropertyValue_unsigned_long__--_1_--dtor$4.c)
 *     _PnpApiWrapper::Details::OnDeviceNotification_::_1_::dtor$0 @ 0x180131AC7 (_PnpApiWrapper--Details--OnDeviceNotification_--_1_--dtor$0.c)
 *     _ButtonProcessor::OnCameraAccessToggle_::_1_::dtor$3 @ 0x18013493B (_ButtonProcessor--OnCameraAccessToggle_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
