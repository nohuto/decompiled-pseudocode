/*
 * XREFs of ?CacheOverridingMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180005F8C
 * Callers:
 *     ?DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x180005EF0 (-DeriveOverridingMixFormatInternal@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x180006044 (-GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007840 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheOverridingMixFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  int ProcessingModeSpecificOverridingMixFormatKey; // ebx
  __int64 v10; // rdx
  __int64 v11; // [rsp+20h] [rbp-68h] BYREF
  __int64 v12; // [rsp+28h] [rbp-60h]
  const struct tWAVEFORMATEX *v13; // [rsp+30h] [rbp-58h]
  struct _GUID v14; // [rsp+40h] [rbp-48h] BYREF
  struct _tagpropertykey v15; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( a2 == eOffloadConnector )
    return 0LL;
  if ( a4 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
    {
      ProcessingModeSpecificOverridingMixFormatKey = -2004287480;
      v10 = 7857LL;
      goto LABEL_9;
    }
    v13 = a4;
    LOWORD(v11) = 65;
    LODWORD(v12) = a4->cbSize + 18;
  }
  v14 = *a3;
  ProcessingModeSpecificOverridingMixFormatKey = GetProcessingModeSpecificOverridingMixFormatKey(
                                                   &v14,
                                                   a2 == eKeywordDetectorConnector,
                                                   &v15);
  if ( ProcessingModeSpecificOverridingMixFormatKey < 0 )
  {
    v10 = 7866LL;
  }
  else
  {
    ProcessingModeSpecificOverridingMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, __int64 *))(**((_QWORD **)this + 5) + 48LL))(
                                                     *((_QWORD *)this + 5),
                                                     &v15,
                                                     &v11);
    if ( ProcessingModeSpecificOverridingMixFormatKey >= 0 )
      return 0LL;
    v10 = 7868LL;
  }
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)ProcessingModeSpecificOverridingMixFormatKey);
  return (unsigned int)ProcessingModeSpecificOverridingMixFormatKey;
}
