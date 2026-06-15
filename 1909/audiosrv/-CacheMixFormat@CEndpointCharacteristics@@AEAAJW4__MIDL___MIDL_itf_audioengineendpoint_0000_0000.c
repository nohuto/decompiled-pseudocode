/*
 * XREFs of ?CacheMixFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800076B4
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180006738 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x1800077E0 (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180007840 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000E2F0 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::CacheMixFormat(
        CEndpointCharacteristics *this,
        unsigned int a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  int ProcessingModeSpecificMixFormatKey; // ebx
  struct _GUID *DefaultConnectorProcessingModeInternal; // rax
  __int64 v10; // rcx
  struct _GUID v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+28h] [rbp-48h]
  const struct tWAVEFORMATEX *v18; // [rsp+30h] [rbp-40h]
  struct _GUID v19; // [rsp+40h] [rbp-30h] BYREF
  struct _tagpropertykey v20; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( a2 == 1 )
    return 0LL;
  if ( a4 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
    {
      ProcessingModeSpecificMixFormatKey = -2004287480;
      v15 = 7889LL;
      goto LABEL_14;
    }
    v18 = a4;
    LOWORD(v16) = 65;
    LODWORD(v17) = a4->cbSize + 18;
  }
  v19 = *a3;
  ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(&v19, a2 == 3, &v20);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
  {
    v15 = 7898LL;
  }
  else
  {
    ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, __int64 *))(**((_QWORD **)this + 5) + 48LL))(
                                           *((_QWORD *)this + 5),
                                           &v20,
                                           &v16);
    if ( ProcessingModeSpecificMixFormatKey < 0 )
    {
      v15 = 7900LL;
    }
    else
    {
      DefaultConnectorProcessingModeInternal = (struct _GUID *)CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                                                                 this,
                                                                 &v19,
                                                                 a2,
                                                                 0LL,
                                                                 v16,
                                                                 v17,
                                                                 v18);
      v10 = *(_QWORD *)&a3->Data1;
      v11 = *DefaultConnectorProcessingModeInternal;
      v12 = *(_QWORD *)&DefaultConnectorProcessingModeInternal->Data1;
      v19 = v11;
      v13 = v10 - v12;
      if ( !v13 )
        v13 = *(_QWORD *)a3->Data4 - *(_QWORD *)v19.Data4;
      if ( v13 )
        return 0LL;
      ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64 *))(**((_QWORD **)this + 5) + 48LL))(
                                             *((_QWORD *)this + 5),
                                             &PKEY_AudioEngine_MixFormat,
                                             &v16);
      if ( ProcessingModeSpecificMixFormatKey >= 0 )
        return 0LL;
      v15 = 7908LL;
    }
  }
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)ProcessingModeSpecificMixFormatKey);
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
