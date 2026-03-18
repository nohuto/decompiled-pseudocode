/*
 * XREFs of ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00020DC
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF18C (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C00E9980 (DxgkGetAdapterDeviceDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayId(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v5 + 24) = 5590LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return *(unsigned int *)(3968 * v3 + *((_QWORD *)this + 14) + 624);
}
