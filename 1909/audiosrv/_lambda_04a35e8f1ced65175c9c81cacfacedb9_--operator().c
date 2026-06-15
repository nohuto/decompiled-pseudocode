/*
 * XREFs of _lambda_04a35e8f1ced65175c9c81cacfacedb9_::operator() @ 0x180115254
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180112BFC (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_04a35e8f1ced65175c9c81cacfacedb9__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_ae96820b4eb80ed9553374ed48d01cb4___ @ 0x180112EBC (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_ae96820b4eb80ed9553374ed48d01.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180114644 (CEndpointCharacteristics--GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800407D0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

bool __fastcall lambda_04a35e8f1ced65175c9c81cacfacedb9_::operator()(__int64 a1, unsigned __int16 *a2)
{
  struct _GUID v3; // xmm0
  int v4; // edx
  __int64 v5; // rcx
  struct _GUID v7; // [rsp+50h] [rbp-18h] BYREF

  v3 = *(struct _GUID *)(a1 + 12);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_QWORD *)a1;
  v7 = v3;
  return (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(v5, v4, a2, &v7, 0, 0LL, 0LL, 0LL, 0LL) >= 0;
}
