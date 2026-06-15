/*
 * XREFs of ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18011602C
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180114014 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x180114570 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___.c)
 *     ?GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@PEAPEAUKSMULTIPLE_ITEM@@@Z @ 0x180119054 (-GetSupportedDataRangeForEndpoint@@YAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PE.c)
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
