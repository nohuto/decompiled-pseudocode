/*
 * XREFs of ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D55E4
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800CFD48 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800D6640 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18010A5A8 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18012F04C (-GetProcessingModeSpecificMixFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetMixFormatInternal(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  __int64 v8; // rbx
  int ProcessingModeSpecificMixFormatKey; // edi
  __int64 v10; // rax
  __int64 v12; // [rsp+30h] [rbp-39h] BYREF
  __int64 v13; // [rsp+38h] [rbp-31h]
  const struct tWAVEFORMATEX *v14; // [rsp+40h] [rbp-29h]
  __int64 v15; // [rsp+48h] [rbp-21h]
  __int64 v16; // [rsp+50h] [rbp-19h]
  struct _GUID v17; // [rsp+60h] [rbp-9h] BYREF
  struct _tagpropertykey v18; // [rsp+70h] [rbp+7h] BYREF

  v15 = -2LL;
  v8 = 0LL;
  if ( !a1 )
  {
    ProcessingModeSpecificMixFormatKey = -2147467261;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetMixFormatInternal", 4099, ProcessingModeSpecificMixFormatKey);
    goto LABEL_18;
  }
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( a2 == eOffloadConnector )
  {
    ProcessingModeSpecificMixFormatKey = 0;
    goto LABEL_18;
  }
  if ( a4 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
    {
      ProcessingModeSpecificMixFormatKey = -2004287480;
      goto LABEL_17;
    }
    LOWORD(v12) = 65;
    LODWORD(v13) = a4->cbSize + 18;
    v14 = a4;
  }
  else
  {
    LOWORD(v12) = 0;
  }
  v17 = *a3;
  ProcessingModeSpecificMixFormatKey = GetProcessingModeSpecificMixFormatKey(
                                         &v17,
                                         a2 == eKeywordDetectorConnector,
                                         &v18);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_17;
  v8 = *((_QWORD *)a1 + 2);
  v16 = v8;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, __int64 *))(**((_QWORD **)a1 + 5) + 48LL))(
                                         *((_QWORD *)a1 + 5),
                                         &v18,
                                         &v12);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_17;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(a1, a2, 0LL, 0LL, &v17);
  v10 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&v17.Data1;
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&v17.Data1 )
    v10 = *(_QWORD *)a3->Data4 - *(_QWORD *)v17.Data4;
  if ( !v10 )
    ProcessingModeSpecificMixFormatKey = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64 *))(**((_QWORD **)a1 + 5)
                                                                                                  + 48LL))(
                                           *((_QWORD *)a1 + 5),
                                           &PKEY_AudioEngine_MixFormat,
                                           &v12);
  if ( ProcessingModeSpecificMixFormatKey < 0 )
    goto LABEL_17;
LABEL_18:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)ProcessingModeSpecificMixFormatKey;
}
