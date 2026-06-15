/*
 * XREFs of ?RemoveAll@?$CAtlList@V?$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopologyWorkItem@@@2@@ATL@@QEAAXXZ @ 0x180054C08
 * Callers:
 *     ??1PhoneTopology@@MEAA@XZ @ 0x180054AC0 (--1PhoneTopology@@MEAA@XZ.c)
 *     ??1?$CAutoPtrList@VPhoneTopologyWorkItem@@@ATL@@QEAA@XZ @ 0x180147548 (--1-$CAutoPtrList@VPhoneTopologyWorkItem@@@ATL@@QEAA@XZ.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopologyWorkItem@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180147FDC (-FreeNode@-$CAtlList@V-$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhoneTo.c)
 * Callees:
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18004D0F8 (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@V?$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VPhoneTopologyWorkItem@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180147FDC (-FreeNode@-$CAtlList@V-$CAutoPtr@VPhoneTopologyWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VPhoneTo.c)
 */

void __fastcall ATL::CAtlList<ATL::CAutoPtr<PhoneTopologyWorkItem>,ATL::CAutoPtrElementTraits<PhoneTopologyWorkItem>>::RemoveAll(
        __int64 a1)
{
  ATL::CAtlPlex **v2; // rcx

  while ( *(_QWORD *)(a1 + 16) )
  {
    if ( !*(_QWORD *)a1 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)a1 = **(_QWORD **)a1;
    ATL::CAtlList<ATL::CAutoPtr<PhoneTopologyWorkItem>,ATL::CAutoPtrElementTraits<PhoneTopologyWorkItem>>::FreeNode(a1);
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(ATL::CAtlPlex ***)(a1 + 24);
  if ( v2 )
  {
    ATL::CAtlPlex::FreeDataChain(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
