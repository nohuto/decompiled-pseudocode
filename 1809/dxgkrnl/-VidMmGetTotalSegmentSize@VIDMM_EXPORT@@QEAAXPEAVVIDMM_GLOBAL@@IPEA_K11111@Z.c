/*
 * XREFs of ?VidMmGetTotalSegmentSize@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@IPEA_K11111@Z @ 0x1C000E64C
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0113370 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014CCC4 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_EXPORT::VidMmGetTotalSegmentSize(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        unsigned int a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v14; // rbx

  Current = DXGPROCESS::GetCurrent();
  v14 = Current;
  if ( Current )
  {
    if ( *((struct _KTHREAD **)Current + 19) == KeGetCurrentThread() )
      v14 = 0LL;
    else
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 144));
  }
  (*(void (__fastcall **)(struct VIDMM_GLOBAL *, _QWORD, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(*((_QWORD *)this + 1) + 72LL))(
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  if ( v14 )
  {
    *((_QWORD *)v14 + 19) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v14 + 144, 0LL);
    KeLeaveCriticalRegion();
  }
}
