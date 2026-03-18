/*
 * XREFs of ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0124C54
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C01251E8 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C014DF20 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C000CB9C (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000CCA0 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01246E4 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C020EC84 (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDevice(DXGADAPTER **this, struct DXGDEVICE *a2, PERESOURCE **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rsi
  ADAPTER_DISPLAY *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGDEVICE **v13; // rcx
  struct DXGDEVICE **v14; // rdx
  struct DXGDEVICE *v15; // rax
  struct DXGDEVICE **v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v17 + 24) = 1858LL;
    WdLogEvent5_WdAssertion(v17);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 82) == 2 )
  {
    if ( this[6] == CurrentThread )
      goto LABEL_5;
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v18 + 24) = 1861LL;
LABEL_23:
    WdLogEvent5_WdAssertion(v18);
    goto LABEL_5;
  }
  if ( this[4] != CurrentThread )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v18 + 24) = 1865LL;
    goto LABEL_23;
  }
LABEL_5:
  if ( *((_DWORD *)this[2] + 44) == 1 )
  {
    v6 = *((unsigned int *)this[2] + 52);
    v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 48LL) + 8 * v6);
    if ( v9 )
    {
      if ( *(struct DXGDEVICE **)(v9 + 40) == a2 )
      {
        DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(this[187], a2);
        *(_QWORD *)(v9 + 40) = 0LL;
      }
    }
  }
  v10 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 319);
  if ( v10 && ADAPTER_DISPLAY::IsVidPnSourceOwner(v10, a2) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10, v6);
    *(_QWORD *)(v19 + 24) = 1900LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DXGPROCESS::GetCurrent((__int64)v10, v6) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v20 + 24) = 1906LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v13 = (struct DXGDEVICE **)*((_QWORD *)a2 + 3);
  if ( v13[1] != (struct DXGDEVICE *)((char *)a2 + 24)
    || (v14 = (struct DXGDEVICE **)*((_QWORD *)a2 + 4), *v14 != (struct DXGDEVICE *)((char *)a2 + 24))
    || (*v14 = (struct DXGDEVICE *)v13,
        v13[1] = (struct DXGDEVICE *)v14,
        DXGDEVICE::DestroyAllDeviceState(a2, a3),
        v15 = *(struct DXGDEVICE **)a2,
        *(struct DXGDEVICE **)(*(_QWORD *)a2 + 8LL) != a2)
    || (v16 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1), *v16 != a2) )
  {
    __fastfail(3u);
  }
  *v16 = v15;
  *((_QWORD *)v15 + 1) = v16;
  DXGDEVICE::`scalar deleting destructor'(a2);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
}
