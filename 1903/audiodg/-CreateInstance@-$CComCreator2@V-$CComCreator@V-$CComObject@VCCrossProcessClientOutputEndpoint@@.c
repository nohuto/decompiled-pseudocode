/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004EC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CCrossProcessClientOutputEndpoint>>,ATL::CComCreator<ATL::CComAggObject<CCrossProcessClientOutputEndpoint>>>::CreateInstance(
        __int64 a1)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CCrossProcessClientOutputEndpoint>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CCrossProcessClientOutputEndpoint>>::CreateInstance();
}
