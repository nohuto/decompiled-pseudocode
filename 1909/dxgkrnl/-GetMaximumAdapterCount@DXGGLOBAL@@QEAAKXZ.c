/*
 * XREFs of ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00CF5C0
 * Callers:
 *     ?DXGGLOBAL_GetMaximumAdapterCount@@YAKPEAVDXGGLOBAL@@@Z @ 0x1C00021D0 (-DXGGLOBAL_GetMaximumAdapterCount@@YAKPEAVDXGGLOBAL@@@Z.c)
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CE890 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CEB9C (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C01504F0 (-DxgkGetMaximumAdapterCount@@YAKXZ.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C02C04BC (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCount(DXGGLOBAL *this, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = *((unsigned int *)this + 248);
  if ( !(_DWORD)result )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 2436LL;
    WdLogEvent5_WdAssertion(v4);
    return *((unsigned int *)this + 248);
  }
  return result;
}
