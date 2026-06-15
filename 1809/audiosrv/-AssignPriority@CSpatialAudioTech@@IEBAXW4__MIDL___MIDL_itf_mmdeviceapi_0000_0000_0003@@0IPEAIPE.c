/*
 * XREFs of ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x180055D5C
 * Callers:
 *     ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055180 (-IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800553B0 (-IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800555E0 (-IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_.c)
 *     ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055830 (-IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0.c)
 *     ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180055A80 (-IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialAudioTech::AssignPriority(
        CSpatialAudioTech *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a3,
        unsigned int a4,
        unsigned int *a5,
        bool *a6)
{
  int DefaultSpatialRenderingMode; // ebp

  DefaultSpatialRenderingMode = 0;
  *a5 = 0;
  *a6 = 1;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this) )
    DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode(a2);
  if ( DefaultSpatialRenderingMode == (*(unsigned int (__fastcall **)(CSpatialAudioTech *))(*(_QWORD *)this + 64LL))(this) )
  {
    *a5 = 1;
  }
  else if ( DefaultSpatialRenderingMode )
  {
    *a6 = 0;
  }
  else if ( a2 == a3 || a2 == 5 && a3 == Headphones )
  {
    *a5 = a4;
  }
}
