/*
 * XREFs of WPP_SF_Idd @ 0x1800FA3C4
 * Callers:
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18003B400 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Idd(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids, 10LL, (__int64 *)va);
}
