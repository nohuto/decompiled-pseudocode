/*
 * XREFs of ?SetCopyProtectionWithLock@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CF180
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CF408 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     DxgkSetDisplayMode @ 0x1C011E5E0 (DxgkSetDisplayMode.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C011EBA8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1C0122E70 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00CF240 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::SetCopyProtectionWithLock(DXGADAPTER **this, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v11 + 24) = 5273LL;
    WdLogEvent5_WdAssertion(v11);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v12 + 24) = 5276LL;
    WdLogEvent5_WdAssertion(v12);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 39) + 8LL) != CurrentThread )
  {
    v8 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v8 + 24) = 5277LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v9 = ADAPTER_DISPLAY::SetCopyProtection((ADAPTER_DISPLAY *)this, a2);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return v9;
}
