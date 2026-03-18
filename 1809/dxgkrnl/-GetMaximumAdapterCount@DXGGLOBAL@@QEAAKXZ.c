/*
 * XREFs of ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00CD9C0
 * Callers:
 *     ?DXGGLOBAL_GetMaximumAdapterCount@@YAKPEAVDXGGLOBAL@@@Z @ 0x1C0005B80 (-DXGGLOBAL_GetMaximumAdapterCount@@YAKPEAVDXGGLOBAL@@@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CC948 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C00CD6C0 (-DxgkEnumAdapters2@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00E0B54 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ?DxgkGetMaximumAdapterCount@@YAKXZ @ 0x1C013BCB0 (-DxgkGetMaximumAdapterCount@@YAKXZ.c)
 *     ?DeferredInitialize@DXGARGONEMULATIONPROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0228C04 (-DeferredInitialize@DXGARGONEMULATIONPROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C0288084 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::GetMaximumAdapterCount(DXGGLOBAL *this)
{
  __int64 result; // rax
  __int64 v3; // rax

  result = *((unsigned int *)this + 256);
  if ( !(_DWORD)result )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 2287LL;
    WdLogEvent5_WdAssertion(v3);
    return *((unsigned int *)this + 256);
  }
  return result;
}
