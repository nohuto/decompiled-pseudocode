/*
 * XREFs of ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140035974
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D050 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140012BE0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ??1?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAA@XZ @ 0x140035310 (--1-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??1?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAA@XZ @ 0x14003531C (--1-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V-$.c)
 *     ?FreeNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400355B0 (-FreeNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x14003E504 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x140031CBC (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1400355B0 (-FreeNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@.c)
 */

void __fastcall ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(
        __int64 *a1)
{
  __int64 *v2; // rdx
  ATL::CAtlPlex **v3; // rcx

  while ( a1[2] )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      ATL::AtlThrowImpl(-2147467259);
    *a1 = *v2;
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode((__int64)a1, v2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v3 = (ATL::CAtlPlex **)a1[3];
  if ( v3 )
  {
    ATL::CAtlPlex::FreeDataChain(v3);
    a1[3] = 0LL;
  }
}
