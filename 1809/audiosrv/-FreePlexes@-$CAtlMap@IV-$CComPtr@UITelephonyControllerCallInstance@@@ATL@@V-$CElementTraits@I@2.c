/*
 * XREFs of ?FreePlexes@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXXZ @ 0x18005EAD0
 * Callers:
 *     ??1PhoneTopology@@MEAA@XZ @ 0x1800510A8 (--1PhoneTopology@@MEAA@XZ.c)
 *     ?FreeNode@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180143CF0 (-FreeNode@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x180045E64 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::FreePlexes(
        __int64 a1)
{
  ATL::CAtlPlex **v2; // rcx

  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = *(ATL::CAtlPlex ***)(a1 + 56);
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}
