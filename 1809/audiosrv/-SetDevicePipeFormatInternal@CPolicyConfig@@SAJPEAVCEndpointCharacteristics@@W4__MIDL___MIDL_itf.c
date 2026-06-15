/*
 * XREFs of ?SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x1800D4F5C
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800CFD48 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800D6640 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z @ 0x18012EFEC (-GetProcessingModeSpecificDevicePipeFormatKey@@YAJU_GUID@@HPEAU_tagpropertykey@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetDevicePipeFormatInternal(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX *a4)
{
  int ProcessingModeSpecificDevicePipeFormatKey; // ebx
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h]
  struct tWAVEFORMATEX *v12; // [rsp+30h] [rbp-40h]
  struct _GUID v13; // [rsp+40h] [rbp-30h] BYREF
  struct _tagpropertykey v14; // [rsp+50h] [rbp-20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( a4 )
  {
    if ( (unsigned int)ValidateUncompressedWaveFormatEx(a4) )
    {
      ProcessingModeSpecificDevicePipeFormatKey = -2004287480;
LABEL_8:
      AudSrvTraceLoggingErrorHelper(
        "CPolicyConfig::SetDevicePipeFormatInternal",
        4241,
        ProcessingModeSpecificDevicePipeFormatKey);
      return (unsigned int)ProcessingModeSpecificDevicePipeFormatKey;
    }
    v12 = a4;
    LOWORD(v10) = 65;
    LODWORD(v11) = a4->cbSize + 18;
  }
  else
  {
    LOWORD(v10) = 0;
  }
  v13 = *a3;
  ProcessingModeSpecificDevicePipeFormatKey = GetProcessingModeSpecificDevicePipeFormatKey(
                                                &v13,
                                                a2 == eKeywordDetectorConnector,
                                                &v14);
  if ( ProcessingModeSpecificDevicePipeFormatKey < 0 )
    goto LABEL_8;
  ProcessingModeSpecificDevicePipeFormatKey = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, __int64 *))(**((_QWORD **)a1 + 5) + 48LL))(
                                                *((_QWORD *)a1 + 5),
                                                &v14,
                                                &v10);
  if ( ProcessingModeSpecificDevicePipeFormatKey < 0 )
    goto LABEL_8;
  return (unsigned int)ProcessingModeSpecificDevicePipeFormatKey;
}
