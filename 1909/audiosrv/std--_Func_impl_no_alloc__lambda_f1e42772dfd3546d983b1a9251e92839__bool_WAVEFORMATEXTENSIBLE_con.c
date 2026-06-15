/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f1e42772dfd3546d983b1a9251e92839__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180002B90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18000C3F0 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x18000C494 (-IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800407D0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

bool __fastcall std::_Func_impl_no_alloc__lambda_f1e42772dfd3546d983b1a9251e92839__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call(
        __int64 a1,
        const struct tWAVEFORMATEX **a2)
{
  const struct tWAVEFORMATEX *v2; // rbx
  __int64 v4; // rcx
  __int128 v6; // [rsp+50h] [rbp-18h] BYREF

  v2 = *a2;
  if ( IsDolbyMatFormat(*a2)
    && CEndpointCharacteristics::IsCompressedFormatSupported(
         *(CEndpointCharacteristics **)(a1 + 8),
         (const struct _GUID *)((char *)&v2[1].nSamplesPerSec + 2)) )
  {
    return 1;
  }
  v4 = *(_QWORD *)(a1 + 8);
  v6 = *(_OWORD *)(a1 + 16);
  return (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v4, 0LL, v2, &v6, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}
