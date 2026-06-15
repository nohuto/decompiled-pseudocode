/*
 * XREFs of ?SetOverridingMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D5890
 * Callers:
 *     ?HandleOverridingMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x1800D2DA8 (-HandleOverridingMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800D6640 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18012F0AC (-GetProcessingModeSpecificOverridingMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetOverridingMixFormatInternal(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  int ProcessingModeSpecificOverridingMixFormatKey; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h]
  const struct tWAVEFORMATEX *v13; // [rsp+30h] [rbp-40h]
  struct _GUID v14; // [rsp+40h] [rbp-30h] BYREF
  struct _tagpropertykey v15; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( a2 != eOffloadConnector )
  {
    if ( a4 )
    {
      if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
      {
        ProcessingModeSpecificOverridingMixFormatKey = -2004287480;
        v9 = 4142LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          v9,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)ProcessingModeSpecificOverridingMixFormatKey);
        return (unsigned int)ProcessingModeSpecificOverridingMixFormatKey;
      }
      v13 = a4;
      LOWORD(v11) = 65;
      LODWORD(v12) = a4->cbSize + 18;
    }
    else
    {
      LOWORD(v11) = 0;
    }
    v14 = *a3;
    ProcessingModeSpecificOverridingMixFormatKey = GetProcessingModeSpecificOverridingMixFormatKey(
                                                     &v14,
                                                     a2 == eKeywordDetectorConnector,
                                                     &v15);
    if ( ProcessingModeSpecificOverridingMixFormatKey < 0 )
    {
      v9 = 4154LL;
      goto LABEL_5;
    }
    ProcessingModeSpecificOverridingMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, __int64 *))(**((_QWORD **)a1 + 5) + 48LL))(
                                                     *((_QWORD *)a1 + 5),
                                                     &v15,
                                                     &v11);
    if ( ProcessingModeSpecificOverridingMixFormatKey < 0 )
    {
      v9 = 4156LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
