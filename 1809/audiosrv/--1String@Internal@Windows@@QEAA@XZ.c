/*
 * XREFs of ??1String@Internal@Windows@@QEAA@XZ @ 0x180137520
 * Callers:
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$15 @ 0x18006AE78 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$15.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$20 @ 0x18006AE8A (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$20.c)
 *     _InitializeSpatialAudioFormatSubtypeInfoArray_::_1_::dtor$1 @ 0x18006F5E0 (_InitializeSpatialAudioFormatSubtypeInfoArray_--_1_--dtor$1.c)
 *     _ProcessSpatialAudioFormatElement_::_1_::dtor$4 @ 0x18013B127 (_ProcessSpatialAudioFormatElement_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::String::~String(HSTRING *this)
{
  HSTRING v1; // rcx

  v1 = *this;
  if ( v1 )
    WindowsDeleteString(v1);
}
