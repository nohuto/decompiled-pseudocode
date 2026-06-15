/*
 * XREFs of ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180108CC0
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x1800664F0 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1801062A4 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x180106800 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x18010B8BC (-GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PE.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(_QWORD *a1)
{
  LPVOID v2; // rax

  v2 = CoTaskMemAlloc(0x68uLL);
  *a1 = v2;
  return v2 != 0LL;
}
