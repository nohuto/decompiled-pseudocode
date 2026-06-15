/*
 * XREFs of ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180101D24
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18005E478 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     ??1?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ @ 0x1800FF340 (--1-$CAtlList@_KV-$CElementTraits@_K@ATL@@@ATL@@QEAA@XZ.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x180100DC8 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180101D24 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x180141F48 (--1CConstraintModel@@UEAA@XZ.c)
 *     ?CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@@Z @ 0x1801421D8 (-CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV-$CAtlMap@PEAVResourceConsumer@@PEAV-$CA.c)
 *     ??1TelephonyController@@MEAA@XZ @ 0x18014994C (--1TelephonyController@@MEAA@XZ.c)
 *     ?GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ @ 0x18014A0CC (-GetSupportedCellularRoutingPairs@TelephonyController@@AEAAJXZ.c)
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x18014A578 (-Initialize@TelephonyController@@IEAAJXZ.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18004D0F8 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180101D24 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(__int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  ATL::CAtlPlex **v5; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    do
    {
      v2 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        ATL::AtlThrowImpl(-2147467259);
      *(_QWORD *)a1 = *v2;
      *v2 = *(_QWORD *)(a1 + 32);
      v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
      v4 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 32) = v2;
      if ( v3 )
      {
        ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(a1);
        v4 = *(_QWORD *)(a1 + 16);
      }
    }
    while ( v4 );
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v5 = *(ATL::CAtlPlex ***)(a1 + 24);
  if ( v5 )
  {
    ATL::CAtlPlex::FreeDataChain(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
