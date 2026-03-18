/*
 * XREFs of ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA568
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C001E418 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA888 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 */

__int64 __fastcall DmmUpdateTargetLinkTrainingState(
        PERESOURCE *a1,
        struct _DXGK_CONNECTION_CHANGE *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        char a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  VIDPN_MGR *Address; // rbx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v10);
  }
  Address = (VIDPN_MGR *)a1[319]->Address;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v13, (__int64)Address);
  LODWORD(Address) = VIDPN_MGR::UpdateTargetLinkTrainingStatus(Address, a2, 1u, a3, a4);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 40));
  return (unsigned int)Address;
}
