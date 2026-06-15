/*
 * XREFs of ?AddHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIPolicyRule@@@Z @ 0x18011D6D4
 * Callers:
 *     ?FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4RuleType@@PEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011E118 (-FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY07_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011FAC0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_i.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z @ 0x18011FC44 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAUIPolicyRule@@PEAV312@1@Z @ 0x18011E678 (-NewNode@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@AEAAPEAVCNod.c)
 */

__int64 __fastcall ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::AddHead(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::NewNode(a1, a2, a3, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
