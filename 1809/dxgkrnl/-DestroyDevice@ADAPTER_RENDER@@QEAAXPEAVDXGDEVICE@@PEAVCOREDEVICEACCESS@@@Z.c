/*
 * XREFs of ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE190
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF3E4 (-DestroyDeviceNoLocksInternal@ADAPTER_RENDER@@AEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C01399A0 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0010860 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010884 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C00E9684 (--1DXGDEVICE@@QEAA@XZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE2D4 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01DF2BC (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDevice(DXGADAPTER **this, struct DXGDEVICE *a2, struct COREDEVICEACCESS *a3)
{
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rsi
  ADAPTER_DISPLAY *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct DXGDEVICE **v12; // rcx
  struct DXGDEVICE **v13; // rdx
  struct DXGDEVICE *v14; // rax
  struct DXGDEVICE **v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v16 + 24) = 1832LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((_DWORD *)a2 + 82) == 2 )
  {
    if ( this[6] == CurrentThread )
      goto LABEL_5;
    v17 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v17 + 24) = 1835LL;
LABEL_23:
    WdLogEvent5_WdAssertion(v17);
    goto LABEL_5;
  }
  if ( this[4] != CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v17 + 24) = 1839LL;
    goto LABEL_23;
  }
LABEL_5:
  if ( *((_DWORD *)this[2] + 44) == 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 5) + 48LL) + 8LL * *((unsigned int *)this[2] + 52));
    if ( v8 )
    {
      if ( *(struct DXGDEVICE **)(v8 + 40) == a2 )
      {
        DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(this[187], a2);
        *(_QWORD *)(v8 + 40) = 0LL;
      }
    }
  }
  v9 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 315);
  if ( v9 && ADAPTER_DISPLAY::IsVidPnSourceOwner(v9, a2) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v18 + 24) = 1874LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v19 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v19 + 24) = 1880LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v12 = (struct DXGDEVICE **)*((_QWORD *)a2 + 3);
  if ( v12[1] != (struct DXGDEVICE *)((char *)a2 + 24)
    || (v13 = (struct DXGDEVICE **)*((_QWORD *)a2 + 4), *v13 != (struct DXGDEVICE *)((char *)a2 + 24))
    || (*v13 = (struct DXGDEVICE *)v12,
        v12[1] = (struct DXGDEVICE *)v13,
        DXGDEVICE::DestroyAllDeviceState(a2, a3),
        v14 = *(struct DXGDEVICE **)a2,
        *(struct DXGDEVICE **)(*(_QWORD *)a2 + 8LL) != a2)
    || (v15 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1), *v15 != a2) )
  {
    __fastfail(3u);
  }
  *v15 = v14;
  *((_QWORD *)v14 + 1) = v15;
  DXGDEVICE::~DXGDEVICE(a2);
  ExFreePoolWithTag(a2, 0);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
}
