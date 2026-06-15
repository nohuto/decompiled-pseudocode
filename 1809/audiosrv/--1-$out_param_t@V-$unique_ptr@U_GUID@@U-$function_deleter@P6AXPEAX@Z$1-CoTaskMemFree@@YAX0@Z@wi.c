/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800CE924
 * Callers:
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$3 @ 0x18006B692 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$17 @ 0x18006B6E2 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$17.c)
 *     _CreateSaDevice_::_1_::dtor$9 @ 0x18006DDF0 (_CreateSaDevice_--_1_--dtor$9.c)
 *     _CreateSaDevice_::_1_::dtor$10 @ 0x18006DE10 (_CreateSaDevice_--_1_--dtor$10.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$5 @ 0x18006E730 (_InitializeStreamAndModeDescriptors_--_1_--dtor$5.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$8 @ 0x18006E790 (_InitializeStreamAndModeDescriptors_--_1_--dtor$8.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$12 @ 0x18006E810 (_InitializeStreamAndModeDescriptors_--_1_--dtor$12.c)
 *     _CPolicyConfig::SetDeviceFormatCommon_::_1_::dtor$4 @ 0x1800D46EA (_CPolicyConfig--SetDeviceFormatCommon_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        void ***a1)
{
  void **v1; // rbx
  void **v2; // rdi
  void **v3; // rcx

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = a1[1];
    v2 = *a1;
    v3 = (void **)**a1;
    if ( v1 != v3 )
    {
      if ( v3 )
        CoTaskMemFree(v3);
      *v2 = v1;
    }
  }
}
