/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18013DA24
 * Callers:
 *     _InitializeSpatialAudioFormatSubtypeInfoArray_::_1_::dtor$1 @ 0x18006CE62 (_InitializeSpatialAudioFormatSubtypeInfoArray_--_1_--dtor$1.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$15 @ 0x18006D8FC (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$15.c)
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$20 @ 0x18006D920 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$20.c)
 *     _ProcessSpatialAudioFormatElement_::_1_::dtor$4 @ 0x18013FD37 (_ProcessSpatialAudioFormatElement_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(
        HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
