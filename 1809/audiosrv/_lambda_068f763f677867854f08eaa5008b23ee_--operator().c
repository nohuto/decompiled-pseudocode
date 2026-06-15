/*
 * XREFs of _lambda_068f763f677867854f08eaa5008b23ee_::operator() @ 0x180107C2C
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x18010538C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_068f763f677867854f08eaa5008b23ee__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d___ @ 0x18010564C (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180106DD4 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180034B00 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

bool __fastcall lambda_068f763f677867854f08eaa5008b23ee_::operator()(__int64 a1, unsigned __int16 *a2)
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
