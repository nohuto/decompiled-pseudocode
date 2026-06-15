/*
 * XREFs of std::_Func_impl_no_alloc__lambda_d688b6ce4f9a3e900547f5cf0679d940__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x18010E0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180034B00 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x180056280 (-IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z.c)
 *     ?IsDolbyMatFormat@CEndpointCharacteristics@@CA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18010BF6C (-IsDolbyMatFormat@CEndpointCharacteristics@@CA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 */

bool __fastcall std::_Func_impl_no_alloc__lambda_d688b6ce4f9a3e900547f5cf0679d940__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call(
        __int64 a1,
        const struct WAVEFORMATEXTENSIBLE **a2)
{
  struct WAVEFORMATEXTENSIBLE *v2; // rbx
  __int64 v5; // rcx
  struct _GUID v6; // [rsp+50h] [rbp-18h] BYREF

  v2 = (struct WAVEFORMATEXTENSIBLE *)*a2;
  if ( CEndpointCharacteristics::IsDolbyMatFormat(*a2)
    && CEndpointCharacteristics::IsCompressedFormatSupported(*(CEndpointCharacteristics **)(a1 + 8), &v2->SubFormat) )
  {
    return 1;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(struct _GUID *)(a1 + 16);
  return (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                v5,
                0,
                &v2->Format.wFormatTag,
                &v6,
                0,
                0LL,
                0LL,
                0LL,
                0LL) >= 0;
}
