/*
 * XREFs of _lambda_c576b7c555b6a6b1a6c16cffcb9322a9_::operator() @ 0x180066BA0
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x180066124 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_c576b7c555b6a6b1a6c16cffcb9322a9__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_1639d09af4dd5311acf19435b349233d___ @ 0x180066280 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_1639d09af4dd5311acf19435b3492.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x1800669C0 (CEndpointCharacteristics--GetDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180034B00 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18010D19C (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

char __fastcall lambda_c576b7c555b6a6b1a6c16cffcb9322a9_::operator()(__int64 a1, struct tWAVEFORMATEX *a2)
{
  struct _GUID v2; // xmm0
  char v3; // bl
  CEndpointCharacteristics *v6; // rcx
  int v7; // eax
  struct _GUID v9; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(struct _GUID *)(a1 + 8);
  v3 = 0;
  v6 = *(CEndpointCharacteristics **)a1;
  v9 = v2;
  if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
              (__int64)v6,
              0,
              &a2->wFormatTag,
              &v9,
              0,
              0LL,
              0LL,
              0LL,
              0LL) >= 0 )
    return 1;
  v7 = CEndpointCharacteristics::TryAddFormat(*(CEndpointCharacteristics **)a1, a2);
  if ( v7 >= 0 )
    return 1;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x17E7,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v7);
  return v3;
}
