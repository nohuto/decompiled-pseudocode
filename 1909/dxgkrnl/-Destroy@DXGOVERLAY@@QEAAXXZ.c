/*
 * XREFs of ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C02539E4
 * Callers:
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1C00CA3A4 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00E4D14 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02308B0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ??1DXGOVERLAY@@QEAA@XZ @ 0x1C02539A8 (--1DXGOVERLAY@@QEAA@XZ.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002758 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C01F6260 (-ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     ?DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1C01F982C (-DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGOVERLAY::Destroy(DXGOVERLAY *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 (__fastcall **v6)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rcx
  const GUID *v7; // r8
  __int64 v8; // rax
  void *v9; // rdx
  __int64 v10; // rdx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 188LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || v6[71] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[79] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[78] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    || v6[77] == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v8 + 24) = 189LL;
    WdLogEvent5_WdAssertion(v8);
  }
  *((_QWORD *)this + 6) = 0LL;
  v9 = (void *)*((_QWORD *)this + 5);
  if ( v9 )
  {
    ADAPTER_RENDER::DdiDestroyOverlay(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2560LL),
      v9,
      v7);
    *((_QWORD *)this + 5) = 0LL;
  }
  v10 = *((unsigned int *)this + 8);
  if ( (_DWORD)v10 != -1 )
  {
    ADAPTER_RENDER::ReleaseOverlayId(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2560LL),
      v10);
    *((_DWORD *)this + 8) = -1;
  }
}
